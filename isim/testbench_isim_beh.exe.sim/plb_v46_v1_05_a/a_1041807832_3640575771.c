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
static const char *ng0 = "G:/Xilinx/14.7/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/plb_v46_v1_05_a/hdl/vhdl/or_bits.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );


static void plb_v46_v1_05_a_a_1041807832_3640575771_p_0(char *t0)
{
    int t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    char *t6;
    int t7;
    unsigned char t8;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    unsigned char t18;
    unsigned char t19;
    char *t20;
    int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;

LAB0:    xsi_set_current_line(143, ng0);
    t1 = (1 - 1);
    t2 = (t0 + 3834);
    *((int *)t2) = 0;
    t3 = (t0 + 3838);
    *((int *)t3) = t1;
    t4 = 0;
    t5 = t1;

LAB2:    if (t4 <= t5)
        goto LAB3;

LAB5:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    t1 = (1 - 1);
    t4 = (t1 - 0);
    t12 = (t4 * 1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t3 + t14);
    t8 = *((unsigned char *)t2);
    t6 = (t0 + 1948);
    t9 = (t6 + 32U);
    t10 = *((char **)t9);
    t16 = (t10 + 40U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = t8;
    xsi_driver_first_trans_fast_port(t6);
    t2 = (t0 + 1904);
    *((int *)t2) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(145, ng0);
    t6 = (t0 + 3834);
    t7 = *((int *)t6);
    t8 = (t7 == 0);
    if (t8 != 0)
        goto LAB6;

LAB8:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 592U);
    t3 = *((char **)t2);
    t2 = (t0 + 3834);
    t1 = *((int *)t2);
    t7 = (3 + t1);
    t11 = (t7 - 0);
    t12 = (t11 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, t7);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t6 = (t3 + t14);
    t8 = *((unsigned char *)t6);
    t9 = (t0 + 1152U);
    t10 = *((char **)t9);
    t9 = (t0 + 3834);
    t21 = *((int *)t9);
    t22 = (t21 - 1);
    t27 = (t22 - 0);
    t23 = (t27 * 1);
    xsi_vhdl_check_range_of_index(0, 0, 1, t22);
    t24 = (1U * t23);
    t25 = (0 + t24);
    t16 = (t10 + t25);
    t15 = *((unsigned char *)t16);
    t18 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t8, t15);
    t17 = (t0 + 1152U);
    t20 = *((char **)t17);
    t17 = (t0 + 3834);
    t28 = *((int *)t17);
    t29 = (t28 - 0);
    t30 = (t29 * 1);
    xsi_vhdl_check_range_of_index(0, 0, 1, *((int *)t17));
    t31 = (1U * t30);
    t32 = (0 + t31);
    t26 = (t20 + t32);
    *((unsigned char *)t26) = t18;

LAB7:
LAB4:    t2 = (t0 + 3834);
    t4 = *((int *)t2);
    t3 = (t0 + 3838);
    t5 = *((int *)t3);
    if (t4 == t5)
        goto LAB5;

LAB9:    t1 = (t4 + 1);
    t4 = t1;
    t6 = (t0 + 3834);
    *((int *)t6) = t4;
    goto LAB2;

LAB6:    xsi_set_current_line(146, ng0);
    t9 = (t0 + 592U);
    t10 = *((char **)t9);
    t11 = (3 - 0);
    t12 = (t11 * 1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t9 = (t10 + t14);
    t15 = *((unsigned char *)t9);
    t16 = (t0 + 684U);
    t17 = *((char **)t16);
    t18 = *((unsigned char *)t17);
    t19 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t15, t18);
    t16 = (t0 + 1152U);
    t20 = *((char **)t16);
    t16 = (t0 + 3834);
    t21 = *((int *)t16);
    t22 = (t21 - 0);
    t23 = (t22 * 1);
    xsi_vhdl_check_range_of_index(0, 0, 1, *((int *)t16));
    t24 = (1U * t23);
    t25 = (0 + t24);
    t26 = (t20 + t25);
    *((unsigned char *)t26) = t19;
    goto LAB7;

}


extern void plb_v46_v1_05_a_a_1041807832_3640575771_init()
{
	static char *pe[] = {(void *)plb_v46_v1_05_a_a_1041807832_3640575771_p_0};
	xsi_register_didat("plb_v46_v1_05_a_a_1041807832_3640575771", "isim/testbench_isim_beh.exe.sim/plb_v46_v1_05_a/a_1041807832_3640575771.didat");
	xsi_register_executes(pe);
}
