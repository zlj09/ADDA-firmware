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
static const char *ng0 = "G:/Xilinx/14.7/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/or_muxcy.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );


static void proc_common_v3_00_a_a_3904931680_3640575771_p_0(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(176, ng0);

LAB3:    t1 = (t0 + 1292U);
    t2 = *((char **)t1);
    t3 = (0 - 0);
    t4 = (t3 * 1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 2952);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_delta(t8, 0U, 1, 0LL);

LAB2:    t13 = (t0 + 2892);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void proc_common_v3_00_a_a_3904931680_3640575771_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(180, ng0);

LAB3:    t1 = (t0 + 1476U);
    t2 = *((char **)t1);
    t1 = (t0 + 1852U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 1);
    t6 = (t5 - 0);
    t7 = (t6 * 1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t10 = *((unsigned char *)t1);
    t11 = (t0 + 1292U);
    t12 = *((char **)t11);
    t11 = (t0 + 1852U);
    t13 = *((char **)t11);
    t14 = *((int *)t13);
    t15 = (t14 - 0);
    t16 = (t15 * 1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t11 = (t12 + t18);
    t19 = *((unsigned char *)t11);
    t20 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t10, t19);
    t21 = (t0 + 2988);
    t22 = (t21 + 32U);
    t23 = *((char **)t22);
    t24 = (t23 + 40U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = t20;
    xsi_driver_first_trans_delta(t21, 1U, 1, 0LL);

LAB2:    t26 = (t0 + 2900);
    *((int *)t26) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void proc_common_v3_00_a_a_3904931680_3640575771_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(184, ng0);

LAB3:    t1 = (t0 + 1476U);
    t2 = *((char **)t1);
    t3 = (2 - 1);
    t4 = (t3 - 0);
    t5 = (t4 * 1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t8 = *((unsigned char *)t1);
    t9 = (t0 + 3024);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t8;
    xsi_driver_first_trans_fast_port(t9);

LAB2:    t14 = (t0 + 2908);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void proc_common_v3_00_a_a_3904931680_3640575771_init()
{
	static char *pe[] = {(void *)proc_common_v3_00_a_a_3904931680_3640575771_p_0,(void *)proc_common_v3_00_a_a_3904931680_3640575771_p_1,(void *)proc_common_v3_00_a_a_3904931680_3640575771_p_2};
	xsi_register_didat("proc_common_v3_00_a_a_3904931680_3640575771", "isim/testbench_isim_beh.exe.sim/proc_common_v3_00_a/a_3904931680_3640575771.didat");
	xsi_register_executes(pe);
}
