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
static const char *ng0 = "G:/Xilinx/14.7/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/microblaze_v8_50_c/hdl/vhdl/barrel_shifter_gti.vhd";



static void microblaze_v8_50_c_a_3841036743_3306564128_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
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
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(197, ng0);
    t2 = (t0 + 1332U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    if (t4 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t19 = (t0 + 5844);
    t20 = (t19 + 32U);
    t21 = *((char **)t20);
    t22 = (t21 + 40U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = (unsigned char)2;
    xsi_driver_first_trans_fast(t19);

LAB2:    t24 = (t0 + 5704);
    *((int *)t24) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 1056U);
    t8 = *((char **)t2);
    t9 = (0 - 0);
    t10 = (t9 * 1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t2 = (t8 + t12);
    t13 = *((unsigned char *)t2);
    t14 = (t0 + 5844);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = t13;
    xsi_driver_first_trans_fast(t14);
    goto LAB2;

LAB5:    t2 = (t0 + 1240U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t7 = (!(t6));
    t1 = t7;
    goto LAB7;

LAB9:    goto LAB2;

}

static void microblaze_v8_50_c_a_3841036743_3306564128_p_1(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned char t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;

LAB0:    xsi_set_current_line(210, ng0);
    t1 = (t0 + 12987);
    *((int *)t1) = 0;
    t2 = (t0 + 12991);
    *((int *)t2) = 31;
    t3 = 0;
    t4 = 31;

LAB2:    if (t3 <= t4)
        goto LAB3;

LAB5:    xsi_set_current_line(213, ng0);
    t1 = (t0 + 3156U);
    t2 = *((char **)t1);
    t1 = (t0 + 5880);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t13 = (t6 + 40U);
    t15 = *((char **)t13);
    memcpy(t15, t2, 32U);
    xsi_driver_first_trans_fast(t1);
    t1 = (t0 + 5712);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(211, ng0);
    t5 = (t0 + 1056U);
    t6 = *((char **)t5);
    t5 = (t0 + 12987);
    t7 = *((int *)t5);
    t8 = (31 - t7);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t8);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t13 = (t6 + t12);
    t14 = *((unsigned char *)t13);
    t15 = (t0 + 3156U);
    t16 = *((char **)t15);
    t15 = (t0 + 12987);
    t17 = *((int *)t15);
    t18 = (t17 - 0);
    t19 = (t18 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, *((int *)t15));
    t20 = (1U * t19);
    t21 = (0 + t20);
    t22 = (t16 + t21);
    *((unsigned char *)t22) = t14;

LAB4:    t1 = (t0 + 12987);
    t3 = *((int *)t1);
    t2 = (t0 + 12991);
    t4 = *((int *)t2);
    if (t3 == t4)
        goto LAB5;

LAB6:    t7 = (t3 + 1);
    t3 = t7;
    t5 = (t0 + 12987);
    *((int *)t5) = t3;
    goto LAB2;

}

static void microblaze_v8_50_c_a_3841036743_3306564128_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(218, ng0);
    t1 = (t0 + 1240U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 1700U);
    t10 = *((char **)t9);
    t9 = (t0 + 5916);
    t11 = (t9 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    memcpy(t14, t10, 32U);
    xsi_driver_first_trans_fast(t9);

LAB2:    t15 = (t0 + 5720);
    *((int *)t15) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 1056U);
    t4 = *((char **)t1);
    t1 = (t0 + 5916);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t4, 32U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_50_c_a_3841036743_3306564128_p_3(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(221, ng0);

LAB3:    t1 = (t0 + 1424U);
    t2 = *((char **)t1);
    t3 = (31 - 1);
    t4 = (t3 - 27);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = (t0 + 5952);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast(t7);

LAB2:    t12 = (t0 + 5728);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_50_c_a_3841036743_3306564128_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned char t14;
    char *t15;
    char *t16;
    int t17;
    unsigned int t18;
    unsigned int t19;

LAB0:    xsi_set_current_line(229, ng0);
    t1 = (t0 + 1884U);
    t2 = *((char **)t1);
    t1 = (t0 + 12995);
    t4 = 1;
    if (2U == 2U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1884U);
    t2 = *((char **)t1);
    t1 = (t0 + 12997);
    t4 = 1;
    if (2U == 2U)
        goto LAB13;

LAB14:    t4 = 0;

LAB15:    if (t4 != 0)
        goto LAB11;

LAB12:    t1 = (t0 + 1884U);
    t2 = *((char **)t1);
    t1 = (t0 + 12999);
    t4 = 1;
    if (2U == 2U)
        goto LAB21;

LAB22:    t4 = 0;

LAB23:    if (t4 != 0)
        goto LAB19;

LAB20:    xsi_set_current_line(242, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    t3 = (t0 + 1792U);
    t6 = *((char **)t3);
    t4 = *((unsigned char *)t6);
    memset(t2, t4, 32U);
    t3 = (t0 + 5988);
    t7 = (t3 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(243, ng0);
    t1 = (t0 + 1976U);
    t2 = *((char **)t1);
    t17 = (0 + 3);
    t5 = (t17 - 0);
    t18 = (t5 * 1U);
    t19 = (0 + t18);
    t1 = (t2 + t19);
    t3 = (t0 + 5988);
    t6 = (t3 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 29U);
    xsi_driver_first_trans_delta(t3, 0U, 29U, 0LL);

LAB3:    t1 = (t0 + 5736);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(231, ng0);
    t8 = (t0 + 1976U);
    t9 = *((char **)t8);
    t8 = (t0 + 5988);
    t10 = (t8 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    memcpy(t13, t9, 32U);
    xsi_driver_first_trans_fast(t8);
    goto LAB3;

LAB5:    t5 = 0;

LAB8:    if (t5 < 2U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB11:    xsi_set_current_line(234, ng0);
    t8 = xsi_get_transient_memory(32U);
    memset(t8, 0, 32U);
    t9 = t8;
    t10 = (t0 + 1792U);
    t11 = *((char **)t10);
    t14 = *((unsigned char *)t11);
    memset(t9, t14, 32U);
    t10 = (t0 + 5988);
    t12 = (t10 + 32U);
    t13 = *((char **)t12);
    t15 = (t13 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t8, 32U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(235, ng0);
    t1 = (t0 + 1976U);
    t2 = *((char **)t1);
    t17 = (0 + 1);
    t5 = (t17 - 0);
    t18 = (t5 * 1U);
    t19 = (0 + t18);
    t1 = (t2 + t19);
    t3 = (t0 + 5988);
    t6 = (t3 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 31U);
    xsi_driver_first_trans_delta(t3, 0U, 31U, 0LL);
    goto LAB3;

LAB13:    t5 = 0;

LAB16:    if (t5 < 2U)
        goto LAB17;
    else
        goto LAB15;

LAB17:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB14;

LAB18:    t5 = (t5 + 1);
    goto LAB16;

LAB19:    xsi_set_current_line(238, ng0);
    t8 = xsi_get_transient_memory(32U);
    memset(t8, 0, 32U);
    t9 = t8;
    t10 = (t0 + 1792U);
    t11 = *((char **)t10);
    t14 = *((unsigned char *)t11);
    memset(t9, t14, 32U);
    t10 = (t0 + 5988);
    t12 = (t10 + 32U);
    t13 = *((char **)t12);
    t15 = (t13 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t8, 32U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(239, ng0);
    t1 = (t0 + 1976U);
    t2 = *((char **)t1);
    t17 = (0 + 2);
    t5 = (t17 - 0);
    t18 = (t5 * 1U);
    t19 = (0 + t18);
    t1 = (t2 + t19);
    t3 = (t0 + 5988);
    t6 = (t3 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 30U);
    xsi_driver_first_trans_delta(t3, 0U, 30U, 0LL);
    goto LAB3;

LAB21:    t5 = 0;

LAB24:    if (t5 < 2U)
        goto LAB25;
    else
        goto LAB23;

LAB25:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB22;

LAB26:    t5 = (t5 + 1);
    goto LAB24;

}

static void microblaze_v8_50_c_a_3841036743_3306564128_p_5(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(260, ng0);
    t2 = (t0 + 848U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 5744);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(261, ng0);
    t4 = (t0 + 964U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 1148U);
    t12 = *((char **)t4);
    t13 = *((unsigned char *)t12);
    t14 = (!(t13));
    t8 = t14;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1516U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB14;

LAB15:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 872U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(262, ng0);
    t4 = (t0 + 6024);
    t15 = (t4 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)1;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    t8 = (unsigned char)1;
    goto LAB13;

LAB14:    xsi_set_current_line(264, ng0);
    t2 = (t0 + 1240U);
    t5 = *((char **)t2);
    t3 = *((unsigned char *)t5);
    t2 = (t0 + 6024);
    t9 = (t2 + 32U);
    t12 = *((char **)t9);
    t15 = (t12 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void microblaze_v8_50_c_a_3841036743_3306564128_p_6(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(275, ng0);
    t2 = (t0 + 848U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 5752);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(276, ng0);
    t4 = (t0 + 964U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 1148U);
    t12 = *((char **)t4);
    t13 = *((unsigned char *)t12);
    t14 = (!(t13));
    t8 = t14;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1516U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB14;

LAB15:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 872U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(277, ng0);
    t4 = (t0 + 6060);
    t15 = (t4 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    t8 = (unsigned char)1;
    goto LAB13;

LAB14:    xsi_set_current_line(279, ng0);
    t2 = (t0 + 1792U);
    t5 = *((char **)t2);
    t3 = *((unsigned char *)t5);
    t2 = (t0 + 6060);
    t9 = (t2 + 32U);
    t12 = *((char **)t9);
    t15 = (t12 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void microblaze_v8_50_c_a_3841036743_3306564128_p_7(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned char t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;

LAB0:    xsi_set_current_line(291, ng0);
    t1 = (t0 + 13001);
    *((int *)t1) = 0;
    t2 = (t0 + 13005);
    *((int *)t2) = 31;
    t3 = 0;
    t4 = 31;

LAB2:    if (t3 <= t4)
        goto LAB3;

LAB5:    xsi_set_current_line(294, ng0);
    t1 = (t0 + 3224U);
    t2 = *((char **)t1);
    t1 = (t0 + 6096);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t13 = (t6 + 40U);
    t15 = *((char **)t13);
    memcpy(t15, t2, 32U);
    xsi_driver_first_trans_fast(t1);
    t1 = (t0 + 5760);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(292, ng0);
    t5 = (t0 + 2436U);
    t6 = *((char **)t5);
    t5 = (t0 + 13001);
    t7 = *((int *)t5);
    t8 = (31 - t7);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t8);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t13 = (t6 + t12);
    t14 = *((unsigned char *)t13);
    t15 = (t0 + 3224U);
    t16 = *((char **)t15);
    t15 = (t0 + 13001);
    t17 = *((int *)t15);
    t18 = (t17 - 0);
    t19 = (t18 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, *((int *)t15));
    t20 = (1U * t19);
    t21 = (0 + t20);
    t22 = (t16 + t21);
    *((unsigned char *)t22) = t14;

LAB4:    t1 = (t0 + 13001);
    t3 = *((int *)t1);
    t2 = (t0 + 13005);
    t4 = *((int *)t2);
    if (t3 == t4)
        goto LAB5;

LAB6:    t7 = (t3 + 1);
    t3 = t7;
    t5 = (t0 + 13001);
    *((int *)t5) = t3;
    goto LAB2;

}

static void microblaze_v8_50_c_a_3841036743_3306564128_p_8(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(303, ng0);
    t1 = (t0 + 2160U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(306, ng0);
    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    t1 = (t0 + 6132);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB3:    t1 = (t0 + 5768);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(304, ng0);
    t1 = (t0 + 2436U);
    t4 = *((char **)t1);
    t1 = (t0 + 6132);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t4, 32U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

}

static void microblaze_v8_50_c_a_3841036743_3306564128_p_9(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(330, ng0);

LAB3:    t1 = (t0 + 1424U);
    t2 = *((char **)t1);
    t3 = (31 - 3);
    t4 = (t3 - 27);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = (t0 + 6168);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast(t7);

LAB2:    t12 = (t0 + 5776);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_50_c_a_3841036743_3306564128_p_10(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    int t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;

LAB0:    xsi_set_current_line(344, ng0);
    t2 = (t0 + 848U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 5784);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(345, ng0);
    t4 = (t0 + 964U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 1148U);
    t12 = *((char **)t4);
    t13 = *((unsigned char *)t12);
    t14 = (!(t13));
    t8 = t14;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1516U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB14;

LAB15:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 872U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(346, ng0);
    t4 = (t0 + 6204);
    t15 = (t4 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    t8 = (unsigned char)1;
    goto LAB13;

LAB14:    xsi_set_current_line(348, ng0);
    t2 = (t0 + 1424U);
    t5 = *((char **)t2);
    t19 = (31 - 4);
    t20 = (t19 - 27);
    t21 = (t20 * 1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t2 = (t5 + t23);
    t3 = *((unsigned char *)t2);
    t9 = (t0 + 6204);
    t12 = (t9 + 32U);
    t15 = *((char **)t12);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = t3;
    xsi_driver_first_trans_fast(t9);
    goto LAB9;

}

static void microblaze_v8_50_c_a_3841036743_3306564128_p_11(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    char *t22;
    char *t23;
    int t24;
    unsigned int t25;
    unsigned int t26;

LAB0:    xsi_set_current_line(359, ng0);
    t2 = (t0 + 848U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 5792);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(360, ng0);
    t4 = (t0 + 964U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 1148U);
    t12 = *((char **)t4);
    t13 = *((unsigned char *)t12);
    t14 = (!(t13));
    t8 = t14;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1516U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB14;

LAB15:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 872U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(361, ng0);
    t4 = xsi_get_transient_memory(32U);
    memset(t4, 0, 32U);
    t15 = t4;
    memset(t15, (unsigned char)2, 32U);
    t16 = (t0 + 6240);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    memcpy(t20, t4, 32U);
    xsi_driver_first_trans_fast(t16);
    goto LAB9;

LAB11:    t8 = (unsigned char)1;
    goto LAB13;

LAB14:    xsi_set_current_line(363, ng0);
    t2 = (t0 + 2620U);
    t5 = *((char **)t2);
    t2 = (t0 + 13009);
    t3 = 1;
    if (2U == 2U)
        goto LAB19;

LAB20:    t3 = 0;

LAB21:    if (t3 != 0)
        goto LAB16;

LAB18:    t2 = (t0 + 2620U);
    t4 = *((char **)t2);
    t2 = (t0 + 13011);
    t1 = 1;
    if (2U == 2U)
        goto LAB27;

LAB28:    t1 = 0;

LAB29:    if (t1 != 0)
        goto LAB25;

LAB26:    t2 = (t0 + 2620U);
    t4 = *((char **)t2);
    t2 = (t0 + 13013);
    t1 = 1;
    if (2U == 2U)
        goto LAB35;

LAB36:    t1 = 0;

LAB37:    if (t1 != 0)
        goto LAB33;

LAB34:    xsi_set_current_line(376, ng0);
    t2 = xsi_get_transient_memory(32U);
    memset(t2, 0, 32U);
    t4 = t2;
    t5 = (t0 + 1792U);
    t9 = *((char **)t5);
    t1 = *((unsigned char *)t9);
    memset(t4, t1, 32U);
    t5 = (t0 + 6240);
    t12 = (t5 + 32U);
    t15 = *((char **)t12);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(377, ng0);
    t2 = (t0 + 2068U);
    t4 = *((char **)t2);
    t24 = (0 + 12);
    t21 = (t24 - 0);
    t25 = (t21 * 1U);
    t26 = (0 + t25);
    t2 = (t4 + t26);
    t5 = (t0 + 6240);
    t9 = (t5 + 32U);
    t12 = *((char **)t9);
    t15 = (t12 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 20U);
    xsi_driver_first_trans_delta(t5, 0U, 20U, 0LL);

LAB17:    goto LAB9;

LAB16:    xsi_set_current_line(365, ng0);
    t16 = (t0 + 2068U);
    t17 = *((char **)t16);
    t16 = (t0 + 6240);
    t18 = (t16 + 32U);
    t19 = *((char **)t18);
    t20 = (t19 + 40U);
    t22 = *((char **)t20);
    memcpy(t22, t17, 32U);
    xsi_driver_first_trans_fast(t16);
    goto LAB17;

LAB19:    t21 = 0;

LAB22:    if (t21 < 2U)
        goto LAB23;
    else
        goto LAB21;

LAB23:    t12 = (t5 + t21);
    t15 = (t2 + t21);
    if (*((unsigned char *)t12) != *((unsigned char *)t15))
        goto LAB20;

LAB24:    t21 = (t21 + 1);
    goto LAB22;

LAB25:    xsi_set_current_line(368, ng0);
    t15 = xsi_get_transient_memory(32U);
    memset(t15, 0, 32U);
    t16 = t15;
    t17 = (t0 + 1792U);
    t18 = *((char **)t17);
    t3 = *((unsigned char *)t18);
    memset(t16, t3, 32U);
    t17 = (t0 + 6240);
    t19 = (t17 + 32U);
    t20 = *((char **)t19);
    t22 = (t20 + 40U);
    t23 = *((char **)t22);
    memcpy(t23, t15, 32U);
    xsi_driver_first_trans_fast(t17);
    xsi_set_current_line(369, ng0);
    t2 = (t0 + 2068U);
    t4 = *((char **)t2);
    t24 = (0 + 4);
    t21 = (t24 - 0);
    t25 = (t21 * 1U);
    t26 = (0 + t25);
    t2 = (t4 + t26);
    t5 = (t0 + 6240);
    t9 = (t5 + 32U);
    t12 = *((char **)t9);
    t15 = (t12 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 28U);
    xsi_driver_first_trans_delta(t5, 0U, 28U, 0LL);
    goto LAB17;

LAB27:    t21 = 0;

LAB30:    if (t21 < 2U)
        goto LAB31;
    else
        goto LAB29;

LAB31:    t9 = (t4 + t21);
    t12 = (t2 + t21);
    if (*((unsigned char *)t9) != *((unsigned char *)t12))
        goto LAB28;

LAB32:    t21 = (t21 + 1);
    goto LAB30;

LAB33:    xsi_set_current_line(372, ng0);
    t15 = xsi_get_transient_memory(32U);
    memset(t15, 0, 32U);
    t16 = t15;
    t17 = (t0 + 1792U);
    t18 = *((char **)t17);
    t3 = *((unsigned char *)t18);
    memset(t16, t3, 32U);
    t17 = (t0 + 6240);
    t19 = (t17 + 32U);
    t20 = *((char **)t19);
    t22 = (t20 + 40U);
    t23 = *((char **)t22);
    memcpy(t23, t15, 32U);
    xsi_driver_first_trans_fast(t17);
    xsi_set_current_line(373, ng0);
    t2 = (t0 + 2068U);
    t4 = *((char **)t2);
    t24 = (0 + 8);
    t21 = (t24 - 0);
    t25 = (t21 * 1U);
    t26 = (0 + t25);
    t2 = (t4 + t26);
    t5 = (t0 + 6240);
    t9 = (t5 + 32U);
    t12 = *((char **)t9);
    t15 = (t12 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 24U);
    xsi_driver_first_trans_delta(t5, 0U, 24U, 0LL);
    goto LAB17;

LAB35:    t21 = 0;

LAB38:    if (t21 < 2U)
        goto LAB39;
    else
        goto LAB37;

LAB39:    t9 = (t4 + t21);
    t12 = (t2 + t21);
    if (*((unsigned char *)t9) != *((unsigned char *)t12))
        goto LAB36;

LAB40:    t21 = (t21 + 1);
    goto LAB38;

}

static void microblaze_v8_50_c_a_3841036743_3306564128_p_12(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;

LAB0:    xsi_set_current_line(389, ng0);
    t1 = (t0 + 2712U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(394, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    t5 = (t0 + 2252U);
    t6 = *((char **)t5);
    t3 = *((unsigned char *)t6);
    memset(t2, t3, 32U);
    t5 = (t0 + 6276);
    t7 = (t5 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(395, ng0);
    t1 = (t0 + 2344U);
    t2 = *((char **)t1);
    t11 = (0 + 16);
    t12 = (t11 - 0);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t2 + t14);
    t5 = (t0 + 6276);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_delta(t5, 0U, 16U, 0LL);

LAB3:    t1 = (t0 + 5800);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(391, ng0);
    t1 = (t0 + 2344U);
    t5 = *((char **)t1);
    t1 = (t0 + 6276);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 32U);
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

}


extern void microblaze_v8_50_c_a_3841036743_3306564128_init()
{
	static char *pe[] = {(void *)microblaze_v8_50_c_a_3841036743_3306564128_p_0,(void *)microblaze_v8_50_c_a_3841036743_3306564128_p_1,(void *)microblaze_v8_50_c_a_3841036743_3306564128_p_2,(void *)microblaze_v8_50_c_a_3841036743_3306564128_p_3,(void *)microblaze_v8_50_c_a_3841036743_3306564128_p_4,(void *)microblaze_v8_50_c_a_3841036743_3306564128_p_5,(void *)microblaze_v8_50_c_a_3841036743_3306564128_p_6,(void *)microblaze_v8_50_c_a_3841036743_3306564128_p_7,(void *)microblaze_v8_50_c_a_3841036743_3306564128_p_8,(void *)microblaze_v8_50_c_a_3841036743_3306564128_p_9,(void *)microblaze_v8_50_c_a_3841036743_3306564128_p_10,(void *)microblaze_v8_50_c_a_3841036743_3306564128_p_11,(void *)microblaze_v8_50_c_a_3841036743_3306564128_p_12};
	xsi_register_didat("microblaze_v8_50_c_a_3841036743_3306564128", "isim/testbench_isim_beh.exe.sim/microblaze_v8_50_c/a_3841036743_3306564128.didat");
	xsi_register_executes(pe);
}
