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
extern char *STD_STANDARD;
static const char *ng1 = "Function num_ctr_bits ended without a return statement";
extern char *IEEE_P_2592010699;
static const char *ng3 = "Function num_ip_reg ended without a return statement";
static const char *ng4 = "Function ten_bit_addr_used ended without a return statement";
static const char *ng5 = "Function gpo_bit_used ended without a return statement";

char *ieee_p_2592010699_sub_1697423399_503743352(char *, char *, char *, char *, char *, char *);


int xps_iic_v2_03_a_p_3097515396_sub_3702264009_2560411801(char *t1, int t2, int t3)
{
    char t4[144];
    char t5[16];
    char t9[8];
    char t15[8];
    int t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    unsigned char t22;
    int t23;
    int t24;
    int t25;
    int t26;
    unsigned char t27;
    char *t28;
    char *t29;
    int t30;
    int t31;
    char *t32;

LAB0:    t6 = (t4 + 4U);
    t7 = ((STD_STANDARD) + 240);
    t8 = (t6 + 52U);
    *((char **)t8) = t7;
    t10 = (t6 + 36U);
    *((char **)t10) = t9;
    *((int *)t9) = 0;
    t11 = (t6 + 48U);
    *((unsigned int *)t11) = 4U;
    t12 = (t4 + 72U);
    t13 = ((STD_STANDARD) + 240);
    t14 = (t12 + 52U);
    *((char **)t14) = t13;
    t16 = (t12 + 36U);
    *((char **)t16) = t15;
    *((int *)t15) = 0;
    t17 = (t12 + 48U);
    *((unsigned int *)t17) = 4U;
    t18 = (t5 + 4U);
    *((int *)t18) = t2;
    t19 = (t5 + 8U);
    *((int *)t19) = t3;
    t20 = (t2 / t3);
    t21 = (t2 / 212766);
    t22 = (t20 > t21);
    if (t22 != 0)
        goto LAB2;

LAB4:    t20 = 0;
    t21 = 30;

LAB14:    if (t20 <= t21)
        goto LAB15;

LAB17:    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t20 = *((int *)t8);
    t0 = t20;

LAB1:    return t0;
LAB2:    t23 = 0;
    t24 = 30;

LAB5:    if (t23 <= t24)
        goto LAB6;

LAB8:    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t20 = *((int *)t8);
    t0 = t20;
    goto LAB1;

LAB3:    xsi_error(ng1);
    t0 = 0;
    goto LAB1;

LAB6:    t25 = xsi_vhdl_pow(2, t23);
    t26 = (t2 / t3);
    t27 = (t25 < t26);
    if (t27 != 0)
        goto LAB9;

LAB11:
LAB10:
LAB7:    if (t23 == t24)
        goto LAB8;

LAB12:    t20 = (t23 + 1);
    t23 = t20;
    goto LAB5;

LAB9:    t28 = (t6 + 36U);
    t29 = *((char **)t28);
    t30 = *((int *)t29);
    t31 = (t30 + 1);
    t28 = (t6 + 36U);
    t32 = *((char **)t28);
    t28 = (t32 + 0);
    *((int *)t28) = t31;
    goto LAB10;

LAB13:    goto LAB3;

LAB15:    t23 = xsi_vhdl_pow(2, t20);
    t24 = (t2 / 212766);
    t22 = (t23 < t24);
    if (t22 != 0)
        goto LAB18;

LAB20:
LAB19:
LAB16:    if (t20 == t21)
        goto LAB17;

LAB21:    t23 = (t20 + 1);
    t20 = t23;
    goto LAB14;

LAB18:    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t25 = *((int *)t8);
    t26 = (t25 + 1);
    t7 = (t6 + 36U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = t26;
    goto LAB19;

LAB22:    goto LAB3;

}

int xps_iic_v2_03_a_p_3097515396_sub_4241988656_2560411801(char *t1, char *t2, char *t3, char *t4, char *t5, int t6)
{
    char t7[72];
    char t8[24];
    char t12[16];
    char t31[16];
    int t0;
    int t9;
    int t10;
    unsigned int t11;
    int t13;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned char t25;
    char *t26;
    char *t27;
    unsigned char t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    int t37;
    int t38;
    int t39;

LAB0:    t9 = (t6 - 1);
    t10 = (t9 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t11 = (t11 * 1U);
    t13 = (t6 - 1);
    t14 = (t12 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 0;
    t15 = (t14 + 4U);
    *((int *)t15) = t13;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t16 = (t13 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    t15 = (t7 + 4U);
    t18 = ((IEEE_P_2592010699) + 2332);
    t19 = (t15 + 52U);
    *((char **)t19) = t18;
    t20 = (char *)alloca(t11);
    t21 = (t15 + 36U);
    *((char **)t21) = t20;
    xsi_type_set_default_value(t18, t20, t12);
    t22 = (t15 + 40U);
    *((char **)t22) = t12;
    t23 = (t15 + 48U);
    *((unsigned int *)t23) = t11;
    t24 = (t8 + 4U);
    t25 = (t2 != 0);
    if (t25 == 1)
        goto LAB3;

LAB2:    t26 = (t8 + 8U);
    *((char **)t26) = t3;
    t27 = (t8 + 12U);
    t28 = (t4 != 0);
    if (t28 == 1)
        goto LAB5;

LAB4:    t29 = (t8 + 16U);
    *((char **)t29) = t5;
    t30 = (t8 + 20U);
    *((int *)t30) = t6;
    t32 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t31, t2, t3, t4, t5);
    t33 = (t15 + 36U);
    t34 = *((char **)t33);
    t33 = (t34 + 0);
    t35 = (t31 + 12U);
    t17 = *((unsigned int *)t35);
    t36 = (1U * t17);
    memcpy(t33, t32, t36);
    t9 = (t6 - 1);
    t10 = 0;
    t13 = t9;

LAB6:    if (t10 <= t13)
        goto LAB7;

LAB9:    t0 = t6;

LAB1:    return t0;
LAB3:    *((char **)t24) = t2;
    goto LAB2;

LAB5:    *((char **)t27) = t4;
    goto LAB4;

LAB7:    t14 = (t15 + 36U);
    t18 = *((char **)t14);
    t14 = (t12 + 0U);
    t16 = *((int *)t14);
    t19 = (t12 + 8U);
    t37 = *((int *)t19);
    t38 = (t10 - t16);
    t11 = (t38 * t37);
    t21 = (t12 + 4U);
    t39 = *((int *)t21);
    xsi_vhdl_check_range_of_index(t16, t39, t37, t10);
    t17 = (1U * t11);
    t36 = (0 + t17);
    t22 = (t18 + t36);
    t25 = *((unsigned char *)t22);
    t28 = (t25 == (unsigned char)3);
    if (t28 != 0)
        goto LAB10;

LAB12:
LAB11:
LAB8:    if (t10 == t13)
        goto LAB9;

LAB14:    t9 = (t10 + 1);
    t10 = t9;
    goto LAB6;

LAB10:    t0 = t10;
    goto LAB1;

LAB13:    goto LAB11;

LAB15:;
}

int xps_iic_v2_03_a_p_3097515396_sub_1477087446_2560411801(char *t1, int t2)
{
    char t4[8];
    int t0;
    char *t5;
    unsigned char t6;

LAB0:    t5 = (t4 + 4U);
    *((int *)t5) = t2;
    t6 = (t2 == 0);
    if (t6 != 0)
        goto LAB2;

LAB4:    t0 = 10;

LAB1:    return t0;
LAB2:    t0 = 9;
    goto LAB1;

LAB3:    xsi_error(ng3);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

char *xps_iic_v2_03_a_p_3097515396_sub_1125878603_2560411801(char *t1, char *t2, int t3)
{
    char t5[8];
    char *t0;
    char *t6;
    unsigned char t7;
    char *t8;
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;

LAB0:    t6 = (t5 + 4U);
    *((int *)t6) = t3;
    t7 = (t3 == 0);
    if (t7 != 0)
        goto LAB2;

LAB4:    t8 = (t1 + 10410);
    t0 = xsi_get_transient_memory(8U);
    memcpy(t0, t8, 8U);
    t10 = (t2 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 1;
    t11 = (t10 + 4U);
    *((int *)t11) = 8;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t12 = (8 - 1);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;

LAB1:    return t0;
LAB2:    t8 = (t1 + 10402);
    t0 = xsi_get_transient_memory(8U);
    memcpy(t0, t8, 8U);
    t10 = (t2 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 1;
    t11 = (t10 + 4U);
    *((int *)t11) = 8;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t12 = (8 - 1);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    goto LAB1;

LAB3:    xsi_error(ng4);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

char *xps_iic_v2_03_a_p_3097515396_sub_1375058209_2560411801(char *t1, char *t2, int t3)
{
    char t5[8];
    char *t0;
    char *t6;
    unsigned char t7;
    char *t8;
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;

LAB0:    t6 = (t5 + 4U);
    *((int *)t6) = t3;
    t7 = (t3 == 0);
    if (t7 != 0)
        goto LAB2;

LAB4:    t7 = (t3 == 1);
    if (t7 != 0)
        goto LAB6;

LAB7:    t7 = (t3 == 2);
    if (t7 != 0)
        goto LAB9;

LAB10:    t7 = (t3 == 3);
    if (t7 != 0)
        goto LAB12;

LAB13:    t7 = (t3 == 4);
    if (t7 != 0)
        goto LAB15;

LAB16:    t7 = (t3 == 5);
    if (t7 != 0)
        goto LAB18;

LAB19:    t7 = (t3 == 6);
    if (t7 != 0)
        goto LAB21;

LAB22:    t7 = (t3 == 7);
    if (t7 != 0)
        goto LAB24;

LAB25:    t7 = (t3 == 8);
    if (t7 != 0)
        goto LAB27;

LAB28:    t7 = (t3 > 8);
    if (t7 != 0)
        goto LAB30;

LAB31:
LAB3:    xsi_error(ng5);
    t0 = 0;

LAB1:    return t0;
LAB2:    t8 = (t1 + 10418);
    t0 = xsi_get_transient_memory(8U);
    memcpy(t0, t8, 8U);
    t10 = (t2 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 1;
    t11 = (t10 + 4U);
    *((int *)t11) = 8;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t12 = (8 - 1);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    t8 = (t1 + 10426);
    t0 = xsi_get_transient_memory(8U);
    memcpy(t0, t8, 8U);
    t10 = (t2 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 1;
    t11 = (t10 + 4U);
    *((int *)t11) = 8;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t12 = (8 - 1);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    goto LAB1;

LAB8:    goto LAB3;

LAB9:    t8 = (t1 + 10434);
    t0 = xsi_get_transient_memory(8U);
    memcpy(t0, t8, 8U);
    t10 = (t2 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 1;
    t11 = (t10 + 4U);
    *((int *)t11) = 8;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t12 = (8 - 1);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    goto LAB1;

LAB11:    goto LAB3;

LAB12:    t8 = (t1 + 10442);
    t0 = xsi_get_transient_memory(8U);
    memcpy(t0, t8, 8U);
    t10 = (t2 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 1;
    t11 = (t10 + 4U);
    *((int *)t11) = 8;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t12 = (8 - 1);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    goto LAB1;

LAB14:    goto LAB3;

LAB15:    t8 = (t1 + 10450);
    t0 = xsi_get_transient_memory(8U);
    memcpy(t0, t8, 8U);
    t10 = (t2 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 1;
    t11 = (t10 + 4U);
    *((int *)t11) = 8;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t12 = (8 - 1);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    goto LAB1;

LAB17:    goto LAB3;

LAB18:    t8 = (t1 + 10458);
    t0 = xsi_get_transient_memory(8U);
    memcpy(t0, t8, 8U);
    t10 = (t2 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 1;
    t11 = (t10 + 4U);
    *((int *)t11) = 8;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t12 = (8 - 1);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    goto LAB1;

LAB20:    goto LAB3;

LAB21:    t8 = (t1 + 10466);
    t0 = xsi_get_transient_memory(8U);
    memcpy(t0, t8, 8U);
    t10 = (t2 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 1;
    t11 = (t10 + 4U);
    *((int *)t11) = 8;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t12 = (8 - 1);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    goto LAB1;

LAB23:    goto LAB3;

LAB24:    t8 = (t1 + 10474);
    t0 = xsi_get_transient_memory(8U);
    memcpy(t0, t8, 8U);
    t10 = (t2 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 1;
    t11 = (t10 + 4U);
    *((int *)t11) = 8;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t12 = (8 - 1);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    goto LAB1;

LAB26:    goto LAB3;

LAB27:    t8 = (t1 + 10482);
    t0 = xsi_get_transient_memory(8U);
    memcpy(t0, t8, 8U);
    t10 = (t2 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 1;
    t11 = (t10 + 4U);
    *((int *)t11) = 8;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t12 = (8 - 1);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    goto LAB1;

LAB29:    goto LAB3;

LAB30:    t8 = (t1 + 10490);
    t0 = xsi_get_transient_memory(8U);
    memcpy(t0, t8, 8U);
    t10 = (t2 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 1;
    t11 = (t10 + 4U);
    *((int *)t11) = 8;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t12 = (8 - 1);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    goto LAB1;

LAB32:    goto LAB3;

}

char *xps_iic_v2_03_a_p_3097515396_sub_2623355094_2560411801(char *t1, char *t2)
{
    char t3[72];
    char t4[16];
    char t5[32];
    char t12[16];
    char t17[32];
    char *t0;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    char *t10;
    int t11;
    char *t13;
    int t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned char t24;
    char *t25;
    int t26;
    int t27;
    char *t28;
    char *t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned char t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    int t41;
    int t42;
    int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;

LAB0:    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 9;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (9 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t7 = (t5 + 16U);
    t10 = (t7 + 0U);
    *((int *)t10) = 24;
    t10 = (t7 + 4U);
    *((int *)t10) = 31;
    t10 = (t7 + 8U);
    *((int *)t10) = 1;
    t11 = (31 - 24);
    t9 = (t11 * 1);
    t9 = (t9 + 1);
    t10 = (t7 + 12U);
    *((unsigned int *)t10) = t9;
    t10 = (t12 + 0U);
    t13 = (t10 + 0U);
    *((int *)t13) = 24;
    t13 = (t10 + 4U);
    *((int *)t13) = 31;
    t13 = (t10 + 8U);
    *((int *)t13) = 1;
    t14 = (31 - 24);
    t9 = (t14 * 1);
    t9 = (t9 + 1);
    t13 = (t10 + 12U);
    *((unsigned int *)t13) = t9;
    t13 = (t3 + 4U);
    t15 = (t1 + 4328);
    t16 = (t13 + 52U);
    *((char **)t16) = t15;
    t18 = (t13 + 36U);
    *((char **)t18) = t17;
    xsi_type_set_default_value(t15, t17, 0);
    t19 = (t13 + 40U);
    t20 = (t15 + 44U);
    t21 = *((char **)t20);
    *((char **)t19) = t21;
    t22 = (t13 + 48U);
    *((unsigned int *)t22) = 32U;
    t23 = (t4 + 4U);
    t24 = (t2 != 0);
    if (t24 == 1)
        goto LAB3;

LAB2:    t25 = (t4 + 8U);
    *((char **)t25) = t5;
    t26 = 24;
    t27 = 31;

LAB4:    if (t26 <= t27)
        goto LAB5;

LAB7:    t6 = (t13 + 36U);
    t7 = *((char **)t6);
    t24 = (32U != 32U);
    if (t24 == 1)
        goto LAB17;

LAB18:    t0 = xsi_get_transient_memory(32U);
    memcpy(t0, t7, 32U);

LAB1:    return t0;
LAB3:    *((char **)t23) = t2;
    goto LAB2;

LAB5:    t28 = (t13 + 36U);
    t29 = *((char **)t28);
    t30 = (t26 - 24);
    t9 = (t30 * 1);
    xsi_vhdl_check_range_of_index(24, 31, 1, t26);
    t31 = (4U * t9);
    t32 = (0 + t31);
    t28 = (t29 + t32);
    *((int *)t28) = 0;
    t8 = 0;
    t11 = 9;

LAB8:    if (t8 <= t11)
        goto LAB9;

LAB11:
LAB6:    if (t26 == t27)
        goto LAB7;

LAB16:    t8 = (t26 + 1);
    t26 = t8;
    goto LAB4;

LAB9:    t14 = (t26 - 24);
    t9 = (t14 * 1);
    xsi_vhdl_check_range_of_index(24, 31, 1, t26);
    t31 = (1U * t9);
    t30 = (t8 - 0);
    t32 = (t30 * 1);
    xsi_vhdl_check_range_of_index(0, 9, 1, t8);
    t33 = (8U * t32);
    t34 = (0 + t33);
    t35 = (t34 + t31);
    t6 = (t2 + t35);
    t24 = *((unsigned char *)t6);
    t36 = (t24 == (unsigned char)3);
    if (t36 != 0)
        goto LAB12;

LAB14:
LAB13:
LAB10:    if (t8 == t11)
        goto LAB11;

LAB15:    t14 = (t8 + 1);
    t8 = t14;
    goto LAB8;

LAB12:    t7 = (t13 + 36U);
    t10 = *((char **)t7);
    t37 = (t26 - 24);
    t38 = (t37 * 1);
    xsi_vhdl_check_range_of_index(24, 31, 1, t26);
    t39 = (4U * t38);
    t40 = (0 + t39);
    t7 = (t10 + t40);
    t41 = *((int *)t7);
    t42 = (t41 + 1);
    t15 = (t13 + 36U);
    t16 = *((char **)t15);
    t43 = (t26 - 24);
    t44 = (t43 * 1);
    xsi_vhdl_check_range_of_index(24, 31, 1, t26);
    t45 = (4U * t44);
    t46 = (0 + t45);
    t15 = (t16 + t46);
    *((int *)t15) = t42;
    goto LAB13;

LAB17:    xsi_size_not_matching(32U, 32U, 0);
    goto LAB18;

LAB19:;
}

int xps_iic_v2_03_a_p_3097515396_sub_135557154_2560411801(char *t1, int t2, int t3)
{
    char t4[144];
    char t5[16];
    char t9[8];
    char t15[8];
    int t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    unsigned char t23;
    char *t24;
    char *t25;
    int t26;
    int t27;
    char *t28;

LAB0:    t6 = (t4 + 4U);
    t7 = ((STD_STANDARD) + 240);
    t8 = (t6 + 52U);
    *((char **)t8) = t7;
    t10 = (t6 + 36U);
    *((char **)t10) = t9;
    *((int *)t9) = 0;
    t11 = (t6 + 48U);
    *((unsigned int *)t11) = 4U;
    t12 = (t4 + 72U);
    t13 = ((STD_STANDARD) + 240);
    t14 = (t12 + 52U);
    *((char **)t14) = t13;
    t16 = (t12 + 36U);
    *((char **)t16) = t15;
    *((int *)t15) = 0;
    t17 = (t12 + 48U);
    *((unsigned int *)t17) = 4U;
    t18 = (t5 + 4U);
    *((int *)t18) = t2;
    t19 = (t5 + 8U);
    *((int *)t19) = t3;
    t20 = 0;
    t21 = 1000;

LAB2:    if (t20 <= t21)
        goto LAB3;

LAB5:    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t20 = *((int *)t8);
    t0 = t20;

LAB1:    return t0;
LAB3:    t22 = (t2 / t3);
    t23 = (t20 < t22);
    if (t23 != 0)
        goto LAB6;

LAB8:
LAB7:
LAB4:    if (t20 == t21)
        goto LAB5;

LAB9:    t22 = (t20 + 1);
    t20 = t22;
    goto LAB2;

LAB6:    t24 = (t6 + 36U);
    t25 = *((char **)t24);
    t26 = *((int *)t25);
    t27 = (t26 + 1);
    t24 = (t6 + 36U);
    t28 = *((char **)t24);
    t24 = (t28 + 0);
    *((int *)t24) = t27;
    goto LAB7;

LAB10:;
}


extern void xps_iic_v2_03_a_p_3097515396_init()
{
	static char *se[] = {(void *)xps_iic_v2_03_a_p_3097515396_sub_3702264009_2560411801,(void *)xps_iic_v2_03_a_p_3097515396_sub_4241988656_2560411801,(void *)xps_iic_v2_03_a_p_3097515396_sub_1477087446_2560411801,(void *)xps_iic_v2_03_a_p_3097515396_sub_1125878603_2560411801,(void *)xps_iic_v2_03_a_p_3097515396_sub_1375058209_2560411801,(void *)xps_iic_v2_03_a_p_3097515396_sub_2623355094_2560411801,(void *)xps_iic_v2_03_a_p_3097515396_sub_135557154_2560411801};
	xsi_register_didat("xps_iic_v2_03_a_p_3097515396", "isim/testbench_isim_beh.exe.sim/xps_iic_v2_03_a/p_3097515396.didat");
	xsi_register_subprogram_executes(se);
}
