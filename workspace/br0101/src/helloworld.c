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

#include "plb_dac.h"
#include "xparameters.h"

int main()
{
	u32 delay_cnt;

    init_platform();

    PLB_DAC_mWriteReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG0_OFFSET, 0x00000001);
    for (delay_cnt = 0; delay_cnt < 10; delay_cnt++) ;

    PLB_DAC_mWriteReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG1_OFFSET, 0x00001234);
    for (delay_cnt = 0; delay_cnt < 10; delay_cnt++) ;

    PLB_DAC_mWriteReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG1_OFFSET, 0x12340000);
    for (delay_cnt = 0; delay_cnt < 10; delay_cnt++) ;

    PLB_DAC_mWriteReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG1_OFFSET, 0x12342345);
    for (delay_cnt = 0; delay_cnt < 10; delay_cnt++) ;

    PLB_DAC_mWriteReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG0_OFFSET, 0x00000003);
    for (delay_cnt = 0; delay_cnt < 10; delay_cnt++) ;

    PLB_DAC_mWriteReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG1_OFFSET, 0x00001234);
    for (delay_cnt = 0; delay_cnt < 10; delay_cnt++) ;

    PLB_DAC_mWriteReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG1_OFFSET, 0x12340000);
    for (delay_cnt = 0; delay_cnt < 10; delay_cnt++) ;

    PLB_DAC_mWriteReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG1_OFFSET, 0x12342345);
    for (delay_cnt = 0; delay_cnt < 10; delay_cnt++) ;

    PLB_DAC_mWriteReg(XPAR_PLB_DAC_0_BASEADDR, PLB_DAC_SLV_REG0_OFFSET, 0x00000000);
    for (delay_cnt = 0; delay_cnt < 10; delay_cnt++) ;


    return 0;
}