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

void print(char *str);

int main()
{
	u32 reg_data, i;

    init_platform();

    print("Hello World\r\n");
/*
    PLB_DAC_mWriteReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG0_OFFSET, 0x00000001);

    //PLB_DAC_mWriteReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG3_OFFSET, 0x0000049f);
    PLB_DAC_mWriteReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG3_OFFSET, 0x00000480);
    while(PLB_DAC_mReadReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;

    PLB_DAC_mWriteReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG3_OFFSET, 0x00008400);
    while(PLB_DAC_mReadReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;

    reg_data = PLB_DAC_mReadReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG3_OFFSET) & 0xff;
    while(PLB_DAC_mReadReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;

    xil_printf("%d\r\n", reg_data);

    PLB_DAC_mWriteReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG3_OFFSET, 0x00001200);
    while(PLB_DAC_mReadReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;

    PLB_DAC_mWriteReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG3_OFFSET, 0x00000e3c);
    while(PLB_DAC_mReadReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;

    PLB_DAC_mWriteReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG3_OFFSET, 0x00001210);
    while(PLB_DAC_mReadReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;

    while(1)
    {
    	PLB_DAC_mWriteReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG3_OFFSET, 0x00008f00);
    	while(PLB_DAC_mReadReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;

    	reg_data = PLB_DAC_mReadReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG3_OFFSET) & 0xff;
    	while(PLB_DAC_mReadReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;

    	if (reg_data & 0xC0 == 0xC0)
    		break;

    	for (i = 0; i < 10; i++) ;
    }

    print("Calibration done!\r\n");

    PLB_DAC_mWriteReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG3_OFFSET, 0x00000bff);
    while(PLB_DAC_mReadReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;

    PLB_DAC_mWriteReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG3_OFFSET, 0x00000c9f);
    while(PLB_DAC_mReadReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;

    PLB_DAC_mWriteReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG3_OFFSET, 0x00008c00);
    while(PLB_DAC_mReadReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;

    reg_data = PLB_DAC_mReadReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG3_OFFSET) & 0xff;
    while(PLB_DAC_mReadReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;

    xil_printf("%d\n\r", reg_data);

    while(1)
    {
    	//PLB_DAC_mWriteReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG1_OFFSET, 0x00000ff);
    	//PLB_DAC_mWriteReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG2_OFFSET, 0x00000ff);
    	for (i = 0; i < 10; i++) ;

    	//PLB_DAC_mWriteReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG1_OFFSET, 0x00002ff);
    	//PLB_DAC_mWriteReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG2_OFFSET, 0x00002ff);
    	for (i = 0; i < 10; i++) ;
    }

*/
   /* PLB_DAC_mWriteReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG0_OFFSET, 0x00000001);

    PLB_DAC_mWriteReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG3_OFFSET, 0x00000780);
    while(PLB_DAC_mReadReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;

    PLB_DAC_mWriteReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG3_OFFSET, 0x00008700);
    while(PLB_DAC_mReadReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;

    reg_data = PLB_DAC_mReadReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG3_OFFSET) & 0xff;
    while(PLB_DAC_mReadReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;

    xil_printf("Reg 0x07: %x\r\n", reg_data);

    PLB_DAC_mWriteReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG3_OFFSET, 0x000009ff);
    while(PLB_DAC_mReadReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;

    PLB_DAC_mWriteReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG3_OFFSET, 0x00000a9f);
    while(PLB_DAC_mReadReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;

    PLB_DAC_mWriteReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG3_OFFSET, 0x00008900);
    while(PLB_DAC_mReadReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;

    reg_data = PLB_DAC_mReadReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG3_OFFSET) & 0xff;
    while(PLB_DAC_mReadReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;

    xil_printf("Reg 0x09: %x\r\n", reg_data);

    PLB_DAC_mWriteReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG3_OFFSET, 0x00008a00);
    while(PLB_DAC_mReadReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;

    reg_data = PLB_DAC_mReadReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG3_OFFSET) & 0xff;
    while(PLB_DAC_mReadReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;

    xil_printf("Reg 0x0a: %x\r\n", reg_data);

    PLB_DAC_mWriteReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG3_OFFSET, 0x00001f03);
    while(PLB_DAC_mReadReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;

    PLB_DAC_mWriteReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG3_OFFSET, 0x00009f00);
    while(PLB_DAC_mReadReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;

    reg_data = PLB_DAC_mReadReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG3_OFFSET) & 0xff;
    while(PLB_DAC_mReadReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;

    xil_printf("DAC 1 - Reg 0x1f: %x\r\n", reg_data);*/

    PLB_DAC_mWriteReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG0_OFFSET, 0x00000001);

    //PLB_DAC_mWriteReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG3_OFFSET, 0x00000203);
    //while(PLB_DAC_mReadReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;

    PLB_DAC_mWriteReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG3_OFFSET, 0x00009f00);
    while(PLB_DAC_mReadReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;

    reg_data = PLB_DAC_mReadReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG3_OFFSET) & 0xff;
    while(PLB_DAC_mReadReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;

    xil_printf("DAC 0 - Reg 0x1f: %x\r\n", reg_data);

    PLB_DAC_mWriteReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG0_OFFSET, 0x00000001);

    //PLB_DAC_mWriteReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG3_OFFSET, 0x00000203);
    //while(PLB_DAC_mReadReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;

    PLB_DAC_mWriteReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG3_OFFSET, 0x00009f00);
    while(PLB_DAC_mReadReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;

    reg_data = PLB_DAC_mReadReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG3_OFFSET) & 0xff;
    while(PLB_DAC_mReadReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG0_OFFSET) & 0x2) ;

    xil_printf("DAC 1 - Reg 0x1f: %x\r\n", reg_data);
   /* while(1)
    {
    	PLB_DAC_mWriteReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG1_OFFSET, 0x0000155);
    	PLB_DAC_mWriteReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG2_OFFSET, 0x0000155);
    	for (i = 0; i < 10000; i++) ;

    	PLB_DAC_mWriteReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG1_OFFSET, 0x00002aa);
    	PLB_DAC_mWriteReg(XPAR_PLB_DAC_1_BASEADDR, PLB_DAC_SLV_REG2_OFFSET, 0x00002aa);
    	for (i = 0; i < 10000; i++) ;
    }*/

    return 0;
}
