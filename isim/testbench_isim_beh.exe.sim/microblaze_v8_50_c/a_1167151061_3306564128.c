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
static const char *ng0 = "G:/Xilinx/14.7/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/microblaze_v8_50_c/hdl/vhdl/shift_logic_gti.vhd";
extern char *MICROBLAZE_V8_50_C_P_1761634766;
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_1697423399_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_1735675855_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_1837678034_503743352(char *, char *, char *, char *);
char *ieee_p_2592010699_sub_795620321_503743352(char *, char *, char *, char *, char *, char *);


static void microblaze_v8_50_c_a_1167151061_3306564128_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(203, ng0);
    t1 = (t0 + 6280U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_50_C_P_1761634766) + 11144U);
    t3 = *((char **)t1);
    t4 = (1 - 0);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t3 + t6);
    t7 = 1;
    if (2U == 2U)
        goto LAB5;

LAB6:    t7 = 0;

LAB7:    if (t7 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 6280U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_50_C_P_1761634766) + 11212U);
    t3 = *((char **)t1);
    t4 = (1 - 0);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t3 + t6);
    t7 = 1;
    if (2U == 2U)
        goto LAB13;

LAB14:    t7 = 0;

LAB15:    if (t7 != 0)
        goto LAB11;

LAB12:    xsi_set_current_line(208, ng0);
    t1 = (t0 + 17440);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t9 = (t3 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB3:    t1 = (t0 + 17236);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(204, ng0);
    t11 = (t0 + 5912U);
    t12 = *((char **)t11);
    t13 = (0 - 0);
    t14 = (t13 * 1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t11 = (t12 + t16);
    t17 = *((unsigned char *)t11);
    t18 = (t0 + 17440);
    t19 = (t18 + 32U);
    t20 = *((char **)t19);
    t21 = (t20 + 40U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = t17;
    xsi_driver_first_trans_fast(t18);
    goto LAB3;

LAB5:    t8 = 0;

LAB8:    if (t8 < 2U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t9 = (t2 + t8);
    t10 = (t1 + t8);
    if (*((unsigned char *)t9) != *((unsigned char *)t10))
        goto LAB6;

LAB10:    t8 = (t8 + 1);
    goto LAB8;

LAB11:    xsi_set_current_line(206, ng0);
    t11 = (t0 + 6096U);
    t12 = *((char **)t11);
    t17 = *((unsigned char *)t12);
    t11 = (t0 + 17440);
    t18 = (t11 + 32U);
    t19 = *((char **)t18);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = t17;
    xsi_driver_first_trans_fast(t11);
    goto LAB3;

LAB13:    t8 = 0;

LAB16:    if (t8 < 2U)
        goto LAB17;
    else
        goto LAB15;

LAB17:    t9 = (t2 + t8);
    t10 = (t1 + t8);
    if (*((unsigned char *)t9) != *((unsigned char *)t10))
        goto LAB14;

LAB18:    t8 = (t8 + 1);
    goto LAB16;

}

static void microblaze_v8_50_c_a_1167151061_3306564128_p_1(char *t0)
{
    char t9[16];
    char t11[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t10;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(213, ng0);

LAB3:    t1 = (t0 + 7292U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5912U);
    t4 = *((char **)t1);
    t5 = (0 - 0);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t4 + t7);
    t10 = ((IEEE_P_2592010699) + 2332);
    t12 = (t11 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 0;
    t13 = (t12 + 4U);
    *((int *)t13) = 30;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t14 = (30 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t8 = xsi_base_array_concat(t8, t9, t10, (char)99, t3, (char)97, t1, t11, (char)101);
    t15 = (1U + 31U);
    t16 = (32U != t15);
    if (t16 == 1)
        goto LAB5;

LAB6:    t13 = (t0 + 17476);
    t17 = (t13 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    memcpy(t20, t8, 32U);
    xsi_driver_first_trans_fast(t13);

LAB2:    t21 = (t0 + 17244);
    *((int *)t21) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t15, 0);
    goto LAB6;

}

static void microblaze_v8_50_c_a_1167151061_3306564128_p_2(char *t0)
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

LAB0:    xsi_set_current_line(216, ng0);

LAB3:    t1 = (t0 + 5912U);
    t2 = *((char **)t1);
    t3 = (31 - 0);
    t4 = (t3 * 1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 17512);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 17252);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_50_c_a_1167151061_3306564128_p_3(char *t0)
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
    int t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(238, ng0);
    t1 = (t0 + 6188U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_50_C_P_1761634766) + 12164U);
    t3 = *((char **)t1);
    t4 = 1;
    if (2U == 2U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 6188U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_50_C_P_1761634766) + 12232U);
    t3 = *((char **)t1);
    t4 = 1;
    if (2U == 2U)
        goto LAB13;

LAB14:    t4 = 0;

LAB15:    if (t4 != 0)
        goto LAB11;

LAB12:    xsi_set_current_line(251, ng0);
    t1 = (t0 + 17548);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t6 = (t3 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(252, ng0);
    t1 = (t0 + 17584);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t6 = (t3 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(253, ng0);
    t1 = (t0 + 17620);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t6 = (t3 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(254, ng0);
    t1 = (t0 + 17656);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t6 = (t3 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB3:    t1 = (t0 + 17260);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(239, ng0);
    t7 = (t0 + 5912U);
    t8 = *((char **)t7);
    t7 = ((MICROBLAZE_V8_50_C_P_1761634766) + 5432U);
    t9 = *((char **)t7);
    t10 = *((int *)t9);
    t11 = (t10 - 0);
    t12 = (t11 * 1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t7 = (t8 + t14);
    t15 = *((unsigned char *)t7);
    t16 = (t0 + 11140U);
    t17 = *((char **)t16);
    t16 = (t17 + 0);
    *((unsigned char *)t16) = t15;
    xsi_set_current_line(240, ng0);
    t1 = (t0 + 11140U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t1 = (t0 + 17548);
    t3 = (t1 + 32U);
    t6 = *((char **)t3);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(241, ng0);
    t1 = (t0 + 11140U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t1 = (t0 + 17584);
    t3 = (t1 + 32U);
    t6 = *((char **)t3);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(242, ng0);
    t1 = (t0 + 11140U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t1 = (t0 + 17620);
    t3 = (t1 + 32U);
    t6 = *((char **)t3);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(243, ng0);
    t1 = (t0 + 11140U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t1 = (t0 + 17656);
    t3 = (t1 + 32U);
    t6 = *((char **)t3);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    t5 = 0;

LAB8:    if (t5 < 2U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t1 = (t2 + t5);
    t6 = (t3 + t5);
    if (*((unsigned char *)t1) != *((unsigned char *)t6))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB11:    xsi_set_current_line(245, ng0);
    t7 = (t0 + 5912U);
    t8 = *((char **)t7);
    t7 = ((MICROBLAZE_V8_50_C_P_1761634766) + 5500U);
    t9 = *((char **)t7);
    t10 = *((int *)t9);
    t11 = (t10 - 0);
    t12 = (t11 * 1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t7 = (t8 + t14);
    t15 = *((unsigned char *)t7);
    t16 = (t0 + 11140U);
    t17 = *((char **)t16);
    t16 = (t17 + 0);
    *((unsigned char *)t16) = t15;
    xsi_set_current_line(246, ng0);
    t1 = (t0 + 11140U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t1 = (t0 + 17548);
    t3 = (t1 + 32U);
    t6 = *((char **)t3);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(247, ng0);
    t1 = (t0 + 17584);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t6 = (t3 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(248, ng0);
    t1 = (t0 + 11140U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t1 = (t0 + 17620);
    t3 = (t1 + 32U);
    t6 = *((char **)t3);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(249, ng0);
    t1 = (t0 + 17656);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t6 = (t3 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB13:    t5 = 0;

LAB16:    if (t5 < 2U)
        goto LAB17;
    else
        goto LAB15;

LAB17:    t1 = (t2 + t5);
    t6 = (t3 + t5);
    if (*((unsigned char *)t1) != *((unsigned char *)t6))
        goto LAB14;

LAB18:    t5 = (t5 + 1);
    goto LAB16;

}

static void microblaze_v8_50_c_a_1167151061_3306564128_p_4(char *t0)
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
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(258, ng0);
    t1 = (t0 + 7936U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t11 = (t0 + 5912U);
    t12 = *((char **)t11);
    t13 = (0 - 0);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t11 = (t12 + t15);
    t16 = (t0 + 17692);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    memcpy(t20, t11, 16U);
    xsi_driver_first_trans_delta(t16, 0U, 16U, 0LL);

LAB2:    t21 = (t0 + 17268);
    *((int *)t21) = 1;

LAB1:    return;
LAB3:    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t5 = t1;
    memset(t5, (unsigned char)3, 16U);
    t6 = (t0 + 17692);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_delta(t6, 0U, 16U, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_50_c_a_1167151061_3306564128_p_5(char *t0)
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
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(259, ng0);
    t1 = (t0 + 8028U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t11 = (t0 + 5912U);
    t12 = *((char **)t11);
    t13 = (16 - 0);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t11 = (t12 + t15);
    t16 = (t0 + 17728);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    memcpy(t20, t11, 8U);
    xsi_driver_first_trans_delta(t16, 16U, 8U, 0LL);

LAB2:    t21 = (t0 + 17276);
    *((int *)t21) = 1;

LAB1:    return;
LAB3:    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t5 = t1;
    memset(t5, (unsigned char)3, 8U);
    t6 = (t0 + 17728);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_delta(t6, 16U, 8U, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_50_c_a_1167151061_3306564128_p_6(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(260, ng0);

LAB3:    t1 = (t0 + 5912U);
    t2 = *((char **)t1);
    t3 = (24 - 0);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 17764);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_delta(t6, 24U, 8U, 0LL);

LAB2:    t11 = (t0 + 17284);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_50_c_a_1167151061_3306564128_p_7(char *t0)
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

LAB0:    xsi_set_current_line(262, ng0);
    t1 = (t0 + 6464U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 7384U);
    t10 = *((char **)t9);
    t9 = (t0 + 17800);
    t11 = (t9 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    memcpy(t14, t10, 32U);
    xsi_driver_first_trans_fast(t9);

LAB2:    t15 = (t0 + 17292);
    *((int *)t15) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 7568U);
    t4 = *((char **)t1);
    t1 = (t0 + 17800);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t4, 32U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_50_c_a_1167151061_3306564128_p_8(char *t0)
{
    char t11[16];
    char t27[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    int t6;
    char *t7;
    int t8;
    char *t9;
    int t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(269, ng0);
    t1 = (t0 + 6372U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_50_C_P_1761634766) + 9648U);
    t3 = *((char **)t1);
    t4 = xsi_mem_cmp(t3, t2, 2U);
    if (t4 == 1)
        goto LAB3;

LAB8:    t1 = ((MICROBLAZE_V8_50_C_P_1761634766) + 9716U);
    t5 = *((char **)t1);
    t6 = xsi_mem_cmp(t5, t2, 2U);
    if (t6 == 1)
        goto LAB4;

LAB9:    t1 = ((MICROBLAZE_V8_50_C_P_1761634766) + 9784U);
    t7 = *((char **)t1);
    t8 = xsi_mem_cmp(t7, t2, 2U);
    if (t8 == 1)
        goto LAB5;

LAB10:    t1 = ((MICROBLAZE_V8_50_C_P_1761634766) + 9852U);
    t9 = *((char **)t1);
    t10 = xsi_mem_cmp(t9, t2, 2U);
    if (t10 == 1)
        goto LAB6;

LAB11:
LAB7:    xsi_set_current_line(275, ng0);

LAB2:    t1 = (t0 + 17300);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(270, ng0);
    t1 = (t0 + 5912U);
    t12 = *((char **)t1);
    t1 = (t0 + 5916U);
    t13 = *((char **)t1);
    t14 = (t0 + 6004U);
    t15 = *((char **)t14);
    t14 = (t0 + 6008U);
    t16 = *((char **)t14);
    t17 = ieee_p_2592010699_sub_1735675855_503743352(IEEE_P_2592010699, t11, t12, t13, t15, t16);
    t18 = (t11 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (1U * t19);
    t21 = (32U != t20);
    if (t21 == 1)
        goto LAB13;

LAB14:    t22 = (t0 + 17836);
    t23 = (t22 + 32U);
    t24 = *((char **)t23);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    memcpy(t26, t17, 32U);
    xsi_driver_first_trans_fast(t22);
    goto LAB2;

LAB4:    xsi_set_current_line(271, ng0);
    t1 = (t0 + 5912U);
    t2 = *((char **)t1);
    t1 = (t0 + 5916U);
    t3 = *((char **)t1);
    t5 = (t0 + 6004U);
    t7 = *((char **)t5);
    t5 = (t0 + 6008U);
    t9 = *((char **)t5);
    t12 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t11, t2, t3, t7, t9);
    t13 = (t11 + 12U);
    t19 = *((unsigned int *)t13);
    t20 = (1U * t19);
    t21 = (32U != t20);
    if (t21 == 1)
        goto LAB15;

LAB16:    t14 = (t0 + 17836);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memcpy(t18, t12, 32U);
    xsi_driver_first_trans_fast(t14);
    goto LAB2;

LAB5:    xsi_set_current_line(272, ng0);
    t1 = (t0 + 5912U);
    t2 = *((char **)t1);
    t1 = (t0 + 5916U);
    t3 = *((char **)t1);
    t5 = (t0 + 6004U);
    t7 = *((char **)t5);
    t5 = (t0 + 6008U);
    t9 = *((char **)t5);
    t12 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t11, t2, t3, t7, t9);
    t13 = (t11 + 12U);
    t19 = *((unsigned int *)t13);
    t20 = (1U * t19);
    t21 = (32U != t20);
    if (t21 == 1)
        goto LAB17;

LAB18:    t14 = (t0 + 17836);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memcpy(t18, t12, 32U);
    xsi_driver_first_trans_fast(t14);
    goto LAB2;

LAB6:    xsi_set_current_line(273, ng0);
    t1 = (t0 + 5912U);
    t2 = *((char **)t1);
    t1 = (t0 + 5916U);
    t3 = *((char **)t1);
    t5 = (t0 + 6004U);
    t7 = *((char **)t5);
    t5 = (t0 + 6008U);
    t9 = *((char **)t5);
    t12 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t27, t7, t9);
    t13 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t11, t2, t3, t12, t27);
    t14 = (t11 + 12U);
    t19 = *((unsigned int *)t14);
    t20 = (1U * t19);
    t21 = (32U != t20);
    if (t21 == 1)
        goto LAB19;

LAB20:    t15 = (t0 + 17836);
    t16 = (t15 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 40U);
    t22 = *((char **)t18);
    memcpy(t22, t13, 32U);
    xsi_driver_first_trans_fast(t15);
    goto LAB2;

LAB12:;
LAB13:    xsi_size_not_matching(32U, t20, 0);
    goto LAB14;

LAB15:    xsi_size_not_matching(32U, t20, 0);
    goto LAB16;

LAB17:    xsi_size_not_matching(32U, t20, 0);
    goto LAB18;

LAB19:    xsi_size_not_matching(32U, t20, 0);
    goto LAB20;

}

static void microblaze_v8_50_c_a_1167151061_3306564128_p_9(char *t0)
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

LAB0:    xsi_set_current_line(288, ng0);
    t1 = (t0 + 6924U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t8 = (t0 + 17872);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 17308);
    *((int *)t13) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 17872);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_50_c_a_1167151061_3306564128_p_10(char *t0)
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
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(299, ng0);
    t1 = (t0 + 8120U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t11 = (t0 + 8764U);
    t12 = *((char **)t11);
    t13 = (0 - 0);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t11 = (t12 + t15);
    t16 = (t0 + 17908);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    memcpy(t20, t11, 16U);
    xsi_driver_first_trans_delta(t16, 0U, 16U, 0LL);

LAB2:    t21 = (t0 + 17316);
    *((int *)t21) = 1;

LAB1:    return;
LAB3:    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t5 = t1;
    memset(t5, (unsigned char)2, 16U);
    t6 = (t0 + 17908);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_delta(t6, 0U, 16U, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_50_c_a_1167151061_3306564128_p_11(char *t0)
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
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(301, ng0);
    t1 = (t0 + 8212U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t11 = (t0 + 8764U);
    t12 = *((char **)t11);
    t13 = (16 - 0);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t11 = (t12 + t15);
    t16 = (t0 + 17944);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    memcpy(t20, t11, 8U);
    xsi_driver_first_trans_delta(t16, 16U, 8U, 0LL);

LAB2:    t21 = (t0 + 17324);
    *((int *)t21) = 1;

LAB1:    return;
LAB3:    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t5 = t1;
    memset(t5, (unsigned char)2, 8U);
    t6 = (t0 + 17944);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_delta(t6, 16U, 8U, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_50_c_a_1167151061_3306564128_p_12(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(303, ng0);

LAB3:    t1 = (t0 + 8764U);
    t2 = *((char **)t1);
    t3 = (24 - 0);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 17980);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_delta(t6, 24U, 8U, 0LL);

LAB2:    t11 = (t0 + 17332);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_50_c_a_1167151061_3306564128_p_13(char *t0)
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
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    xsi_set_current_line(317, ng0);
    t1 = (t0 + 6740U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB3;

LAB4:    t9 = (t0 + 6648U);
    t10 = *((char **)t9);
    t11 = *((unsigned char *)t10);
    if (t11 != 0)
        goto LAB5;

LAB6:    t17 = (t0 + 6556U);
    t18 = *((char **)t17);
    t19 = *((unsigned char *)t18);
    if (t19 != 0)
        goto LAB7;

LAB8:
LAB9:    t25 = (t0 + 8856U);
    t26 = *((char **)t25);
    t25 = (t0 + 18016);
    t27 = (t25 + 32U);
    t28 = *((char **)t27);
    t29 = (t28 + 40U);
    t30 = *((char **)t29);
    memcpy(t30, t26, 32U);
    xsi_driver_first_trans_fast_port(t25);

LAB2:    t31 = (t0 + 17340);
    *((int *)t31) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 7844U);
    t4 = *((char **)t1);
    t1 = (t0 + 18016);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t4, 32U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB5:    t9 = (t0 + 7752U);
    t12 = *((char **)t9);
    t9 = (t0 + 18016);
    t13 = (t9 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t12, 32U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB7:    t17 = (t0 + 7660U);
    t20 = *((char **)t17);
    t17 = (t0 + 18016);
    t21 = (t17 + 32U);
    t22 = *((char **)t21);
    t23 = (t22 + 40U);
    t24 = *((char **)t23);
    memcpy(t24, t20, 32U);
    xsi_driver_first_trans_fast_port(t17);
    goto LAB2;

LAB10:    goto LAB2;

}

static void microblaze_v8_50_c_a_1167151061_3306564128_p_14(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(577, ng0);
    t1 = (t0 + 6832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t13 = (t0 + 5912U);
    t14 = *((char **)t13);
    t15 = (16 - 0);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t13 = (t14 + t17);
    t18 = (t0 + 18052);
    t19 = (t18 + 32U);
    t20 = *((char **)t19);
    t21 = (t20 + 40U);
    t22 = *((char **)t21);
    memcpy(t22, t13, 8U);
    xsi_driver_first_trans_delta(t18, 0U, 8U, 0LL);

LAB2:    t23 = (t0 + 17348);
    *((int *)t23) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 5912U);
    t4 = *((char **)t1);
    t5 = (24 - 0);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t4 + t7);
    t8 = (t0 + 18052);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 8U);
    xsi_driver_first_trans_delta(t8, 0U, 8U, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_50_c_a_1167151061_3306564128_p_15(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(580, ng0);
    t1 = (t0 + 6832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t13 = (t0 + 5912U);
    t14 = *((char **)t13);
    t15 = (24 - 0);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t13 = (t14 + t17);
    t18 = (t0 + 18088);
    t19 = (t18 + 32U);
    t20 = *((char **)t19);
    t21 = (t20 + 40U);
    t22 = *((char **)t21);
    memcpy(t22, t13, 8U);
    xsi_driver_first_trans_delta(t18, 8U, 8U, 0LL);

LAB2:    t23 = (t0 + 17356);
    *((int *)t23) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 5912U);
    t4 = *((char **)t1);
    t5 = (16 - 0);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t4 + t7);
    t8 = (t0 + 18088);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 8U);
    xsi_driver_first_trans_delta(t8, 8U, 8U, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_50_c_a_1167151061_3306564128_p_16(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(583, ng0);
    t1 = (t0 + 6832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t13 = (t0 + 5912U);
    t14 = *((char **)t13);
    t15 = (0 - 0);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t13 = (t14 + t17);
    t18 = (t0 + 18124);
    t19 = (t18 + 32U);
    t20 = *((char **)t19);
    t21 = (t20 + 40U);
    t22 = *((char **)t21);
    memcpy(t22, t13, 8U);
    xsi_driver_first_trans_delta(t18, 16U, 8U, 0LL);

LAB2:    t23 = (t0 + 17364);
    *((int *)t23) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 5912U);
    t4 = *((char **)t1);
    t5 = (8 - 0);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t4 + t7);
    t8 = (t0 + 18124);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 8U);
    xsi_driver_first_trans_delta(t8, 16U, 8U, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_50_c_a_1167151061_3306564128_p_17(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(586, ng0);
    t1 = (t0 + 6832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t13 = (t0 + 5912U);
    t14 = *((char **)t13);
    t15 = (8 - 0);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t13 = (t14 + t17);
    t18 = (t0 + 18160);
    t19 = (t18 + 32U);
    t20 = *((char **)t19);
    t21 = (t20 + 40U);
    t22 = *((char **)t21);
    memcpy(t22, t13, 8U);
    xsi_driver_first_trans_delta(t18, 24U, 8U, 0LL);

LAB2:    t23 = (t0 + 17372);
    *((int *)t23) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 5912U);
    t4 = *((char **)t1);
    t5 = (0 - 0);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t4 + t7);
    t8 = (t0 + 18160);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 8U);
    xsi_driver_first_trans_delta(t8, 24U, 8U, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_50_c_a_1167151061_3306564128_p_18(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(606, ng0);

LAB3:    t1 = xsi_get_transient_memory(26U);
    memset(t1, 0, 26U);
    t2 = t1;
    memset(t2, (unsigned char)2, 26U);
    t3 = (t0 + 18196);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 26U);
    xsi_driver_first_trans_delta(t3, 0U, 26U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_50_c_a_1167151061_3306564128_p_19(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(607, ng0);

LAB3:    t1 = (t0 + 9224U);
    t2 = *((char **)t1);
    t1 = (t0 + 18232);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 6U);
    xsi_driver_first_trans_delta(t1, 26U, 6U, 0LL);

LAB2:    t7 = (t0 + 17380);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_50_c_a_1167151061_3306564128_p_20(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(609, ng0);

LAB3:    t1 = xsi_get_transient_memory(29U);
    memset(t1, 0, 29U);
    t2 = t1;
    memset(t2, (unsigned char)2, 29U);
    t3 = (t0 + 18268);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 29U);
    xsi_driver_first_trans_delta(t3, 0U, 29U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_50_c_a_1167151061_3306564128_p_21(char *t0)
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

LAB0:    xsi_set_current_line(631, ng0);
    t1 = (t0 + 6556U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t8 = (t0 + 18304);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 17388);
    *((int *)t13) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 18304);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_50_c_a_1167151061_3306564128_p_22(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    int t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(632, ng0);
    t2 = (t0 + 6556U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    if (t4 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t21 = (t0 + 18340);
    t22 = (t21 + 32U);
    t23 = *((char **)t22);
    t24 = (t23 + 40U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = (unsigned char)2;
    xsi_driver_first_trans_fast(t21);

LAB2:    t26 = (t0 + 17396);
    *((int *)t26) = 1;

LAB1:    return;
LAB3:    t13 = (t0 + 18340);
    t17 = (t13 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast(t13);
    goto LAB2;

LAB5:    t2 = (t0 + 6372U);
    t5 = *((char **)t2);
    t2 = ((MICROBLAZE_V8_50_C_P_1761634766) + 22976U);
    t6 = *((char **)t2);
    t7 = *((int *)t6);
    t8 = (t7 - 0);
    t9 = (t8 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t2 = (t5 + t11);
    t12 = *((unsigned char *)t2);
    t13 = ((MICROBLAZE_V8_50_C_P_1761634766) + 23044U);
    t14 = *((char **)t13);
    t15 = *((unsigned char *)t14);
    t16 = (t12 == t15);
    t1 = t16;
    goto LAB7;

LAB9:    goto LAB2;

}


extern void microblaze_v8_50_c_a_1167151061_3306564128_init()
{
	static char *pe[] = {(void *)microblaze_v8_50_c_a_1167151061_3306564128_p_0,(void *)microblaze_v8_50_c_a_1167151061_3306564128_p_1,(void *)microblaze_v8_50_c_a_1167151061_3306564128_p_2,(void *)microblaze_v8_50_c_a_1167151061_3306564128_p_3,(void *)microblaze_v8_50_c_a_1167151061_3306564128_p_4,(void *)microblaze_v8_50_c_a_1167151061_3306564128_p_5,(void *)microblaze_v8_50_c_a_1167151061_3306564128_p_6,(void *)microblaze_v8_50_c_a_1167151061_3306564128_p_7,(void *)microblaze_v8_50_c_a_1167151061_3306564128_p_8,(void *)microblaze_v8_50_c_a_1167151061_3306564128_p_9,(void *)microblaze_v8_50_c_a_1167151061_3306564128_p_10,(void *)microblaze_v8_50_c_a_1167151061_3306564128_p_11,(void *)microblaze_v8_50_c_a_1167151061_3306564128_p_12,(void *)microblaze_v8_50_c_a_1167151061_3306564128_p_13,(void *)microblaze_v8_50_c_a_1167151061_3306564128_p_14,(void *)microblaze_v8_50_c_a_1167151061_3306564128_p_15,(void *)microblaze_v8_50_c_a_1167151061_3306564128_p_16,(void *)microblaze_v8_50_c_a_1167151061_3306564128_p_17,(void *)microblaze_v8_50_c_a_1167151061_3306564128_p_18,(void *)microblaze_v8_50_c_a_1167151061_3306564128_p_19,(void *)microblaze_v8_50_c_a_1167151061_3306564128_p_20,(void *)microblaze_v8_50_c_a_1167151061_3306564128_p_21,(void *)microblaze_v8_50_c_a_1167151061_3306564128_p_22};
	xsi_register_didat("microblaze_v8_50_c_a_1167151061_3306564128", "isim/testbench_isim_beh.exe.sim/microblaze_v8_50_c/a_1167151061_3306564128.didat");
	xsi_register_executes(pe);
}
