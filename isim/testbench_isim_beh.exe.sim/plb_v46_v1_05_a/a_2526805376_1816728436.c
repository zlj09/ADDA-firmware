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
static const char *ng0 = "G:/Xilinx/14.7/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/plb_v46_v1_05_a/hdl/vhdl/qual_priority.vhd";



static void plb_v46_v1_05_a_a_2526805376_1816728436_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;
    int t10;
    char *t11;
    int t13;
    char *t14;
    int t16;
    char *t17;
    int t19;

LAB0:    xsi_set_current_line(175, ng0);
    t1 = (t0 + 1952);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(176, ng0);
    t1 = (t0 + 1988);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(177, ng0);
    t1 = (t0 + 2024);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(179, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t8 = (t7 == (unsigned char)3);
    if (t8 == 1)
        goto LAB5;

LAB6:    t6 = (unsigned char)0;

LAB7:    if (t6 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 1908);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(180, ng0);
    t1 = (t0 + 776U);
    t4 = *((char **)t1);
    t1 = (t0 + 3864);
    t10 = xsi_mem_cmp(t1, t4, 2U);
    if (t10 == 1)
        goto LAB9;

LAB14:    t11 = (t0 + 3866);
    t13 = xsi_mem_cmp(t11, t4, 2U);
    if (t13 == 1)
        goto LAB10;

LAB15:    t14 = (t0 + 3868);
    t16 = xsi_mem_cmp(t14, t4, 2U);
    if (t16 == 1)
        goto LAB11;

LAB16:    t17 = (t0 + 3870);
    t19 = xsi_mem_cmp(t17, t4, 2U);
    if (t19 == 1)
        goto LAB12;

LAB17:
LAB13:    xsi_set_current_line(196, ng0);
    t1 = (t0 + 1952);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)1;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(197, ng0);
    t1 = (t0 + 1988);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)1;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(198, ng0);
    t1 = (t0 + 2024);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)1;
    xsi_driver_first_trans_fast_port(t1);

LAB8:    goto LAB3;

LAB5:    t1 = (t0 + 684U);
    t3 = *((char **)t1);
    t9 = *((unsigned char *)t3);
    t6 = t9;
    goto LAB7;

LAB9:    xsi_set_current_line(183, ng0);
    goto LAB8;

LAB10:    xsi_set_current_line(186, ng0);
    t1 = (t0 + 1952);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB8;

LAB11:    xsi_set_current_line(189, ng0);
    t1 = (t0 + 1988);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB8;

LAB12:    xsi_set_current_line(192, ng0);
    t1 = (t0 + 2024);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB8;

LAB18:;
}


extern void plb_v46_v1_05_a_a_2526805376_1816728436_init()
{
	static char *pe[] = {(void *)plb_v46_v1_05_a_a_2526805376_1816728436_p_0};
	xsi_register_didat("plb_v46_v1_05_a_a_2526805376_1816728436", "isim/testbench_isim_beh.exe.sim/plb_v46_v1_05_a/a_2526805376_1816728436.didat");
	xsi_register_executes(pe);
}
