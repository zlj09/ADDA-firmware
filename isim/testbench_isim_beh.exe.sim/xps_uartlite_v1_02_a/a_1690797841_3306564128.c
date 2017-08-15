/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "G:/Xilinx/14.7/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/xps_uartlite_v1_02_a/hdl/vhdl/baudrate.vhd";



static void xps_uartlite_v1_02_a_a_1690797841_3306564128_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    int t9;
    unsigned char t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(165, ng0);
    t2 = (t0 + 568U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 1700);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(166, ng0);
    t4 = (t0 + 776U);
    t8 = *((char **)t4);
    t9 = *((int *)t8);
    t10 = (t9 == 0);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(170, ng0);
    t2 = (t0 + 776U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t11 = (t9 - 1);
    t2 = (t0 + 1744);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t12 = (t8 + 40U);
    t13 = *((char **)t12);
    *((int *)t13) = t11;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(171, ng0);
    t2 = (t0 + 1780);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t12 = *((char **)t8);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 592U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(167, ng0);
    t11 = (326 - 1);
    t4 = (t0 + 1744);
    t12 = (t4 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    *((int *)t15) = t11;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(168, ng0);
    t2 = (t0 + 1780);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t12 = *((char **)t8);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB9;

}


extern void xps_uartlite_v1_02_a_a_1690797841_3306564128_init()
{
	static char *pe[] = {(void *)xps_uartlite_v1_02_a_a_1690797841_3306564128_p_0};
	xsi_register_didat("xps_uartlite_v1_02_a_a_1690797841_3306564128", "isim/testbench_isim_beh.exe.sim/xps_uartlite_v1_02_a/a_1690797841_3306564128.didat");
	xsi_register_executes(pe);
}
