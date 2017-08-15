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
static const char *ng0 = "G:/Xilinx/14.7/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/xps_iic_v2_03_a/hdl/vhdl/xps_ipif_ssp1.vhd";
extern char *IEEE_P_0017514958;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_0017514958_sub_1739486367_1861681735(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
char *ieee_p_2592010699_sub_1735675855_503743352(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );


static void xps_iic_v2_03_a_a_1996349607_3306564128_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(613, ng0);
    t1 = (t0 + 6664U);
    t2 = *((char **)t1);
    t1 = (t0 + 36220);
    t4 = 1;
    if (4U == 4U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB3;

LAB4:
LAB11:    t15 = (t0 + 36228);
    t17 = (t0 + 14372);
    t18 = (t17 + 32U);
    t19 = *((char **)t18);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    memcpy(t21, t15, 4U);
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 14176);
    *((int *)t22) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 36224);
    t10 = (t0 + 14372);
    t11 = (t10 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    memcpy(t14, t8, 4U);
    xsi_driver_first_trans_fast(t10);
    goto LAB2;

LAB5:    t5 = 0;

LAB8:    if (t5 < 4U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB12:    goto LAB2;

}

static void xps_iic_v2_03_a_a_1996349607_3306564128_p_1(char *t0)
{
    char *t1;
    char *t2;
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
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(616, ng0);
    t1 = (t0 + 6664U);
    t2 = *((char **)t1);
    t1 = (t0 + 36232);
    t4 = 1;
    if (4U == 4U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB3;

LAB4:
LAB11:    t14 = xsi_get_transient_memory(32U);
    memset(t14, 0, 32U);
    t15 = t14;
    memset(t15, (unsigned char)2, 32U);
    t16 = (t0 + 14408);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    memcpy(t20, t14, 32U);
    xsi_driver_first_trans_fast(t16);

LAB2:    t21 = (t0 + 14184);
    *((int *)t21) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 8412U);
    t9 = *((char **)t8);
    t8 = (t0 + 14408);
    t10 = (t8 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    memcpy(t13, t9, 32U);
    xsi_driver_first_trans_fast(t8);
    goto LAB2;

LAB5:    t5 = 0;

LAB8:    if (t5 < 4U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB12:    goto LAB2;

}

static void xps_iic_v2_03_a_a_1996349607_3306564128_p_2(char *t0)
{
    char *t1;
    char *t2;
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
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(619, ng0);
    t1 = (t0 + 6664U);
    t2 = *((char **)t1);
    t1 = (t0 + 36236);
    t4 = 1;
    if (4U == 4U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB3;

LAB4:
LAB11:    t13 = (t0 + 14444);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_fast(t13);

LAB2:    t18 = (t0 + 14192);
    *((int *)t18) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 14444);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t8);
    goto LAB2;

LAB5:    t5 = 0;

LAB8:    if (t5 < 4U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB12:    goto LAB2;

}

static void xps_iic_v2_03_a_a_1996349607_3306564128_p_3(char *t0)
{
    char t7[16];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(622, ng0);

LAB3:    t1 = (t0 + 6940U);
    t2 = *((char **)t1);
    t3 = (0 - 0);
    t4 = (t3 * 1);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 15;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (15 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t12 = ieee_p_0017514958_sub_1739486367_1861681735(IEEE_P_0017514958, t1, t7);
    t9 = (t0 + 14480);
    t13 = (t9 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t12;
    xsi_driver_first_trans_fast(t9);

LAB2:    t17 = (t0 + 14200);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_iic_v2_03_a_a_1996349607_3306564128_p_4(char *t0)
{
    char t7[16];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(623, ng0);

LAB3:    t1 = (t0 + 6848U);
    t2 = *((char **)t1);
    t3 = (0 - 0);
    t4 = (t3 * 1);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 15;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (15 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t12 = ieee_p_0017514958_sub_1739486367_1861681735(IEEE_P_0017514958, t1, t7);
    t9 = (t0 + 14516);
    t13 = (t9 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t12;
    xsi_driver_first_trans_fast(t9);

LAB2:    t17 = (t0 + 14208);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_iic_v2_03_a_a_1996349607_3306564128_p_5(char *t0)
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

LAB0:    xsi_set_current_line(631, ng0);
    t2 = (t0 + 5812U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 14216);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(632, ng0);
    t4 = (t0 + 7308U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(638, ng0);
    t2 = (t0 + 7860U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 14552);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t11 = (t8 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(639, ng0);
    t2 = (t0 + 7860U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 8044U);
    t5 = *((char **)t2);
    t3 = *((unsigned char *)t5);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t1, t6);
    t2 = (t0 + 14588);
    t8 = (t2 + 32U);
    t11 = *((char **)t8);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t7;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(640, ng0);
    t2 = (t0 + 7952U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 14624);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t11 = (t8 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(641, ng0);
    t2 = (t0 + 7952U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 8136U);
    t5 = *((char **)t2);
    t3 = *((unsigned char *)t5);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t1, t6);
    t2 = (t0 + 14660);
    t8 = (t2 + 32U);
    t11 = *((char **)t8);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t7;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 5836U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(633, ng0);
    t4 = (t0 + 14552);
    t11 = (t4 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(634, ng0);
    t2 = (t0 + 14588);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(635, ng0);
    t2 = (t0 + 14624);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(636, ng0);
    t2 = (t0 + 14660);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void xps_iic_v2_03_a_a_1996349607_3306564128_p_6(char *t0)
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
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned char t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(686, ng0);
    t2 = (t0 + 5812U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 14224);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(687, ng0);
    t4 = (t0 + 10604U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 1)
        goto LAB11;

LAB12:    t8 = (unsigned char)0;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(690, ng0);
    t2 = (t0 + 14696);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB9:    xsi_set_current_line(692, ng0);
    t2 = (t0 + 6848U);
    t4 = *((char **)t2);
    t13 = (16 - 0);
    t14 = (t13 * 1);
    xsi_vhdl_check_range_of_index(0, 26, 1, 16);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t2 = (t4 + t16);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 10604U);
    t9 = *((char **)t5);
    t5 = (t9 + 0);
    *((unsigned char *)t5) = t1;
    goto LAB3;

LAB5:    t4 = (t0 + 5836U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(688, ng0);
    t19 = (t0 + 14696);
    t20 = (t19 + 32U);
    t21 = *((char **)t20);
    t22 = (t21 + 40U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = (unsigned char)3;
    xsi_driver_first_trans_fast(t19);
    goto LAB9;

LAB11:    t4 = (t0 + 6848U);
    t12 = *((char **)t4);
    t13 = (16 - 0);
    t14 = (t13 * 1);
    xsi_vhdl_check_range_of_index(0, 26, 1, 16);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t4 = (t12 + t16);
    t17 = *((unsigned char *)t4);
    t18 = (t17 == (unsigned char)3);
    t8 = t18;
    goto LAB13;

}

static void xps_iic_v2_03_a_a_1996349607_3306564128_p_7(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(700, ng0);

LAB3:    t1 = (t0 + 5836U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 14732);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 14232);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_iic_v2_03_a_a_1996349607_3306564128_p_8(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(702, ng0);

LAB3:    t1 = (t0 + 7308U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 14768);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 14240);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_iic_v2_03_a_a_1996349607_3306564128_p_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(703, ng0);

LAB3:    t1 = (t0 + 6388U);
    t2 = *((char **)t1);
    t1 = (t0 + 14804);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 14248);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_iic_v2_03_a_a_1996349607_3306564128_p_10(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(704, ng0);

LAB3:    t1 = (t0 + 6664U);
    t2 = *((char **)t1);
    t1 = (t0 + 14840);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 14256);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_iic_v2_03_a_a_1996349607_3306564128_p_11(char *t0)
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

LAB0:    xsi_set_current_line(705, ng0);

LAB3:    t1 = (t0 + 6756U);
    t2 = *((char **)t1);
    t3 = (1 - 0);
    t4 = (t3 * 1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 14876);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 14264);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_iic_v2_03_a_a_1996349607_3306564128_p_12(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(706, ng0);

LAB3:    t1 = (t0 + 6480U);
    t2 = *((char **)t1);
    t1 = (t0 + 14912);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 14272);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_iic_v2_03_a_a_1996349607_3306564128_p_13(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(707, ng0);

LAB3:    t1 = (t0 + 6572U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 14948);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 14280);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_iic_v2_03_a_a_1996349607_3306564128_p_14(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(708, ng0);

LAB3:    t1 = (t0 + 6848U);
    t2 = *((char **)t1);
    t3 = (17 - 0);
    t4 = (t3 * 1);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = (t0 + 14984);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 10U);
    xsi_driver_first_trans_fast_port(t7);

LAB2:    t12 = (t0 + 14288);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_iic_v2_03_a_a_1996349607_3306564128_p_15(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(709, ng0);

LAB3:    t1 = (t0 + 6940U);
    t2 = *((char **)t1);
    t3 = (17 - 0);
    t4 = (t3 * 1);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = (t0 + 15020);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 10U);
    xsi_driver_first_trans_fast_port(t7);

LAB2:    t12 = (t0 + 14296);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_iic_v2_03_a_a_1996349607_3306564128_p_16(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(725, ng0);

LAB3:    t2 = (t0 + 7492U);
    t3 = *((char **)t2);
    t2 = (t0 + 34948U);
    t4 = (t0 + 5468U);
    t5 = *((char **)t4);
    t4 = (t0 + 34612U);
    t6 = ieee_p_2592010699_sub_1735675855_503743352(IEEE_P_2592010699, t1, t3, t2, t5, t4);
    t7 = (t1 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (1U * t8);
    t10 = (32U != t9);
    if (t10 == 1)
        goto LAB5;

LAB6:    t11 = (t0 + 15056);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast(t11);

LAB2:    t16 = (t0 + 14304);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t9, 0);
    goto LAB6;

}

static void xps_iic_v2_03_a_a_1996349607_3306564128_p_17(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(726, ng0);

LAB3:    t1 = (t0 + 7768U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7216U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 5744U);
    t7 = *((char **)t1);
    t8 = *((unsigned char *)t7);
    t9 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t6, t8);
    t1 = (t0 + 15092);
    t10 = (t1 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast(t1);

LAB2:    t14 = (t0 + 14312);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_iic_v2_03_a_a_1996349607_3306564128_p_18(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(729, ng0);

LAB3:    t1 = (t0 + 7584U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7032U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 5560U);
    t7 = *((char **)t1);
    t8 = *((unsigned char *)t7);
    t9 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t6, t8);
    t1 = (t0 + 15128);
    t10 = (t1 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast(t1);

LAB2:    t14 = (t0 + 14320);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_iic_v2_03_a_a_1996349607_3306564128_p_19(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(732, ng0);

LAB3:    t1 = (t0 + 7676U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7124U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 5652U);
    t7 = *((char **)t1);
    t8 = *((unsigned char *)t7);
    t9 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t6, t8);
    t1 = (t0 + 15164);
    t10 = (t1 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast(t1);

LAB2:    t14 = (t0 + 14328);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void xps_iic_v2_03_a_a_1996349607_3306564128_init()
{
	static char *pe[] = {(void *)xps_iic_v2_03_a_a_1996349607_3306564128_p_0,(void *)xps_iic_v2_03_a_a_1996349607_3306564128_p_1,(void *)xps_iic_v2_03_a_a_1996349607_3306564128_p_2,(void *)xps_iic_v2_03_a_a_1996349607_3306564128_p_3,(void *)xps_iic_v2_03_a_a_1996349607_3306564128_p_4,(void *)xps_iic_v2_03_a_a_1996349607_3306564128_p_5,(void *)xps_iic_v2_03_a_a_1996349607_3306564128_p_6,(void *)xps_iic_v2_03_a_a_1996349607_3306564128_p_7,(void *)xps_iic_v2_03_a_a_1996349607_3306564128_p_8,(void *)xps_iic_v2_03_a_a_1996349607_3306564128_p_9,(void *)xps_iic_v2_03_a_a_1996349607_3306564128_p_10,(void *)xps_iic_v2_03_a_a_1996349607_3306564128_p_11,(void *)xps_iic_v2_03_a_a_1996349607_3306564128_p_12,(void *)xps_iic_v2_03_a_a_1996349607_3306564128_p_13,(void *)xps_iic_v2_03_a_a_1996349607_3306564128_p_14,(void *)xps_iic_v2_03_a_a_1996349607_3306564128_p_15,(void *)xps_iic_v2_03_a_a_1996349607_3306564128_p_16,(void *)xps_iic_v2_03_a_a_1996349607_3306564128_p_17,(void *)xps_iic_v2_03_a_a_1996349607_3306564128_p_18,(void *)xps_iic_v2_03_a_a_1996349607_3306564128_p_19};
	xsi_register_didat("xps_iic_v2_03_a_a_1996349607_3306564128", "isim/testbench_isim_beh.exe.sim/xps_iic_v2_03_a/a_1996349607_3306564128.didat");
	xsi_register_executes(pe);
}
