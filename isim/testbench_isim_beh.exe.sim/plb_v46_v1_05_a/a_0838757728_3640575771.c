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
static const char *ng0 = "G:/Xilinx/14.7/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/plb_v46_v1_05_a/hdl/vhdl/plb_addrpath.vhd";
extern char *PROC_COMMON_V3_00_A_P_2444876401;



static void plb_v46_v1_05_a_a_0838757728_3640575771_p_0(char *t0)
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

LAB0:    xsi_set_current_line(263, ng0);

LAB3:    t1 = (t0 + 2800U);
    t2 = *((char **)t1);
    t3 = (0 - 0);
    t4 = (t3 * 1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 4416);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 4364);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void plb_v46_v1_05_a_a_0838757728_3640575771_p_1(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;

LAB0:    xsi_set_current_line(268, ng0);
    t2 = (t0 + 568U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 4372);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(269, ng0);
    t4 = (t0 + 684U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = ((PROC_COMMON_V3_00_A_P_2444876401) + 672U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t9 == t11);
    if (t12 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(279, ng0);
    t2 = (t0 + 2524U);
    t4 = *((char **)t2);
    t2 = (t0 + 4452);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t13 = *((char **)t10);
    memcpy(t13, t4, 32U);
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(280, ng0);
    t2 = (t0 + 2616U);
    t4 = *((char **)t2);
    t2 = (t0 + 4488);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t13 = *((char **)t10);
    memcpy(t13, t4, 32U);
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(281, ng0);
    t2 = (t0 + 2708U);
    t4 = *((char **)t2);
    t2 = (t0 + 4524);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t13 = *((char **)t10);
    memcpy(t13, t4, 4U);
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(282, ng0);
    t2 = (t0 + 2800U);
    t4 = *((char **)t2);
    t2 = (t0 + 4560);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t13 = *((char **)t10);
    memcpy(t13, t4, 4U);
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(283, ng0);
    t2 = (t0 + 2892U);
    t4 = *((char **)t2);
    t2 = (t0 + 4596);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t13 = *((char **)t10);
    memcpy(t13, t4, 3U);
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(284, ng0);
    t2 = (t0 + 2984U);
    t4 = *((char **)t2);
    t2 = (t0 + 4632);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t13 = *((char **)t10);
    memcpy(t13, t4, 16U);
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(285, ng0);
    t2 = (t0 + 2432U);
    t4 = *((char **)t2);
    t19 = (0 - 0);
    t20 = (t19 * 1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t2 = (t4 + t22);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 4668);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t13 = (t10 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t1;
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(286, ng0);
    t2 = (t0 + 3076U);
    t4 = *((char **)t2);
    t2 = (t0 + 4704);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t13 = *((char **)t10);
    memcpy(t13, t4, 2U);
    xsi_driver_first_trans_fast_port(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 592U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(270, ng0);
    t4 = xsi_get_transient_memory(32U);
    memset(t4, 0, 32U);
    t13 = t4;
    memset(t13, (unsigned char)2, 32U);
    t14 = (t0 + 4452);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memcpy(t18, t4, 32U);
    xsi_driver_first_trans_fast_port(t14);
    xsi_set_current_line(271, ng0);
    t2 = xsi_get_transient_memory(32U);
    memset(t2, 0, 32U);
    t4 = t2;
    memset(t4, (unsigned char)2, 32U);
    t5 = (t0 + 4488);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t13 = (t10 + 40U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 32U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(272, ng0);
    t2 = xsi_get_transient_memory(4U);
    memset(t2, 0, 4U);
    t4 = t2;
    memset(t4, (unsigned char)2, 4U);
    t5 = (t0 + 4524);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t13 = (t10 + 40U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(273, ng0);
    t2 = xsi_get_transient_memory(4U);
    memset(t2, 0, 4U);
    t4 = t2;
    memset(t4, (unsigned char)2, 4U);
    t5 = (t0 + 4560);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t13 = (t10 + 40U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(274, ng0);
    t2 = xsi_get_transient_memory(3U);
    memset(t2, 0, 3U);
    t4 = t2;
    memset(t4, (unsigned char)2, 3U);
    t5 = (t0 + 4596);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t13 = (t10 + 40U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 3U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(275, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t4 = t2;
    memset(t4, (unsigned char)2, 16U);
    t5 = (t0 + 4632);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t13 = (t10 + 40U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 16U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(276, ng0);
    t2 = (t0 + 4668);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(277, ng0);
    t2 = xsi_get_transient_memory(2U);
    memset(t2, 0, 2U);
    t4 = t2;
    memset(t4, (unsigned char)2, 2U);
    t5 = (t0 + 4704);
    t8 = (t5 + 32U);
    t10 = *((char **)t8);
    t13 = (t10 + 40U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 2U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB9;

}


extern void plb_v46_v1_05_a_a_0838757728_3640575771_init()
{
	static char *pe[] = {(void *)plb_v46_v1_05_a_a_0838757728_3640575771_p_0,(void *)plb_v46_v1_05_a_a_0838757728_3640575771_p_1};
	xsi_register_didat("plb_v46_v1_05_a_a_0838757728_3640575771", "isim/testbench_isim_beh.exe.sim/plb_v46_v1_05_a/a_0838757728_3640575771.didat");
	xsi_register_executes(pe);
}
