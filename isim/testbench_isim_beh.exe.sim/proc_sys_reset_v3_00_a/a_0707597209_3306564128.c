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
static const char *ng0 = "G:/Xilinx/14.7/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_sys_reset_v3_00_a/hdl/vhdl/lpf.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );


static void proc_sys_reset_v3_00_a_a_0707597209_3306564128_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(181, ng0);

LAB3:    t1 = (t0 + 3000U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7632);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 7484);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void proc_sys_reset_v3_00_a_a_0707597209_3306564128_p_1(char *t0)
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
    unsigned char t14;
    unsigned char t15;
    char *t16;
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(209, ng0);
    t2 = (t0 + 2056U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 7492);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(210, ng0);
    t4 = (t0 + 3092U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 3184U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t9, t11);
    t4 = (t0 + 3276U);
    t13 = *((char **)t4);
    t14 = *((unsigned char *)t13);
    t15 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t12, t14);
    t4 = (t0 + 1804U);
    t16 = *((char **)t4);
    t17 = *((unsigned char *)t16);
    t18 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t17);
    t19 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t15, t18);
    t4 = (t0 + 7668);
    t20 = (t4 + 32U);
    t21 = *((char **)t20);
    t22 = (t21 + 40U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = t19;
    xsi_driver_first_trans_fast(t4);
    goto LAB3;

LAB5:    t4 = (t0 + 2080U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void proc_sys_reset_v3_00_a_a_0707597209_3306564128_p_2(char *t0)
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

LAB0:    xsi_set_current_line(216, ng0);
    t2 = (t0 + 2056U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 7500);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(217, ng0);
    t4 = (t0 + 2632U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 2632U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)2);
    if (t6 == 1)
        goto LAB13;

LAB14:    t1 = (unsigned char)0;

LAB15:    if (t1 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 2080U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(218, ng0);
    t4 = (t0 + 7704);
    t11 = (t4 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(220, ng0);
    t2 = (t0 + 7704);
    t8 = (t2 + 32U);
    t11 = *((char **)t8);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    t2 = (t0 + 2724U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t9 = (t7 == (unsigned char)3);
    t1 = t9;
    goto LAB15;

}

static void proc_sys_reset_v3_00_a_a_0707597209_3306564128_p_3(char *t0)
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

LAB0:    xsi_set_current_line(227, ng0);
    t2 = (t0 + 2056U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 7508);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(228, ng0);
    t4 = (t0 + 2816U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 2816U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)2);
    if (t6 == 1)
        goto LAB13;

LAB14:    t1 = (unsigned char)0;

LAB15:    if (t1 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 2080U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(229, ng0);
    t4 = (t0 + 7740);
    t11 = (t4 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(231, ng0);
    t2 = (t0 + 7740);
    t8 = (t2 + 32U);
    t11 = *((char **)t8);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    t2 = (t0 + 2908U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t9 = (t7 == (unsigned char)3);
    t1 = t9;
    goto LAB15;

}

static void proc_sys_reset_v3_00_a_a_0707597209_3306564128_p_4(char *t0)
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
    unsigned char t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(253, ng0);
    t2 = (t0 + 2056U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 7516);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(254, ng0);
    t4 = (t0 + 1896U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t9);
    t4 = (t0 + 1712U);
    t11 = *((char **)t4);
    t12 = *((unsigned char *)t11);
    t13 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t10, t12);
    t4 = (t0 + 7776);
    t14 = (t4 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = t13;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(255, ng0);
    t2 = (t0 + 2264U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 7812);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t11 = (t8 + 40U);
    t14 = *((char **)t11);
    *((unsigned char *)t14) = t1;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);
    goto LAB3;

LAB5:    t4 = (t0 + 2080U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void proc_sys_reset_v3_00_a_a_0707597209_3306564128_p_5(char *t0)
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

LAB0:    xsi_set_current_line(266, ng0);
    t2 = (t0 + 2056U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 7524);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(267, ng0);
    t4 = (t0 + 1988U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 7848);
    t10 = (t4 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(268, ng0);
    t2 = (t0 + 2448U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 7884);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);
    goto LAB3;

LAB5:    t4 = (t0 + 2080U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void proc_sys_reset_v3_00_a_a_0707597209_3306564128_p_6(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    int t10;
    int t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(291, ng0);
    t2 = (t0 + 2056U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 7532);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(292, ng0);
    t4 = (t0 + 2356U);
    t8 = *((char **)t4);
    t4 = (t0 + 4248U);
    t9 = *((char **)t4);
    t10 = *((int *)t9);
    t11 = (t10 - 1);
    t12 = (t11 - 0);
    t13 = (t12 * 1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t4 = (t8 + t15);
    t16 = *((unsigned char *)t4);
    t17 = (t0 + 7920);
    t18 = (t17 + 32U);
    t19 = *((char **)t18);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = t16;
    xsi_driver_first_trans_delta(t17, 1U, 1, 0LL);
    goto LAB3;

LAB5:    t4 = (t0 + 2080U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void proc_sys_reset_v3_00_a_a_0707597209_3306564128_p_7(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    int t10;
    int t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(291, ng0);
    t2 = (t0 + 2056U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 7540);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(292, ng0);
    t4 = (t0 + 2356U);
    t8 = *((char **)t4);
    t4 = (t0 + 4316U);
    t9 = *((char **)t4);
    t10 = *((int *)t9);
    t11 = (t10 - 1);
    t12 = (t11 - 0);
    t13 = (t12 * 1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t4 = (t8 + t15);
    t16 = *((unsigned char *)t4);
    t17 = (t0 + 7956);
    t18 = (t17 + 32U);
    t19 = *((char **)t18);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = t16;
    xsi_driver_first_trans_delta(t17, 2U, 1, 0LL);
    goto LAB3;

LAB5:    t4 = (t0 + 2080U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void proc_sys_reset_v3_00_a_a_0707597209_3306564128_p_8(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    int t10;
    int t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(291, ng0);
    t2 = (t0 + 2056U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 7548);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(292, ng0);
    t4 = (t0 + 2356U);
    t8 = *((char **)t4);
    t4 = (t0 + 4384U);
    t9 = *((char **)t4);
    t10 = *((int *)t9);
    t11 = (t10 - 1);
    t12 = (t11 - 0);
    t13 = (t12 * 1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t4 = (t8 + t15);
    t16 = *((unsigned char *)t4);
    t17 = (t0 + 7992);
    t18 = (t17 + 32U);
    t19 = *((char **)t18);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = t16;
    xsi_driver_first_trans_delta(t17, 3U, 1, 0LL);
    goto LAB3;

LAB5:    t4 = (t0 + 2080U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void proc_sys_reset_v3_00_a_a_0707597209_3306564128_p_9(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    int t5;
    char *t6;
    char *t7;
    unsigned char t8;
    char *t9;
    int t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    char *t19;
    unsigned char t20;

LAB0:    xsi_set_current_line(303, ng0);
    t1 = (t0 + 4452U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)3;
    xsi_set_current_line(304, ng0);
    t1 = (t0 + 4520U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)3;
    xsi_set_current_line(305, ng0);
    t3 = (4 - 1);
    t1 = (t0 + 16170);
    *((int *)t1) = 0;
    t2 = (t0 + 16174);
    *((int *)t2) = t3;
    t4 = 0;
    t5 = t3;

LAB2:    if (t4 <= t5)
        goto LAB3;

LAB5:    xsi_set_current_line(310, ng0);
    t1 = (t0 + 4452U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t1 = (t0 + 8028);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t9 = (t7 + 40U);
    t15 = *((char **)t9);
    *((unsigned char *)t15) = t8;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(311, ng0);
    t1 = (t0 + 4520U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t1 = (t0 + 8064);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t9 = (t7 + 40U);
    t15 = *((char **)t9);
    *((unsigned char *)t15) = t8;
    xsi_driver_first_trans_fast(t1);
    t1 = (t0 + 7556);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(306, ng0);
    t6 = (t0 + 4452U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t6 = (t0 + 2356U);
    t9 = *((char **)t6);
    t6 = (t0 + 16170);
    t10 = *((int *)t6);
    t11 = (t10 - 0);
    t12 = (t11 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, *((int *)t6));
    t13 = (1U * t12);
    t14 = (0 + t13);
    t15 = (t9 + t14);
    t16 = *((unsigned char *)t15);
    t17 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t8, t16);
    t18 = (t0 + 4452U);
    t19 = *((char **)t18);
    t18 = (t19 + 0);
    *((unsigned char *)t18) = t17;
    xsi_set_current_line(307, ng0);
    t1 = (t0 + 4520U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t1 = (t0 + 2356U);
    t6 = *((char **)t1);
    t1 = (t0 + 16170);
    t3 = *((int *)t1);
    t10 = (t3 - 0);
    t12 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, *((int *)t1));
    t13 = (1U * t12);
    t14 = (0 + t13);
    t7 = (t6 + t14);
    t16 = *((unsigned char *)t7);
    t17 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t16);
    t20 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t8, t17);
    t9 = (t0 + 4520U);
    t15 = *((char **)t9);
    t9 = (t15 + 0);
    *((unsigned char *)t9) = t20;

LAB4:    t1 = (t0 + 16170);
    t4 = *((int *)t1);
    t2 = (t0 + 16174);
    t5 = *((int *)t2);
    if (t4 == t5)
        goto LAB5;

LAB6:    t3 = (t4 + 1);
    t4 = t3;
    t6 = (t0 + 16170);
    *((int *)t6) = t4;
    goto LAB2;

}

static void proc_sys_reset_v3_00_a_a_0707597209_3306564128_p_10(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    int t10;
    int t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(321, ng0);
    t2 = (t0 + 2056U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 7564);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(322, ng0);
    t4 = (t0 + 2540U);
    t8 = *((char **)t4);
    t4 = (t0 + 4588U);
    t9 = *((char **)t4);
    t10 = *((int *)t9);
    t11 = (t10 - 1);
    t12 = (t11 - 0);
    t13 = (t12 * 1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t4 = (t8 + t15);
    t16 = *((unsigned char *)t4);
    t17 = (t0 + 8100);
    t18 = (t17 + 32U);
    t19 = *((char **)t18);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = t16;
    xsi_driver_first_trans_delta(t17, 1U, 1, 0LL);
    goto LAB3;

LAB5:    t4 = (t0 + 2080U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void proc_sys_reset_v3_00_a_a_0707597209_3306564128_p_11(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    int t10;
    int t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(321, ng0);
    t2 = (t0 + 2056U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 7572);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(322, ng0);
    t4 = (t0 + 2540U);
    t8 = *((char **)t4);
    t4 = (t0 + 4656U);
    t9 = *((char **)t4);
    t10 = *((int *)t9);
    t11 = (t10 - 1);
    t12 = (t11 - 0);
    t13 = (t12 * 1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t4 = (t8 + t15);
    t16 = *((unsigned char *)t4);
    t17 = (t0 + 8136);
    t18 = (t17 + 32U);
    t19 = *((char **)t18);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = t16;
    xsi_driver_first_trans_delta(t17, 2U, 1, 0LL);
    goto LAB3;

LAB5:    t4 = (t0 + 2080U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void proc_sys_reset_v3_00_a_a_0707597209_3306564128_p_12(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    int t10;
    int t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(321, ng0);
    t2 = (t0 + 2056U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 7580);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(322, ng0);
    t4 = (t0 + 2540U);
    t8 = *((char **)t4);
    t4 = (t0 + 4724U);
    t9 = *((char **)t4);
    t10 = *((int *)t9);
    t11 = (t10 - 1);
    t12 = (t11 - 0);
    t13 = (t12 * 1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t4 = (t8 + t15);
    t16 = *((unsigned char *)t4);
    t17 = (t0 + 8172);
    t18 = (t17 + 32U);
    t19 = *((char **)t18);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = t16;
    xsi_driver_first_trans_delta(t17, 3U, 1, 0LL);
    goto LAB3;

LAB5:    t4 = (t0 + 2080U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void proc_sys_reset_v3_00_a_a_0707597209_3306564128_p_13(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    int t5;
    char *t6;
    char *t7;
    unsigned char t8;
    char *t9;
    int t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    char *t19;
    unsigned char t20;

LAB0:    xsi_set_current_line(333, ng0);
    t1 = (t0 + 4792U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)3;
    xsi_set_current_line(334, ng0);
    t1 = (t0 + 4860U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)3;
    xsi_set_current_line(335, ng0);
    t3 = (4 - 1);
    t1 = (t0 + 16178);
    *((int *)t1) = 0;
    t2 = (t0 + 16182);
    *((int *)t2) = t3;
    t4 = 0;
    t5 = t3;

LAB2:    if (t4 <= t5)
        goto LAB3;

LAB5:    xsi_set_current_line(340, ng0);
    t1 = (t0 + 4792U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t1 = (t0 + 8208);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t9 = (t7 + 40U);
    t15 = *((char **)t9);
    *((unsigned char *)t15) = t8;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(341, ng0);
    t1 = (t0 + 4860U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t1 = (t0 + 8244);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t9 = (t7 + 40U);
    t15 = *((char **)t9);
    *((unsigned char *)t15) = t8;
    xsi_driver_first_trans_fast(t1);
    t1 = (t0 + 7588);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(336, ng0);
    t6 = (t0 + 4792U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t6 = (t0 + 2540U);
    t9 = *((char **)t6);
    t6 = (t0 + 16178);
    t10 = *((int *)t6);
    t11 = (t10 - 0);
    t12 = (t11 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, *((int *)t6));
    t13 = (1U * t12);
    t14 = (0 + t13);
    t15 = (t9 + t14);
    t16 = *((unsigned char *)t15);
    t17 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t8, t16);
    t18 = (t0 + 4792U);
    t19 = *((char **)t18);
    t18 = (t19 + 0);
    *((unsigned char *)t18) = t17;
    xsi_set_current_line(337, ng0);
    t1 = (t0 + 4860U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t1 = (t0 + 2540U);
    t6 = *((char **)t1);
    t1 = (t0 + 16178);
    t3 = *((int *)t1);
    t10 = (t3 - 0);
    t12 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, *((int *)t1));
    t13 = (1U * t12);
    t14 = (0 + t13);
    t7 = (t6 + t14);
    t16 = *((unsigned char *)t7);
    t17 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t16);
    t20 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t8, t17);
    t9 = (t0 + 4860U);
    t15 = *((char **)t9);
    t9 = (t15 + 0);
    *((unsigned char *)t9) = t20;

LAB4:    t1 = (t0 + 16178);
    t4 = *((int *)t1);
    t2 = (t0 + 16182);
    t5 = *((int *)t2);
    if (t4 == t5)
        goto LAB5;

LAB6:    t3 = (t4 + 1);
    t4 = t3;
    t6 = (t0 + 16178);
    *((int *)t6) = t4;
    goto LAB2;

}


extern void proc_sys_reset_v3_00_a_a_0707597209_3306564128_init()
{
	static char *pe[] = {(void *)proc_sys_reset_v3_00_a_a_0707597209_3306564128_p_0,(void *)proc_sys_reset_v3_00_a_a_0707597209_3306564128_p_1,(void *)proc_sys_reset_v3_00_a_a_0707597209_3306564128_p_2,(void *)proc_sys_reset_v3_00_a_a_0707597209_3306564128_p_3,(void *)proc_sys_reset_v3_00_a_a_0707597209_3306564128_p_4,(void *)proc_sys_reset_v3_00_a_a_0707597209_3306564128_p_5,(void *)proc_sys_reset_v3_00_a_a_0707597209_3306564128_p_6,(void *)proc_sys_reset_v3_00_a_a_0707597209_3306564128_p_7,(void *)proc_sys_reset_v3_00_a_a_0707597209_3306564128_p_8,(void *)proc_sys_reset_v3_00_a_a_0707597209_3306564128_p_9,(void *)proc_sys_reset_v3_00_a_a_0707597209_3306564128_p_10,(void *)proc_sys_reset_v3_00_a_a_0707597209_3306564128_p_11,(void *)proc_sys_reset_v3_00_a_a_0707597209_3306564128_p_12,(void *)proc_sys_reset_v3_00_a_a_0707597209_3306564128_p_13};
	xsi_register_didat("proc_sys_reset_v3_00_a_a_0707597209_3306564128", "isim/testbench_isim_beh.exe.sim/proc_sys_reset_v3_00_a/a_0707597209_3306564128.didat");
	xsi_register_executes(pe);
}
