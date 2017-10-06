/*
 * Copyright (c) 2009-2012 Xilinx, Inc.  All rights reserved.
 *
 * Xilinx, Inc.
 * XILINX IS PROVIDING THIS DESIGN, CODE, OR INFORMATION "AS IS" AS A
 * COURTESY TO YOU.  BY PROVIDING THIS DESIGN, CODE, OR INFORMATION AS
 * ONE POSSIBLE   IMPLEMENTATION OF THIS FEATURE, APPLICATION OR
 * STANDARD, XILINX IS MAKING NO REPRESENTATION THAT THIS IMPLEMENTATION
 * IS FREE FROM ANY CLAIMS OF INFRINGEMENT, AND YOU ARE RESPONSIBLE
 * FOR OBTAINING ANY RIGHTS YOU MAY REQUIRE FOR YOUR IMPLEMENTATION.
 * XILINX EXPRESSLY DISCLAIMS ANY WARRANTY WHATSOEVER WITH RESPECT TO
 * THE ADEQUACY OF THE IMPLEMENTATION, INCLUDING BUT NOT LIMITED TO
 * ANY WARRANTIES OR REPRESENTATIONS THAT THIS IMPLEMENTATION IS FREE
 * FROM CLAIMS OF INFRINGEMENT, IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS FOR A PARTICULAR PURPOSE.
 *
 */

/*
 * helloworld.c: simple test application
 *
 * This application configures UART 16550 to baud rate 9600.
 * PS7 UART (Zynq) is not initialized by this application, since
 * bootrom/bsp configures it to baud rate 115200
 *
 * ------------------------------------------------
 * | UART TYPE   BAUD RATE                        |
 * ------------------------------------------------
 *   uartns550   9600
 *   uartlite    Configurable only in HW design
 *   ps7_uart    115200 (configured by bootrom/bsp)
 */

#include <stdio.h>
#include "platform.h"

#include "xparameters.h"
#include "plb_dac.h"
#include "xuartlite.h"
#include "xintc.h"
#include "xil_exception.h"


typedef struct{
	u8 dac_en;
	u8 openi;
	u8 openq;
	u8 waveform_i;
	u8 waveform_q;
	u8 freq_ctrl;
} DACCtrl;

void print(char *str);
void uart1_sendhandler(void *CallBackRef, unsigned int EventData);
void uart1_recvhandler(void *CallBackRef, unsigned int EventData);

void genDACCtrl();
void prtDACState();

XUartLite xuart_1;
XIntc xintc_0;

u32 dac1_ctrl;
u32 waveform, freq_ctrl;


int main()
{

    init_platform();

    print("Hello World\r\n");


    XUartLite_Initialize(&xuart_1, XPAR_UARTLITE_1_DEVICE_ID);

    XIntc_Initialize(&xintc_0, XPAR_XPS_INTC_0_DEVICE_ID);
    XIntc_Connect(&xintc_0,  XPAR_INTC_0_UARTLITE_1_VEC_ID,
    			   (XInterruptHandler)XUartLite_InterruptHandler,
    			   &xuart_1);
    XIntc_Start(&xintc_0, XIN_REAL_MODE);
    XIntc_Enable(&xintc_0, XPAR_INTC_0_UARTLITE_1_VEC_ID);
    Xil_ExceptionInit();
    Xil_ExceptionRegisterHandler(XIL_EXCEPTION_ID_INT,
    			 (Xil_ExceptionHandler)XIntc_InterruptHandler,
    			 &xintc_0);
    Xil_ExceptionEnable();

    XUartLite_SetSendHandler(&xuart_1, uart1_sendhandler, &xuart_1);
    XUartLite_SetRecvHandler(&xuart_1, uart1_recvhandler, &xuart_1);
    XUartLite_EnableInterrupt(&xuart_1);


    PLB_DAC_mWriteReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG0_OFFSET, 0x00000001);
    PLB_DAC_mWriteReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG0_OFFSET, 0x00000001);

    PLB_DAC_mWriteReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG3_OFFSET, 0x00000580);
    while(PLB_DAC_mReadReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;

    PLB_DAC_mWriteReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG3_OFFSET, 0x00000880);
    while(PLB_DAC_mReadReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;

    PLB_DAC_mWriteReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG3_OFFSET, 0x00000580);
    while(PLB_DAC_mReadReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;

    PLB_DAC_mWriteReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG3_OFFSET, 0x00000880);
    while(PLB_DAC_mReadReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;

    waveform = 4;
    freq_ctrl = 0x1f4;
    genDACCtrl();
    prtDACState();


    while(1)
    {
    }


    return 0;
}

void genDACCtrl()
{
	dac1_ctrl = PLB_DAC_mReadReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG0_OFFSET);
	dac1_ctrl &= 0x000000ff;
	dac1_ctrl |= waveform << 8;
	dac1_ctrl |= waveform << 12;
	dac1_ctrl |= freq_ctrl << 16;
	PLB_DAC_mWriteReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG0_OFFSET, dac1_ctrl);
	PLB_DAC_mWriteReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG0_OFFSET, dac1_ctrl);
}

void prtDACState()
{
	char waveform_strs[5][10] = {"DC", "Rect", "Saw", "Cos", "Arb"};
	u32 freq = 1530 * (freq_ctrl + 1);
	xil_printf("DAC 1 Channel I, Waveform: %s, Phase Increasment: %d, freq: %dns\r\n", waveform_strs[waveform], freq_ctrl, freq);
	xil_printf("D: DC\r\nR: Rect\r\nS: Saw\r\nC: Cos\r\nA: Arb\r\n+: inc freq\r\n-: dec freq\r\n*: mult freq\r\n/: divd freq\r\n");
}

void uart1_sendhandler(void *CallBackRef, unsigned int EventData)
{

}

u8 msg_state = 0;
//u32 spi_msg;
u8 msg = 0, p_msg, pp_msg = 0;

void uart1_recvhandler(void *CallBackRef, unsigned int EventData)
{
	u32 reg_data, reg_addr, reg_val;

	pp_msg = p_msg;
	p_msg = msg;

	XUartLite_Recv(CallBackRef, &msg, 1);
	xil_printf("%c\r\n", msg);

	switch(msg)
	{
	case 'D':
		waveform = 0;
		genDACCtrl();
		msg_state = 1;
		break;
	case 'R':
		waveform = 1;
		genDACCtrl();
		msg_state = 1;
		break;
	case 'S':
		waveform = 2;
		genDACCtrl();
		msg_state = 1;
		break;
	case 'C':
		waveform = 3;
		genDACCtrl();
		msg_state = 1;
		break;
	case 'A':
		waveform = 4;
		genDACCtrl();
		msg_state = 1;
		break;
	case '+':
		if (freq_ctrl < 65536)
		{
			++freq_ctrl;
			genDACCtrl();
		}
		msg_state = 1;
		break;
	case '*':
		if (freq_ctrl < 32768)
		{
			freq_ctrl <<= 1;
			genDACCtrl();
		}
		msg_state = 1;
		break;
	case '-':
		if (freq_ctrl > 0)
		{
			--freq_ctrl;
			genDACCtrl();
		}
		msg_state = 1;
		break;
	case '/':
		if (freq_ctrl > 0)
		{
			freq_ctrl >>= 1;
			genDACCtrl();
		}
		msg_state = 1;
		break;
	case 'W':
		//wr_flag = 1;
		//spi_msg = 0;
		/*
		//for (i = 0; i < 1000000; i++) ;
		reg_addr = 0;
		XUartLite_Recv(CallBackRef, &reg_addr, 1);
		reg_val = 0;
		XUartLite_Recv(CallBackRef, &reg_val, 1);
		reg_data = (reg_addr << 8) + reg_val;
		xil_printf("SPI DATA: %x\r\n", reg_data);
		PLB_DAC_mWriteReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG3_OFFSET, reg_data);
		while(PLB_DAC_mReadReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;

		reg_data = 0x8000 | (reg_addr << 8);
		xil_printf("SPI DATA: %x\r\n", reg_data);
		PLB_DAC_mWriteReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG3_OFFSET, reg_data);
		while(PLB_DAC_mReadReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;
		    reg_val = PLB_DAC_mReadReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG3_OFFSET) & 0xff;
		    while(PLB_DAC_mReadReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;

		    xil_printf("DAC 0 - Reg 0x%x: %x\r\n", reg_addr, reg_val);*/
		break;
	case ';':
		reg_addr = pp_msg;
		reg_val = p_msg;
		reg_data = (reg_addr << 8) + reg_val;
		xil_printf("SPI DATA: %x\r\n", reg_data);
		PLB_DAC_mWriteReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG3_OFFSET, reg_data);
		while(PLB_DAC_mReadReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;

		reg_data = 0x8000 | (reg_addr << 8);
		xil_printf("SPI DATA: %x\r\n", reg_data);
		PLB_DAC_mWriteReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG3_OFFSET, reg_data);
		while(PLB_DAC_mReadReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;
		reg_val = PLB_DAC_mReadReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG3_OFFSET) & 0xff;
		while(PLB_DAC_mReadReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;
		xil_printf("DAC 0 - Reg 0x%x: %x\r\n", reg_addr, reg_val);

		break;
	default:
		msg_state = 0;
		break;
	}
	if (msg_state == 1)
		prtDACState();
}
