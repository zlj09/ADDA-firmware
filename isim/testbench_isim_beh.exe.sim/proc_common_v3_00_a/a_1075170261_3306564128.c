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
static const char *ng0 = "Function min ended without a return statement";
static const char *ng1 = "G:/Xilinx/14.7/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/pselect_f.vhd";
extern char *STD_STANDARD;



int proc_common_v3_00_a_a_1075170261_3306564128_sub_3477279877_229454594(char *t1, int t2, int t3)
{
    char t5[16];
    int t0;
    char *t6;
    char *t7;
    unsigned char t8;

LAB0:    t6 = (t5 + 4U);
    *((int *)t6) = t2;
    t7 = (t5 + 8U);
    *((int *)t7) = t3;
    t8 = (t2 < t3);
    if (t8 != 0)
        goto LAB2;

LAB4:    t0 = t3;

LAB1:    return t0;
LAB2:    t0 = t2;
    goto LAB1;

LAB3:    xsi_error(ng0);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

static void proc_common_v3_00_a_a_1075170261_3306564128_p_0(char *t0)
{
    char t9[16];
    char t11[16];
    char t16[16];
    char t21[16];
    char t23[16];
    unsigned char t1;
    unsigned char t2;
    unsigned char t3;
    char *t4;
    char *t6;
    char *t8;
    char *t10;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    char *t17;
    int t18;
    char *t20;
    char *t22;
    char *t24;
    char *t25;
    int t26;
    unsigned int t27;

LAB0:    xsi_set_current_line(206, ng1);
    t2 = (3 <= 3U);
    if (t2 == 1)
        goto LAB4;

LAB5:    t1 = (unsigned char)0;

LAB6:    if (t1 == 0)
        goto LAB2;

LAB3:
LAB1:    return;
LAB2:    t4 = (t0 + 5554);
    t6 = (t0 + 5579);
    t10 = ((STD_STANDARD) + 664);
    t12 = (t11 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 1;
    t13 = (t12 + 4U);
    *((int *)t13) = 25;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t14 = (25 - 1);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t13 = (t16 + 0U);
    t17 = (t13 + 0U);
    *((int *)t17) = 1;
    t17 = (t13 + 4U);
    *((int *)t17) = 41;
    t17 = (t13 + 8U);
    *((int *)t17) = 1;
    t18 = (41 - 1);
    t15 = (t18 * 1);
    t15 = (t15 + 1);
    t17 = (t13 + 12U);
    *((unsigned int *)t17) = t15;
    t8 = xsi_base_array_concat(t8, t9, t10, (char)97, t4, t11, (char)97, t6, t16, (char)101);
    t17 = (t0 + 5620);
    t22 = ((STD_STANDARD) + 664);
    t24 = (t23 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = 1;
    t25 = (t24 + 4U);
    *((int *)t25) = 15;
    t25 = (t24 + 8U);
    *((int *)t25) = 1;
    t26 = (15 - 1);
    t15 = (t26 * 1);
    t15 = (t15 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t15;
    t20 = xsi_base_array_concat(t20, t21, t22, (char)97, t8, t9, (char)97, t17, t23, (char)101);
    t15 = (25U + 41U);
    t27 = (t15 + 15U);
    xsi_report(t20, t27, (unsigned char)3);
    goto LAB3;

LAB4:    t3 = (3 <= 3);
    t1 = t3;
    goto LAB6;

}

static void proc_common_v3_00_a_a_1075170261_3306564128_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(221, ng1);
    t1 = (t0 + 872U);
    t2 = *((char **)t1);
    t3 = (0 - 0);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 1568U);
    t7 = *((char **)t6);
    t8 = (0 - 0);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t6 = (t7 + t10);
    t11 = 1;
    if (3U == 3U)
        goto LAB5;

LAB6:    t11 = 0;

LAB7:    if (t11 != 0)
        goto LAB3;

LAB4:
LAB11:    t22 = (t0 + 2660);
    t23 = (t22 + 32U);
    t24 = *((char **)t23);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    *((unsigned char *)t26) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t22);

LAB2:    t27 = (t0 + 2616);
    *((int *)t27) = 1;

LAB1:    return;
LAB3:    t15 = (t0 + 964U);
    t16 = *((char **)t15);
    t17 = *((unsigned char *)t16);
    t15 = (t0 + 2660);
    t18 = (t15 + 32U);
    t19 = *((char **)t18);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = t17;
    xsi_driver_first_trans_fast_port(t15);
    goto LAB2;

LAB5:    t12 = 0;

LAB8:    if (t12 < 3U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t13 = (t1 + t12);
    t14 = (t6 + t12);
    if (*((unsigned char *)t13) != *((unsigned char *)t14))
        goto LAB6;

LAB10:    t12 = (t12 + 1);
    goto LAB8;

LAB12:    goto LAB2;

}


extern void proc_common_v3_00_a_a_1075170261_3306564128_init()
{
	static char *pe[] = {(void *)proc_common_v3_00_a_a_1075170261_3306564128_p_0,(void *)proc_common_v3_00_a_a_1075170261_3306564128_p_1};
	static char *se[] = {(void *)proc_common_v3_00_a_a_1075170261_3306564128_sub_3477279877_229454594};
	xsi_register_didat("proc_common_v3_00_a_a_1075170261_3306564128", "isim/testbench_isim_beh.exe.sim/proc_common_v3_00_a/a_1075170261_3306564128.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
