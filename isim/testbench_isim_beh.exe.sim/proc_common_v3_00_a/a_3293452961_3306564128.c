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
static const char *ng0 = "G:/Xilinx/14.7/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/or_gate128.vhd";



static void proc_common_v3_00_a_a_3293452961_3306564128_p_0(char *t0)
{
    int t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    int t9;
    char *t10;
    char *t11;
    int t12;
    int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned char t18;
    char *t19;
    int t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(183, ng0);
    t1 = (1 - 1);
    t2 = (t0 + 4993);
    *((int *)t2) = 0;
    t3 = (t0 + 4997);
    *((int *)t3) = t1;
    t4 = 0;
    t5 = t1;

LAB2:    if (t4 <= t5)
        goto LAB3;

LAB5:    t2 = (t0 + 2276);
    *((int *)t2) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(184, ng0);
    t6 = (t0 + 872U);
    t7 = *((char **)t6);
    t6 = (t0 + 4993);
    t8 = *((int *)t6);
    t9 = (t8 * 1);
    t10 = (t0 + 1524U);
    t11 = *((char **)t10);
    t12 = *((int *)t11);
    t13 = (t9 + t12);
    t14 = (t13 - 0);
    t15 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 0, 1, t13);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t10 = (t7 + t17);
    t18 = *((unsigned char *)t10);
    t19 = (t0 + 4993);
    t20 = *((int *)t19);
    t21 = (t20 - 0);
    t22 = (t21 * 1);
    t23 = (1 * t22);
    t24 = (0U + t23);
    t25 = (t0 + 2320);
    t26 = (t25 + 32U);
    t27 = *((char **)t26);
    t28 = (t27 + 40U);
    t29 = *((char **)t28);
    *((unsigned char *)t29) = t18;
    xsi_driver_first_trans_delta(t25, t24, 1, 0LL);

LAB4:    t2 = (t0 + 4993);
    t4 = *((int *)t2);
    t3 = (t0 + 4997);
    t5 = *((int *)t3);
    if (t4 == t5)
        goto LAB5;

LAB6:    t1 = (t4 + 1);
    t4 = t1;
    t6 = (t0 + 4993);
    *((int *)t6) = t4;
    goto LAB2;

}


extern void proc_common_v3_00_a_a_3293452961_3306564128_init()
{
	static char *pe[] = {(void *)proc_common_v3_00_a_a_3293452961_3306564128_p_0};
	xsi_register_didat("proc_common_v3_00_a_a_3293452961_3306564128", "isim/testbench_isim_beh.exe.sim/proc_common_v3_00_a/a_3293452961_3306564128.didat");
	xsi_register_executes(pe);
}
