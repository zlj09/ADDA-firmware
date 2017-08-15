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
static const char *ng0 = "G:/Xilinx/14.7/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_sys_reset_v3_00_a/hdl/vhdl/proc_sys_reset.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );


static void proc_sys_reset_v3_00_a_a_1444412124_3306564128_p_0(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned char t20;
    unsigned char t21;
    char *t22;
    char *t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned char t28;
    unsigned char t29;
    char *t30;
    char *t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned char t36;
    unsigned char t37;
    unsigned char t38;
    char *t39;
    char *t40;
    unsigned char t41;
    unsigned char t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;

LAB0:    xsi_set_current_line(251, ng0);
    t2 = (t0 + 1128U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 8784);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(252, ng0);
    t4 = (t0 + 4096U);
    t8 = *((char **)t4);
    t9 = (3 - 3);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t4 = (t8 + t12);
    t13 = *((unsigned char *)t4);
    t14 = (t0 + 4096U);
    t15 = *((char **)t14);
    t16 = (2 - 3);
    t17 = (t16 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t14 = (t15 + t19);
    t20 = *((unsigned char *)t14);
    t21 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t13, t20);
    t22 = (t0 + 4096U);
    t23 = *((char **)t22);
    t24 = (1 - 3);
    t25 = (t24 * -1);
    t26 = (1U * t25);
    t27 = (0 + t26);
    t22 = (t23 + t27);
    t28 = *((unsigned char *)t22);
    t29 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t21, t28);
    t30 = (t0 + 4096U);
    t31 = *((char **)t30);
    t32 = (0 - 3);
    t33 = (t32 * -1);
    t34 = (1U * t33);
    t35 = (0 + t34);
    t30 = (t31 + t35);
    t36 = *((unsigned char *)t30);
    t37 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t29, t36);
    t38 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t37);
    t39 = (t0 + 4740U);
    t40 = *((char **)t39);
    t41 = *((unsigned char *)t40);
    t42 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t38, t41);
    t39 = (t0 + 8924);
    t43 = (t39 + 32U);
    t44 = *((char **)t43);
    t45 = (t44 + 40U);
    t46 = *((char **)t45);
    *((unsigned char *)t46) = t42;
    xsi_driver_first_trans_fast_port(t39);
    xsi_set_current_line(255, ng0);
    t2 = (t0 + 4832U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 8960);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t14 = (t8 + 40U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t1;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(256, ng0);
    t2 = (t0 + 4924U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 8996);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t14 = (t8 + 40U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t1;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB3;

LAB5:    t4 = (t0 + 1152U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void proc_sys_reset_v3_00_a_a_1444412124_3306564128_p_1(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned char t20;
    unsigned char t21;
    char *t22;
    char *t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned char t28;
    unsigned char t29;
    char *t30;
    char *t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned char t36;
    unsigned char t37;
    unsigned char t38;
    char *t39;
    char *t40;
    unsigned char t41;
    unsigned char t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;

LAB0:    xsi_set_current_line(262, ng0);
    t2 = (t0 + 1128U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 8792);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(263, ng0);
    t4 = (t0 + 4188U);
    t8 = *((char **)t4);
    t9 = (3 - 3);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t4 = (t8 + t12);
    t13 = *((unsigned char *)t4);
    t14 = (t0 + 4188U);
    t15 = *((char **)t14);
    t16 = (2 - 3);
    t17 = (t16 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t14 = (t15 + t19);
    t20 = *((unsigned char *)t14);
    t21 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t13, t20);
    t22 = (t0 + 4188U);
    t23 = *((char **)t22);
    t24 = (1 - 3);
    t25 = (t24 * -1);
    t26 = (1U * t25);
    t27 = (0 + t26);
    t22 = (t23 + t27);
    t28 = *((unsigned char *)t22);
    t29 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t21, t28);
    t30 = (t0 + 4188U);
    t31 = *((char **)t30);
    t32 = (0 - 3);
    t33 = (t32 * -1);
    t34 = (1U * t33);
    t35 = (0 + t34);
    t30 = (t31 + t35);
    t36 = *((unsigned char *)t30);
    t37 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t29, t36);
    t38 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t37);
    t39 = (t0 + 4740U);
    t40 = *((char **)t39);
    t41 = *((unsigned char *)t40);
    t42 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t38, t41);
    t39 = (t0 + 9032);
    t43 = (t39 + 32U);
    t44 = *((char **)t43);
    t45 = (t44 + 40U);
    t46 = *((char **)t45);
    *((unsigned char *)t46) = t42;
    xsi_driver_first_trans_fast_port(t39);
    xsi_set_current_line(266, ng0);
    t2 = (t0 + 4832U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 9068);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t14 = (t8 + 40U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t1;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(267, ng0);
    t2 = (t0 + 4924U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 9104);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t14 = (t8 + 40U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t1;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB3;

LAB5:    t4 = (t0 + 1152U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void proc_sys_reset_v3_00_a_a_1444412124_3306564128_p_2(char *t0)
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
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(280, ng0);
    t2 = (t0 + 1128U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 8800);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(281, ng0);
    t4 = (t0 + 5016U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 9140);
    t10 = (t4 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB3;

LAB5:    t4 = (t0 + 1152U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void proc_sys_reset_v3_00_a_a_1444412124_3306564128_p_3(char *t0)
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
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(290, ng0);
    t2 = (t0 + 1128U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 8808);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(291, ng0);
    t4 = (t0 + 1520U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 9176);
    t10 = (t4 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(292, ng0);
    t2 = (t0 + 3176U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 9212);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(293, ng0);
    t2 = (t0 + 3268U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 9248);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB5:    t4 = (t0 + 1152U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void proc_sys_reset_v3_00_a_a_1444412124_3306564128_p_4(char *t0)
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
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(299, ng0);
    t2 = (t0 + 1128U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 8816);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(300, ng0);
    t4 = (t0 + 1796U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 9284);
    t10 = (t4 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(301, ng0);
    t2 = (t0 + 3452U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 9320);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(302, ng0);
    t2 = (t0 + 3544U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 9356);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB5:    t4 = (t0 + 1152U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void proc_sys_reset_v3_00_a_a_1444412124_3306564128_p_5(char *t0)
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
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(312, ng0);
    t2 = (t0 + 1128U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 8824);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(313, ng0);
    t4 = (t0 + 4556U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 9392);
    t10 = (t4 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_delta(t4, 0U, 1, 0LL);
    goto LAB3;

LAB5:    t4 = (t0 + 1152U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void proc_sys_reset_v3_00_a_a_1444412124_3306564128_p_6(char *t0)
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
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(324, ng0);
    t2 = (t0 + 1128U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 8832);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(325, ng0);
    t4 = (t0 + 4556U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t9);
    t4 = (t0 + 9428);
    t11 = (t4 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t10;
    xsi_driver_first_trans_delta(t4, 0U, 1, 0LL);
    goto LAB3;

LAB5:    t4 = (t0 + 1152U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void proc_sys_reset_v3_00_a_a_1444412124_3306564128_p_7(char *t0)
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
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(337, ng0);
    t2 = (t0 + 1128U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 8840);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(338, ng0);
    t4 = (t0 + 4648U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 9464);
    t10 = (t4 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_delta(t4, 0U, 1, 0LL);
    goto LAB3;

LAB5:    t4 = (t0 + 1152U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void proc_sys_reset_v3_00_a_a_1444412124_3306564128_p_8(char *t0)
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
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(349, ng0);
    t2 = (t0 + 1128U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 8848);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(350, ng0);
    t4 = (t0 + 4648U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t9);
    t4 = (t0 + 9500);
    t11 = (t4 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t10;
    xsi_driver_first_trans_delta(t4, 0U, 1, 0LL);
    goto LAB3;

LAB5:    t4 = (t0 + 1152U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void proc_sys_reset_v3_00_a_a_1444412124_3306564128_p_9(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned char t20;
    unsigned char t21;
    char *t22;
    char *t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned char t28;
    unsigned char t29;
    unsigned char t30;
    char *t31;
    char *t32;
    unsigned char t33;
    unsigned char t34;
    unsigned char t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;

LAB0:    xsi_set_current_line(389, ng0);
    t2 = (t0 + 1128U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 8856);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(390, ng0);
    t4 = (t0 + 4096U);
    t8 = *((char **)t4);
    t9 = (3 - 3);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t4 = (t8 + t12);
    t13 = *((unsigned char *)t4);
    t14 = (t0 + 4096U);
    t15 = *((char **)t14);
    t16 = (2 - 3);
    t17 = (t16 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t14 = (t15 + t19);
    t20 = *((unsigned char *)t14);
    t21 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t13, t20);
    t22 = (t0 + 4096U);
    t23 = *((char **)t22);
    t24 = (1 - 3);
    t25 = (t24 * -1);
    t26 = (1U * t25);
    t27 = (0 + t26);
    t22 = (t23 + t27);
    t28 = *((unsigned char *)t22);
    t29 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t21, t28);
    t30 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t29);
    t31 = (t0 + 3912U);
    t32 = *((char **)t31);
    t33 = *((unsigned char *)t32);
    t34 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t33);
    t35 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t30, t34);
    t31 = (t0 + 9536);
    t36 = (t31 + 32U);
    t37 = *((char **)t36);
    t38 = (t37 + 40U);
    t39 = *((char **)t38);
    *((unsigned char *)t39) = t35;
    xsi_driver_first_trans_fast(t31);
    xsi_set_current_line(392, ng0);
    t2 = (t0 + 3268U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 3360U);
    t5 = *((char **)t2);
    t3 = *((unsigned char *)t5);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t1, t6);
    t13 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t7);
    t2 = (t0 + 9572);
    t8 = (t2 + 32U);
    t14 = *((char **)t8);
    t15 = (t14 + 40U);
    t22 = *((char **)t15);
    *((unsigned char *)t22) = t13;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB5:    t4 = (t0 + 1152U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void proc_sys_reset_v3_00_a_a_1444412124_3306564128_p_10(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned char t20;
    unsigned char t21;
    char *t22;
    char *t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned char t28;
    unsigned char t29;
    unsigned char t30;
    char *t31;
    char *t32;
    unsigned char t33;
    unsigned char t34;
    unsigned char t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;

LAB0:    xsi_set_current_line(398, ng0);
    t2 = (t0 + 1128U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 8864);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(399, ng0);
    t4 = (t0 + 4188U);
    t8 = *((char **)t4);
    t9 = (3 - 3);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t4 = (t8 + t12);
    t13 = *((unsigned char *)t4);
    t14 = (t0 + 4188U);
    t15 = *((char **)t14);
    t16 = (2 - 3);
    t17 = (t16 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t14 = (t15 + t19);
    t20 = *((unsigned char *)t14);
    t21 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t13, t20);
    t22 = (t0 + 4188U);
    t23 = *((char **)t22);
    t24 = (1 - 3);
    t25 = (t24 * -1);
    t26 = (1U * t25);
    t27 = (0 + t26);
    t22 = (t23 + t27);
    t28 = *((unsigned char *)t22);
    t29 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t21, t28);
    t30 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t29);
    t31 = (t0 + 4004U);
    t32 = *((char **)t31);
    t33 = *((unsigned char *)t32);
    t34 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t33);
    t35 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t30, t34);
    t31 = (t0 + 9608);
    t36 = (t31 + 32U);
    t37 = *((char **)t36);
    t38 = (t37 + 40U);
    t39 = *((char **)t38);
    *((unsigned char *)t39) = t35;
    xsi_driver_first_trans_fast(t31);
    xsi_set_current_line(401, ng0);
    t2 = (t0 + 3544U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 3636U);
    t5 = *((char **)t2);
    t3 = *((unsigned char *)t5);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t1, t6);
    t13 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t7);
    t2 = (t0 + 9644);
    t8 = (t2 + 32U);
    t14 = *((char **)t8);
    t15 = (t14 + 40U);
    t22 = *((char **)t15);
    *((unsigned char *)t22) = t13;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB5:    t4 = (t0 + 1152U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void proc_sys_reset_v3_00_a_a_1444412124_3306564128_p_11(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(430, ng0);

LAB3:    t1 = (t0 + 1704U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1980U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 9680);
    t7 = (t1 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 8872);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void proc_sys_reset_v3_00_a_a_1444412124_3306564128_p_12(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(432, ng0);

LAB3:    t1 = (t0 + 1612U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1888U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 9716);
    t7 = (t1 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 8880);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void proc_sys_reset_v3_00_a_a_1444412124_3306564128_init()
{
	static char *pe[] = {(void *)proc_sys_reset_v3_00_a_a_1444412124_3306564128_p_0,(void *)proc_sys_reset_v3_00_a_a_1444412124_3306564128_p_1,(void *)proc_sys_reset_v3_00_a_a_1444412124_3306564128_p_2,(void *)proc_sys_reset_v3_00_a_a_1444412124_3306564128_p_3,(void *)proc_sys_reset_v3_00_a_a_1444412124_3306564128_p_4,(void *)proc_sys_reset_v3_00_a_a_1444412124_3306564128_p_5,(void *)proc_sys_reset_v3_00_a_a_1444412124_3306564128_p_6,(void *)proc_sys_reset_v3_00_a_a_1444412124_3306564128_p_7,(void *)proc_sys_reset_v3_00_a_a_1444412124_3306564128_p_8,(void *)proc_sys_reset_v3_00_a_a_1444412124_3306564128_p_9,(void *)proc_sys_reset_v3_00_a_a_1444412124_3306564128_p_10,(void *)proc_sys_reset_v3_00_a_a_1444412124_3306564128_p_11,(void *)proc_sys_reset_v3_00_a_a_1444412124_3306564128_p_12};
	xsi_register_didat("proc_sys_reset_v3_00_a_a_1444412124_3306564128", "isim/testbench_isim_beh.exe.sim/proc_sys_reset_v3_00_a/a_1444412124_3306564128.didat");
	xsi_register_executes(pe);
}
