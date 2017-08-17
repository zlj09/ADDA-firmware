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
static const char *ng0 = "G:/Xilinx/14.7/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/plb_v46_v1_05_a/hdl/vhdl/or_gate.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );


static void plb_v46_v1_05_a_a_4069818875_3306564128_p_0(char *t0)
{
    int t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    int t12;
    int t13;
    int t14;
    char *t15;
    unsigned char t16;
    char *t17;
    char *t18;
    int t19;
    int t20;
    char *t21;
    int t22;
    int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned char t29;
    unsigned char t30;
    char *t31;
    char *t32;
    int t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    xsi_set_current_line(160, ng0);
    t1 = (32 - 1);
    t2 = (t0 + 4455);
    *((int *)t2) = 0;
    t3 = (t0 + 4459);
    *((int *)t3) = t1;
    t4 = 0;
    t5 = t1;

LAB2:    if (t4 <= t5)
        goto LAB3;

LAB5:    t2 = (t0 + 2044);
    *((int *)t2) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(161, ng0);
    t6 = (t0 + 1292U);
    t7 = *((char **)t6);
    t8 = (0 - 0);
    t9 = (t8 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t6 = (t7 + t11);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_set_current_line(162, ng0);
    t1 = (5 - 1);
    t2 = (t0 + 4463);
    *((int *)t2) = 0;
    t3 = (t0 + 4467);
    *((int *)t3) = t1;
    t8 = 0;
    t12 = t1;

LAB6:    if (t8 <= t12)
        goto LAB7;

LAB9:    xsi_set_current_line(165, ng0);
    t2 = (t0 + 1292U);
    t3 = *((char **)t2);
    t1 = (5 - 0);
    t9 = (t1 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t2 = (t3 + t11);
    t16 = *((unsigned char *)t2);
    t6 = (t0 + 4455);
    t8 = *((int *)t6);
    t12 = (t8 - 0);
    t25 = (t12 * 1);
    t26 = (1 * t25);
    t27 = (0U + t26);
    t7 = (t0 + 2088);
    t15 = (t7 + 32U);
    t17 = *((char **)t15);
    t18 = (t17 + 40U);
    t21 = *((char **)t18);
    *((unsigned char *)t21) = t16;
    xsi_driver_first_trans_delta(t7, t27, 1, 0LL);

LAB4:    t2 = (t0 + 4455);
    t4 = *((int *)t2);
    t3 = (t0 + 4459);
    t5 = *((int *)t3);
    if (t4 == t5)
        goto LAB5;

LAB11:    t1 = (t4 + 1);
    t4 = t1;
    t6 = (t0 + 4455);
    *((int *)t6) = t4;
    goto LAB2;

LAB7:    xsi_set_current_line(163, ng0);
    t6 = (t0 + 1292U);
    t7 = *((char **)t6);
    t6 = (t0 + 4463);
    t13 = *((int *)t6);
    t14 = (t13 - 0);
    t9 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 5, 1, *((int *)t6));
    t10 = (1U * t9);
    t11 = (0 + t10);
    t15 = (t7 + t11);
    t16 = *((unsigned char *)t15);
    t17 = (t0 + 732U);
    t18 = *((char **)t17);
    t17 = (t0 + 4463);
    t19 = *((int *)t17);
    t20 = (t19 * 32);
    t21 = (t0 + 4455);
    t22 = *((int *)t21);
    t23 = (t20 + t22);
    t24 = (t23 - 0);
    t25 = (t24 * 1);
    xsi_vhdl_check_range_of_index(0, 159, 1, t23);
    t26 = (1U * t25);
    t27 = (0 + t26);
    t28 = (t18 + t27);
    t29 = *((unsigned char *)t28);
    t30 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t16, t29);
    t31 = (t0 + 1292U);
    t32 = *((char **)t31);
    t31 = (t0 + 4463);
    t33 = *((int *)t31);
    t34 = (t33 + 1);
    t35 = (t34 - 0);
    t36 = (t35 * 1);
    xsi_vhdl_check_range_of_index(0, 5, 1, t34);
    t37 = (1U * t36);
    t38 = (0 + t37);
    t39 = (t32 + t38);
    *((unsigned char *)t39) = t30;

LAB8:    t2 = (t0 + 4463);
    t8 = *((int *)t2);
    t3 = (t0 + 4467);
    t12 = *((int *)t3);
    if (t8 == t12)
        goto LAB9;

LAB10:    t1 = (t8 + 1);
    t8 = t1;
    t6 = (t0 + 4463);
    *((int *)t6) = t8;
    goto LAB6;

}


extern void plb_v46_v1_05_a_a_4069818875_3306564128_init()
{
	static char *pe[] = {(void *)plb_v46_v1_05_a_a_4069818875_3306564128_p_0};
	xsi_register_didat("plb_v46_v1_05_a_a_4069818875_3306564128", "isim/testbench_isim_beh.exe.sim/plb_v46_v1_05_a/a_4069818875_3306564128.didat");
	xsi_register_executes(pe);
}
