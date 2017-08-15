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
extern char *IEEE_P_3499444699;
static const char *ng1 = "Function calc_tsusta ended without a return statement";
static const char *ng2 = "Function calc_tsusto ended without a return statement";
static const char *ng3 = "Function calc_thdsta ended without a return statement";
static const char *ng4 = "Function calc_tsudat ended without a return statement";
static const char *ng5 = "Function calc_tbuf ended without a return statement";
static const char *ng6 = "G:/Xilinx/14.7/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/xps_iic_v2_03_a/hdl/vhdl/iic_control.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1388759734_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );
char *ieee_p_3499444699_sub_2213602152_3536714472(char *, char *, int , int );


char *xps_iic_v2_03_a_a_4169363769_3306564128_sub_1622619199_229454594(char *t1, char *t2, int t3, int t4, int t5)
{
    char t7[16];
    char t12[16];
    char *t0;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    char *t17;
    int t18;
    char *t19;
    int t20;
    char *t21;
    int t22;
    char *t23;
    char *t24;
    int t25;
    unsigned int t26;

LAB0:    t8 = (t7 + 4U);
    *((int *)t8) = t3;
    t9 = (t7 + 8U);
    *((int *)t9) = t4;
    t10 = (t7 + 12U);
    *((int *)t10) = t5;
    t11 = (t3 <= 100000);
    if (t11 != 0)
        goto LAB2;

LAB4:    t13 = (t4 / 1111111);
    t14 = ieee_p_3499444699_sub_2213602152_3536714472(IEEE_P_3499444699, t12, t13, t5);
    t15 = (t12 + 12U);
    t16 = *((unsigned int *)t15);
    t16 = (t16 * 1U);
    t0 = xsi_get_transient_memory(t16);
    memcpy(t0, t14, t16);
    t17 = (t12 + 0U);
    t18 = *((int *)t17);
    t19 = (t12 + 4U);
    t20 = *((int *)t19);
    t21 = (t12 + 8U);
    t22 = *((int *)t21);
    t23 = (t2 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = t18;
    t24 = (t23 + 4U);
    *((int *)t24) = t20;
    t24 = (t23 + 8U);
    *((int *)t24) = t22;
    t25 = (t20 - t18);
    t26 = (t25 * t22);
    t26 = (t26 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t26;

LAB1:    return t0;
LAB2:    t13 = (t4 / 175438);
    t14 = ieee_p_3499444699_sub_2213602152_3536714472(IEEE_P_3499444699, t12, t13, t5);
    t15 = (t12 + 12U);
    t16 = *((unsigned int *)t15);
    t16 = (t16 * 1U);
    t0 = xsi_get_transient_memory(t16);
    memcpy(t0, t14, t16);
    t17 = (t12 + 0U);
    t18 = *((int *)t17);
    t19 = (t12 + 4U);
    t20 = *((int *)t19);
    t21 = (t12 + 8U);
    t22 = *((int *)t21);
    t23 = (t2 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = t18;
    t24 = (t23 + 4U);
    *((int *)t24) = t20;
    t24 = (t23 + 8U);
    *((int *)t24) = t22;
    t25 = (t20 - t18);
    t26 = (t25 * t22);
    t26 = (t26 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t26;
    goto LAB1;

LAB3:    xsi_error(ng1);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

char *xps_iic_v2_03_a_a_4169363769_3306564128_sub_1622634445_229454594(char *t1, char *t2, int t3, int t4, int t5)
{
    char t7[16];
    char t12[16];
    char *t0;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    char *t17;
    int t18;
    char *t19;
    int t20;
    char *t21;
    int t22;
    char *t23;
    char *t24;
    int t25;
    unsigned int t26;

LAB0:    t8 = (t7 + 4U);
    *((int *)t8) = t3;
    t9 = (t7 + 8U);
    *((int *)t9) = t4;
    t10 = (t7 + 12U);
    *((int *)t10) = t5;
    t11 = (t3 <= 100000);
    if (t11 != 0)
        goto LAB2;

LAB4:    t13 = (t4 / 1111111);
    t14 = ieee_p_3499444699_sub_2213602152_3536714472(IEEE_P_3499444699, t12, t13, t5);
    t15 = (t12 + 12U);
    t16 = *((unsigned int *)t15);
    t16 = (t16 * 1U);
    t0 = xsi_get_transient_memory(t16);
    memcpy(t0, t14, t16);
    t17 = (t12 + 0U);
    t18 = *((int *)t17);
    t19 = (t12 + 4U);
    t20 = *((int *)t19);
    t21 = (t12 + 8U);
    t22 = *((int *)t21);
    t23 = (t2 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = t18;
    t24 = (t23 + 4U);
    *((int *)t24) = t20;
    t24 = (t23 + 8U);
    *((int *)t24) = t22;
    t25 = (t20 - t18);
    t26 = (t25 * t22);
    t26 = (t26 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t26;

LAB1:    return t0;
LAB2:    t13 = (t4 / 200000);
    t14 = ieee_p_3499444699_sub_2213602152_3536714472(IEEE_P_3499444699, t12, t13, t5);
    t15 = (t12 + 12U);
    t16 = *((unsigned int *)t15);
    t16 = (t16 * 1U);
    t0 = xsi_get_transient_memory(t16);
    memcpy(t0, t14, t16);
    t17 = (t12 + 0U);
    t18 = *((int *)t17);
    t19 = (t12 + 4U);
    t20 = *((int *)t19);
    t21 = (t12 + 8U);
    t22 = *((int *)t21);
    t23 = (t2 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = t18;
    t24 = (t23 + 4U);
    *((int *)t24) = t20;
    t24 = (t23 + 8U);
    *((int *)t24) = t22;
    t25 = (t20 - t18);
    t26 = (t25 * t22);
    t26 = (t26 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t26;
    goto LAB1;

LAB3:    xsi_error(ng2);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

char *xps_iic_v2_03_a_a_4169363769_3306564128_sub_3931039043_229454594(char *t1, char *t2, int t3, int t4, int t5)
{
    char t7[16];
    char t12[16];
    char *t0;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    char *t17;
    int t18;
    char *t19;
    int t20;
    char *t21;
    int t22;
    char *t23;
    char *t24;
    int t25;
    unsigned int t26;

LAB0:    t8 = (t7 + 4U);
    *((int *)t8) = t3;
    t9 = (t7 + 8U);
    *((int *)t9) = t4;
    t10 = (t7 + 12U);
    *((int *)t10) = t5;
    t11 = (t3 <= 100000);
    if (t11 != 0)
        goto LAB2;

LAB4:    t13 = (t4 / 1111111);
    t14 = ieee_p_3499444699_sub_2213602152_3536714472(IEEE_P_3499444699, t12, t13, t5);
    t15 = (t12 + 12U);
    t16 = *((unsigned int *)t15);
    t16 = (t16 * 1U);
    t0 = xsi_get_transient_memory(t16);
    memcpy(t0, t14, t16);
    t17 = (t12 + 0U);
    t18 = *((int *)t17);
    t19 = (t12 + 4U);
    t20 = *((int *)t19);
    t21 = (t12 + 8U);
    t22 = *((int *)t21);
    t23 = (t2 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = t18;
    t24 = (t23 + 4U);
    *((int *)t24) = t20;
    t24 = (t23 + 8U);
    *((int *)t24) = t22;
    t25 = (t20 - t18);
    t26 = (t25 * t22);
    t26 = (t26 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t26;

LAB1:    return t0;
LAB2:    t13 = (t4 / 232558);
    t14 = ieee_p_3499444699_sub_2213602152_3536714472(IEEE_P_3499444699, t12, t13, t5);
    t15 = (t12 + 12U);
    t16 = *((unsigned int *)t15);
    t16 = (t16 * 1U);
    t0 = xsi_get_transient_memory(t16);
    memcpy(t0, t14, t16);
    t17 = (t12 + 0U);
    t18 = *((int *)t17);
    t19 = (t12 + 4U);
    t20 = *((int *)t19);
    t21 = (t12 + 8U);
    t22 = *((int *)t21);
    t23 = (t2 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = t18;
    t24 = (t23 + 4U);
    *((int *)t24) = t20;
    t24 = (t23 + 8U);
    *((int *)t24) = t22;
    t25 = (t20 - t18);
    t26 = (t25 * t22);
    t26 = (t26 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t26;
    goto LAB1;

LAB3:    xsi_error(ng3);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

char *xps_iic_v2_03_a_a_4169363769_3306564128_sub_1604168272_229454594(char *t1, char *t2, int t3, int t4, int t5)
{
    char t7[16];
    char t12[16];
    char *t0;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    char *t17;
    int t18;
    char *t19;
    int t20;
    char *t21;
    int t22;
    char *t23;
    char *t24;
    int t25;
    unsigned int t26;

LAB0:    t8 = (t7 + 4U);
    *((int *)t8) = t3;
    t9 = (t7 + 8U);
    *((int *)t9) = t4;
    t10 = (t7 + 12U);
    *((int *)t10) = t5;
    t11 = (t3 <= 100000);
    if (t11 != 0)
        goto LAB2;

LAB4:    t13 = (t4 / 2500000);
    t14 = ieee_p_3499444699_sub_2213602152_3536714472(IEEE_P_3499444699, t12, t13, t5);
    t15 = (t12 + 12U);
    t16 = *((unsigned int *)t15);
    t16 = (t16 * 1U);
    t0 = xsi_get_transient_memory(t16);
    memcpy(t0, t14, t16);
    t17 = (t12 + 0U);
    t18 = *((int *)t17);
    t19 = (t12 + 4U);
    t20 = *((int *)t19);
    t21 = (t12 + 8U);
    t22 = *((int *)t21);
    t23 = (t2 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = t18;
    t24 = (t23 + 4U);
    *((int *)t24) = t20;
    t24 = (t23 + 8U);
    *((int *)t24) = t22;
    t25 = (t20 - t18);
    t26 = (t25 * t22);
    t26 = (t26 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t26;

LAB1:    return t0;
LAB2:    t13 = (t4 / 1818181);
    t14 = ieee_p_3499444699_sub_2213602152_3536714472(IEEE_P_3499444699, t12, t13, t5);
    t15 = (t12 + 12U);
    t16 = *((unsigned int *)t15);
    t16 = (t16 * 1U);
    t0 = xsi_get_transient_memory(t16);
    memcpy(t0, t14, t16);
    t17 = (t12 + 0U);
    t18 = *((int *)t17);
    t19 = (t12 + 4U);
    t20 = *((int *)t19);
    t21 = (t12 + 8U);
    t22 = *((int *)t21);
    t23 = (t2 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = t18;
    t24 = (t23 + 4U);
    *((int *)t24) = t20;
    t24 = (t23 + 8U);
    *((int *)t24) = t22;
    t25 = (t20 - t18);
    t26 = (t25 * t22);
    t26 = (t26 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t26;
    goto LAB1;

LAB3:    xsi_error(ng4);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

char *xps_iic_v2_03_a_a_4169363769_3306564128_sub_464833100_229454594(char *t1, char *t2, int t3, int t4, int t5)
{
    char t7[16];
    char t12[16];
    char *t0;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    char *t17;
    int t18;
    char *t19;
    int t20;
    char *t21;
    int t22;
    char *t23;
    char *t24;
    int t25;
    unsigned int t26;

LAB0:    t8 = (t7 + 4U);
    *((int *)t8) = t3;
    t9 = (t7 + 8U);
    *((int *)t9) = t4;
    t10 = (t7 + 12U);
    *((int *)t10) = t5;
    t11 = (t3 <= 100000);
    if (t11 != 0)
        goto LAB2;

LAB4:    t13 = (t4 / 625000);
    t14 = ieee_p_3499444699_sub_2213602152_3536714472(IEEE_P_3499444699, t12, t13, t5);
    t15 = (t12 + 12U);
    t16 = *((unsigned int *)t15);
    t16 = (t16 * 1U);
    t0 = xsi_get_transient_memory(t16);
    memcpy(t0, t14, t16);
    t17 = (t12 + 0U);
    t18 = *((int *)t17);
    t19 = (t12 + 4U);
    t20 = *((int *)t19);
    t21 = (t12 + 8U);
    t22 = *((int *)t21);
    t23 = (t2 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = t18;
    t24 = (t23 + 4U);
    *((int *)t24) = t20;
    t24 = (t23 + 8U);
    *((int *)t24) = t22;
    t25 = (t20 - t18);
    t26 = (t25 * t22);
    t26 = (t26 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t26;

LAB1:    return t0;
LAB2:    t13 = (t4 / 175438);
    t14 = ieee_p_3499444699_sub_2213602152_3536714472(IEEE_P_3499444699, t12, t13, t5);
    t15 = (t12 + 12U);
    t16 = *((unsigned int *)t15);
    t16 = (t16 * 1U);
    t0 = xsi_get_transient_memory(t16);
    memcpy(t0, t14, t16);
    t17 = (t12 + 0U);
    t18 = *((int *)t17);
    t19 = (t12 + 4U);
    t20 = *((int *)t19);
    t21 = (t12 + 8U);
    t22 = *((int *)t21);
    t23 = (t2 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = t18;
    t24 = (t23 + 4U);
    *((int *)t24) = t20;
    t24 = (t23 + 8U);
    *((int *)t24) = t22;
    t25 = (t20 - t18);
    t26 = (t25 * t22);
    t26 = (t26 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t26;
    goto LAB1;

LAB3:    xsi_error(ng5);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_0(char *t0)
{
    unsigned char t1;
    unsigned char t2;
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

LAB0:    xsi_set_current_line(600, ng6);
    t4 = (t0 + 4596U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    if (t7 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 1652U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;

LAB13:    if (t3 == 1)
        goto LAB8;

LAB9:    t4 = (t0 + 5700U);
    t11 = *((char **)t4);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)3);
    t2 = t13;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t4 = (t0 + 10852U);
    t14 = *((char **)t4);
    t15 = *((unsigned char *)t14);
    t16 = (t15 == (unsigned char)3);
    t1 = t16;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB14:    t21 = (t0 + 24676);
    t22 = (t21 + 32U);
    t23 = *((char **)t22);
    t24 = (t23 + 40U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t21);

LAB2:    t26 = (t0 + 24176);
    *((int *)t26) = 1;

LAB1:    return;
LAB3:    t4 = (t0 + 24676);
    t17 = (t4 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB11:    t3 = (unsigned char)1;
    goto LAB13;

LAB15:    goto LAB2;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(610, ng6);

LAB3:    t1 = (t0 + 24712);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_2(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    unsigned char t17;
    unsigned char t18;
    char *t19;
    unsigned char t20;
    unsigned char t21;
    char *t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    xsi_set_current_line(615, ng6);
    t5 = (t0 + 6528U);
    t6 = *((char **)t5);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)3);
    if (t8 == 1)
        goto LAB14;

LAB15:    t4 = (unsigned char)0;

LAB16:    if (t4 == 1)
        goto LAB11;

LAB12:    t3 = (unsigned char)0;

LAB13:    if (t3 == 1)
        goto LAB8;

LAB9:    t5 = (t0 + 6528U);
    t16 = *((char **)t5);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)2);
    if (t18 == 1)
        goto LAB17;

LAB18:    t15 = (unsigned char)0;

LAB19:    t2 = t15;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t5 = (t0 + 8736U);
    t22 = *((char **)t5);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)3);
    t1 = t24;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB20:    t29 = (t0 + 24748);
    t30 = (t29 + 32U);
    t31 = *((char **)t30);
    t32 = (t31 + 40U);
    t33 = *((char **)t32);
    *((unsigned char *)t33) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t29);

LAB2:    t34 = (t0 + 24184);
    *((int *)t34) = 1;

LAB1:    return;
LAB3:    t5 = (t0 + 24748);
    t25 = (t5 + 32U);
    t26 = *((char **)t25);
    t27 = (t26 + 40U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t5);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB11:    t5 = (t0 + 5976U);
    t12 = *((char **)t5);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)2);
    t3 = t14;
    goto LAB13;

LAB14:    t5 = (t0 + 7540U);
    t9 = *((char **)t5);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)2);
    t4 = t11;
    goto LAB16;

LAB17:    t5 = (t0 + 6252U);
    t19 = *((char **)t5);
    t20 = *((unsigned char *)t19);
    t21 = (t20 == (unsigned char)2);
    t15 = t21;
    goto LAB19;

LAB21:    goto LAB2;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(621, ng6);

LAB3:    t1 = (t0 + 24784);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    xsi_set_current_line(626, ng6);

LAB3:    t1 = (t0 + 13656U);
    t2 = *((char **)t1);
    t1 = (t0 + 24820);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(627, ng6);

LAB3:    t1 = (t0 + 13928U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 24856);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    xsi_set_current_line(628, ng6);

LAB3:    t1 = (t0 + 13860U);
    t2 = *((char **)t1);
    t1 = (t0 + 24892);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 9U);
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    xsi_set_current_line(629, ng6);

LAB3:    t1 = (t0 + 13724U);
    t2 = *((char **)t1);
    t1 = (t0 + 24928);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_8(char *t0)
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

LAB0:    xsi_set_current_line(640, ng6);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 24192);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(641, ng6);
    t4 = (t0 + 824U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 13996U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t9 == t11);
    if (t12 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(648, ng6);
    t2 = (t0 + 2112U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 24964);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(649, ng6);
    t2 = (t0 + 1744U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 25000);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(650, ng6);
    t2 = (t0 + 1652U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 25036);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(651, ng6);
    t2 = (t0 + 8460U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 25072);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(652, ng6);
    t2 = (t0 + 10760U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 25108);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(642, ng6);
    t4 = (t0 + 24964);
    t13 = (t4 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(643, ng6);
    t2 = (t0 + 25000);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(644, ng6);
    t2 = (t0 + 25036);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(645, ng6);
    t2 = (t0 + 25072);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(646, ng6);
    t2 = (t0 + 25108);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_9(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(657, ng6);

LAB3:    t1 = (t0 + 12232U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 10760U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t5);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t6);
    t1 = (t0 + 25144);
    t8 = (t1 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t7;
    xsi_driver_first_trans_fast(t1);

LAB2:    t12 = (t0 + 24200);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_10(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(658, ng6);

LAB3:    t1 = (t0 + 2112U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 10944U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t5);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t6);
    t1 = (t0 + 25180);
    t8 = (t1 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t7;
    xsi_driver_first_trans_fast(t1);

LAB2:    t12 = (t0 + 24208);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_11(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(659, ng6);

LAB3:    t1 = (t0 + 8460U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 12508U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t5);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t6);
    t1 = (t0 + 25216);
    t8 = (t1 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t7;
    xsi_driver_first_trans_fast(t1);

LAB2:    t12 = (t0 + 24216);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_12(char *t0)
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
    unsigned char t17;

LAB0:    xsi_set_current_line(669, ng6);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 24224);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(670, ng6);
    t4 = (t0 + 824U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 13996U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t9 == t11);
    if (t12 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 2112U);
    t4 = *((char **)t2);
    t6 = *((unsigned char *)t4);
    t7 = (t6 == (unsigned char)3);
    if (t7 == 1)
        goto LAB16;

LAB17:    t3 = (unsigned char)0;

LAB18:    if (t3 == 1)
        goto LAB13;

LAB14:    t1 = (unsigned char)0;

LAB15:    if (t1 != 0)
        goto LAB11;

LAB12:    t2 = (t0 + 1744U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)2);
    if (t6 == 1)
        goto LAB21;

LAB22:    t1 = (unsigned char)0;

LAB23:    if (t1 != 0)
        goto LAB19;

LAB20:    xsi_set_current_line(677, ng6);
    t2 = (t0 + 10852U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 25252);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(671, ng6);
    t4 = (t0 + 25252);
    t13 = (t4 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(673, ng6);
    t2 = (t0 + 25252);
    t10 = (t2 + 32U);
    t13 = *((char **)t10);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    t2 = (t0 + 1744U);
    t8 = *((char **)t2);
    t12 = *((unsigned char *)t8);
    t17 = (t12 == (unsigned char)3);
    t1 = t17;
    goto LAB15;

LAB16:    t2 = (t0 + 10944U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t11 = (t9 == (unsigned char)2);
    t3 = t11;
    goto LAB18;

LAB19:    xsi_set_current_line(675, ng6);
    t2 = (t0 + 25252);
    t8 = (t2 + 32U);
    t10 = *((char **)t8);
    t13 = (t10 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB21:    t2 = (t0 + 11036U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t9 = (t7 == (unsigned char)3);
    t1 = t9;
    goto LAB23;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_13(char *t0)
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
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    unsigned char t20;
    unsigned char t21;
    unsigned char t22;
    unsigned char t23;
    unsigned char t24;
    unsigned char t25;
    unsigned char t26;
    unsigned char t27;
    unsigned char t28;
    unsigned char t29;
    unsigned char t30;
    unsigned char t31;
    unsigned char t32;
    unsigned char t33;
    char *t34;
    unsigned char t35;
    unsigned char t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;

LAB0:    xsi_set_current_line(691, ng6);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 24232);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(692, ng6);
    t4 = (t0 + 824U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 13996U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t9 == t11);
    if (t12 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1744U);
    t4 = *((char **)t2);
    t9 = *((unsigned char *)t4);
    t11 = (t9 == (unsigned char)3);
    if (t11 == 1)
        goto LAB22;

LAB23:    t7 = (unsigned char)0;

LAB24:    if (t7 == 1)
        goto LAB19;

LAB20:    t6 = (unsigned char)0;

LAB21:    if (t6 == 1)
        goto LAB16;

LAB17:    t3 = (unsigned char)0;

LAB18:    if (t3 == 1)
        goto LAB13;

LAB14:    t1 = (unsigned char)0;

LAB15:    if (t1 != 0)
        goto LAB11;

LAB12:    t2 = (t0 + 3952U);
    t4 = *((char **)t2);
    t6 = *((unsigned char *)t4);
    t7 = (t6 == (unsigned char)3);
    if (t7 == 1)
        goto LAB42;

LAB43:    t2 = (t0 + 3952U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t11 = (t9 == (unsigned char)0);
    t3 = t11;

LAB44:    if (t3 == 1)
        goto LAB39;

LAB40:    t2 = (t0 + 1744U);
    t8 = *((char **)t2);
    t12 = *((unsigned char *)t8);
    t17 = (t12 == (unsigned char)2);
    t1 = t17;

LAB41:    if (t1 != 0)
        goto LAB37;

LAB38:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(693, ng6);
    t4 = (t0 + 25288);
    t13 = (t4 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(698, ng6);
    t2 = (t0 + 25288);
    t37 = (t2 + 32U);
    t38 = *((char **)t37);
    t39 = (t38 + 40U);
    t40 = *((char **)t39);
    *((unsigned char *)t40) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    t2 = (t0 + 9932U);
    t14 = *((char **)t2);
    t27 = *((unsigned char *)t14);
    t28 = (t27 == (unsigned char)2);
    if (t28 == 1)
        goto LAB31;

LAB32:    t26 = (unsigned char)0;

LAB33:    if (t26 == 1)
        goto LAB28;

LAB29:    t2 = (t0 + 9932U);
    t16 = *((char **)t2);
    t32 = *((unsigned char *)t16);
    t33 = (t32 == (unsigned char)3);
    if (t33 == 1)
        goto LAB34;

LAB35:    t31 = (unsigned char)0;

LAB36:    t25 = t31;

LAB30:    t1 = t25;
    goto LAB15;

LAB16:    t2 = (t0 + 8460U);
    t13 = *((char **)t2);
    t23 = *((unsigned char *)t13);
    t24 = (t23 == (unsigned char)2);
    t3 = t24;
    goto LAB18;

LAB19:    t2 = (t0 + 4780U);
    t10 = *((char **)t2);
    t21 = *((unsigned char *)t10);
    t22 = (t21 == (unsigned char)3);
    t6 = t22;
    goto LAB21;

LAB22:    t2 = (t0 + 3952U);
    t5 = *((char **)t2);
    t17 = *((unsigned char *)t5);
    t18 = (t17 == (unsigned char)6);
    if (t18 == 1)
        goto LAB25;

LAB26:    t2 = (t0 + 3952U);
    t8 = *((char **)t2);
    t19 = *((unsigned char *)t8);
    t20 = (t19 == (unsigned char)2);
    t12 = t20;

LAB27:    t7 = t12;
    goto LAB24;

LAB25:    t12 = (unsigned char)1;
    goto LAB27;

LAB28:    t25 = (unsigned char)1;
    goto LAB30;

LAB31:    t2 = (t0 + 10024U);
    t15 = *((char **)t2);
    t29 = *((unsigned char *)t15);
    t30 = (t29 == (unsigned char)2);
    t26 = t30;
    goto LAB33;

LAB34:    t2 = (t0 + 10024U);
    t34 = *((char **)t2);
    t35 = *((unsigned char *)t34);
    t36 = (t35 == (unsigned char)3);
    t31 = t36;
    goto LAB36;

LAB37:    xsi_set_current_line(700, ng6);
    t2 = (t0 + 25288);
    t10 = (t2 + 32U);
    t13 = *((char **)t10);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB39:    t1 = (unsigned char)1;
    goto LAB41;

LAB42:    t3 = (unsigned char)1;
    goto LAB44;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_14(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(705, ng6);

LAB3:    t1 = (t0 + 10760U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 25324);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 24240);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_15(char *t0)
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
    unsigned char t17;
    unsigned int t18;

LAB0:    xsi_set_current_line(744, ng6);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 24248);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(745, ng6);
    t4 = (t0 + 824U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 13996U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t9 == t11);
    if (t12 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 5608U);
    t4 = *((char **)t2);
    t6 = *((unsigned char *)t4);
    t7 = (t6 == (unsigned char)3);
    if (t7 == 1)
        goto LAB16;

LAB17:    t2 = (t0 + 10760U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t11 = (t9 == (unsigned char)3);
    t3 = t11;

LAB18:    if (t3 == 1)
        goto LAB13;

LAB14:    t1 = (unsigned char)0;

LAB15:    if (t1 != 0)
        goto LAB11;

LAB12:    t2 = (t0 + 5792U);
    t4 = *((char **)t2);
    t2 = (t0 + 13520U);
    t5 = *((char **)t2);
    t1 = 1;
    if (9U == 9U)
        goto LAB21;

LAB22:    t1 = 0;

LAB23:    if (t1 != 0)
        goto LAB19;

LAB20:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(746, ng6);
    t4 = (t0 + 25360);
    t13 = (t4 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(755, ng6);
    t2 = (t0 + 25360);
    t10 = (t2 + 32U);
    t13 = *((char **)t10);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    t2 = (t0 + 4228U);
    t8 = *((char **)t2);
    t12 = *((unsigned char *)t8);
    t17 = (t12 == (unsigned char)2);
    t1 = t17;
    goto LAB15;

LAB16:    t3 = (unsigned char)1;
    goto LAB18;

LAB19:    xsi_set_current_line(757, ng6);
    t10 = (t0 + 25360);
    t13 = (t10 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t10);
    goto LAB9;

LAB21:    t18 = 0;

LAB24:    if (t18 < 9U)
        goto LAB25;
    else
        goto LAB23;

LAB25:    t2 = (t4 + t18);
    t8 = (t5 + t18);
    if (*((unsigned char *)t2) != *((unsigned char *)t8))
        goto LAB22;

LAB26:    t18 = (t18 + 1);
    goto LAB24;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_16(char *t0)
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
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    unsigned char t20;
    unsigned char t21;
    unsigned char t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(774, ng6);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 24256);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(775, ng6);
    t4 = (t0 + 824U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 13996U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t9 == t11);
    if (t12 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 4044U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)0);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 4044U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t9 = (t7 == (unsigned char)8);
    t1 = t9;

LAB15:    if (t1 != 0)
        goto LAB11;

LAB12:    t2 = (t0 + 6528U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB16;

LAB17:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(776, ng6);
    t4 = (t0 + 25396);
    t13 = (t4 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(777, ng6);
    t2 = (t0 + 25432);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_set_current_line(779, ng6);
    t2 = (t0 + 25396);
    t8 = (t2 + 32U);
    t10 = *((char **)t8);
    t13 = (t10 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(780, ng6);
    t2 = (t0 + 25432);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    t1 = (unsigned char)1;
    goto LAB15;

LAB16:    xsi_set_current_line(784, ng6);
    t2 = (t0 + 4688U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t9 = (t7 == (unsigned char)3);
    if (t9 == 1)
        goto LAB21;

LAB22:    t6 = (unsigned char)0;

LAB23:    if (t6 != 0)
        goto LAB18;

LAB20:    xsi_set_current_line(797, ng6);
    t2 = (t0 + 25432);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB19:    goto LAB9;

LAB18:    xsi_set_current_line(786, ng6);
    t2 = (t0 + 5976U);
    t13 = *((char **)t2);
    t21 = *((unsigned char *)t13);
    t22 = (t21 == (unsigned char)3);
    if (t22 == 1)
        goto LAB30;

LAB31:    t20 = (unsigned char)0;

LAB32:    if (t20 != 0)
        goto LAB27;

LAB29:    xsi_set_current_line(793, ng6);
    t2 = (t0 + 25396);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(794, ng6);
    t2 = (t0 + 25432);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB28:    goto LAB19;

LAB21:    t2 = (t0 + 3952U);
    t8 = *((char **)t2);
    t12 = *((unsigned char *)t8);
    t17 = (t12 == (unsigned char)1);
    if (t17 == 1)
        goto LAB24;

LAB25:    t2 = (t0 + 3952U);
    t10 = *((char **)t2);
    t18 = *((unsigned char *)t10);
    t19 = (t18 == (unsigned char)5);
    t11 = t19;

LAB26:    t6 = t11;
    goto LAB23;

LAB24:    t11 = (unsigned char)1;
    goto LAB26;

LAB27:    xsi_set_current_line(790, ng6);
    t2 = (t0 + 25396);
    t15 = (t2 + 32U);
    t16 = *((char **)t15);
    t25 = (t16 + 40U);
    t26 = *((char **)t25);
    *((unsigned char *)t26) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(791, ng6);
    t2 = (t0 + 25432);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB28;

LAB30:    t2 = (t0 + 5148U);
    t14 = *((char **)t2);
    t23 = *((unsigned char *)t14);
    t24 = (t23 == (unsigned char)2);
    t20 = t24;
    goto LAB32;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_17(char *t0)
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

LAB0:    xsi_set_current_line(805, ng6);

LAB3:    t1 = (t0 + 7816U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 8092U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 25468);
    t7 = (t1 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t11 = (t0 + 24264);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_18(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    unsigned int t17;
    char *t18;
    unsigned char t19;
    unsigned char t20;
    unsigned char t21;
    unsigned char t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7, &&LAB8, &&LAB9, &&LAB10, &&LAB11};

LAB0:    xsi_set_current_line(825, ng6);
    t1 = (t0 + 25504);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(826, ng6);
    t1 = (t0 + 5976U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t1 = (t0 + 25540);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = t6;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(827, ng6);
    t1 = (t0 + 8736U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t1 = (t0 + 25576);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = t6;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(828, ng6);
    t1 = (t0 + 25612);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(829, ng6);
    t1 = (t0 + 25648);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(830, ng6);
    t1 = (t0 + 4044U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t1 = (t0 + 25684);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = t6;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(831, ng6);
    t1 = (t0 + 13996U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t1 = (t0 + 25720);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = t6;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(833, ng6);
    t1 = (t0 + 4044U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t6);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 24272);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(836, ng6);
    t3 = (t0 + 25540);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t7 = (t5 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(837, ng6);
    t1 = (t0 + 25576);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(839, ng6);
    t1 = (t0 + 6528U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB19;

LAB20:    t9 = (unsigned char)0;

LAB21:    if (t9 == 1)
        goto LAB16;

LAB17:    t6 = (unsigned char)0;

LAB18:    if (t6 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(842, ng6);
    t1 = (t0 + 25684);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB14:    goto LAB2;

LAB4:    xsi_set_current_line(847, ng6);
    t1 = (t0 + 25612);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(848, ng6);
    t1 = (t0 + 25648);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(849, ng6);
    t1 = (t0 + 25540);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(850, ng6);
    t1 = (t0 + 25576);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(851, ng6);
    t1 = (t0 + 5148U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t9 = (t6 == (unsigned char)2);
    if (t9 != 0)
        goto LAB22;

LAB24:    xsi_set_current_line(854, ng6);
    t1 = (t0 + 25684);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB23:    goto LAB2;

LAB5:    xsi_set_current_line(862, ng6);
    t1 = (t0 + 25612);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(863, ng6);
    t1 = (t0 + 25648);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(865, ng6);
    t1 = (t0 + 8552U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t9 = (t6 == (unsigned char)3);
    if (t9 != 0)
        goto LAB25;

LAB27:
LAB26:    xsi_set_current_line(869, ng6);
    t1 = (t0 + 9196U);
    t2 = *((char **)t1);
    t1 = (t0 + 13452U);
    t3 = *((char **)t1);
    t6 = 1;
    if (9U == 9U)
        goto LAB31;

LAB32:    t6 = 0;

LAB33:    if (t6 != 0)
        goto LAB28;

LAB30:    xsi_set_current_line(872, ng6);
    t1 = (t0 + 25684);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB29:    goto LAB2;

LAB6:    xsi_set_current_line(876, ng6);
    t1 = (t0 + 25648);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(877, ng6);
    t1 = (t0 + 25504);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(878, ng6);
    t1 = (t0 + 25576);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(879, ng6);
    t1 = (t0 + 4228U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t9 = (t6 == (unsigned char)2);
    if (t9 != 0)
        goto LAB37;

LAB39:    xsi_set_current_line(886, ng6);
    t1 = (t0 + 25684);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB38:    goto LAB2;

LAB7:    xsi_set_current_line(891, ng6);
    t1 = (t0 + 25612);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(892, ng6);
    t1 = (t0 + 25648);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(893, ng6);
    t1 = (t0 + 25504);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(894, ng6);
    t1 = (t0 + 25576);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(899, ng6);
    t1 = (t0 + 8092U);
    t2 = *((char **)t1);
    t12 = *((unsigned char *)t2);
    t13 = (t12 == (unsigned char)3);
    if (t13 == 1)
        goto LAB52;

LAB53:    t1 = (t0 + 8460U);
    t3 = *((char **)t1);
    t14 = *((unsigned char *)t3);
    t15 = (t14 == (unsigned char)3);
    t11 = t15;

LAB54:    if (t11 == 1)
        goto LAB49;

LAB50:    t10 = (unsigned char)0;

LAB51:    if (t10 == 1)
        goto LAB46;

LAB47:    t9 = (unsigned char)0;

LAB48:    if (t9 == 1)
        goto LAB43;

LAB44:    t6 = (unsigned char)0;

LAB45:    if (t6 != 0)
        goto LAB40;

LAB42:    t1 = (t0 + 8552U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t9 = (t6 == (unsigned char)3);
    if (t9 != 0)
        goto LAB55;

LAB56:    xsi_set_current_line(912, ng6);
    t1 = (t0 + 6344U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t1 = (t0 + 25540);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = t6;
    xsi_driver_first_trans_fast(t1);

LAB41:    xsi_set_current_line(921, ng6);
    t1 = (t0 + 9196U);
    t2 = *((char **)t1);
    t1 = (t0 + 13180U);
    t3 = *((char **)t1);
    t6 = 1;
    if (9U == 9U)
        goto LAB60;

LAB61:    t6 = 0;

LAB62:    if (t6 != 0)
        goto LAB57;

LAB59:    xsi_set_current_line(924, ng6);
    t1 = (t0 + 25684);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);

LAB58:    goto LAB2;

LAB8:    xsi_set_current_line(928, ng6);
    t1 = (t0 + 25648);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(929, ng6);
    t1 = (t0 + 25576);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(931, ng6);
    t1 = (t0 + 25504);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(946, ng6);
    t1 = (t0 + 8092U);
    t2 = *((char **)t1);
    t12 = *((unsigned char *)t2);
    t13 = (t12 == (unsigned char)3);
    if (t13 == 1)
        goto LAB78;

LAB79:    t1 = (t0 + 8460U);
    t3 = *((char **)t1);
    t14 = *((unsigned char *)t3);
    t15 = (t14 == (unsigned char)3);
    t11 = t15;

LAB80:    if (t11 == 1)
        goto LAB75;

LAB76:    t10 = (unsigned char)0;

LAB77:    if (t10 == 1)
        goto LAB72;

LAB73:    t9 = (unsigned char)0;

LAB74:    if (t9 == 1)
        goto LAB69;

LAB70:    t6 = (unsigned char)0;

LAB71:    if (t6 != 0)
        goto LAB66;

LAB68:    t1 = (t0 + 8552U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t9 = (t6 == (unsigned char)3);
    if (t9 != 0)
        goto LAB81;

LAB82:    xsi_set_current_line(963, ng6);
    t1 = (t0 + 6344U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t1 = (t0 + 25540);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = t6;
    xsi_driver_first_trans_fast(t1);

LAB67:    xsi_set_current_line(975, ng6);
    t1 = (t0 + 4228U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t9 = (t6 == (unsigned char)3);
    if (t9 != 0)
        goto LAB83;

LAB85:    xsi_set_current_line(978, ng6);
    t1 = (t0 + 25684);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);

LAB84:    goto LAB2;

LAB9:    xsi_set_current_line(995, ng6);
    t1 = (t0 + 25612);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(996, ng6);
    t1 = (t0 + 25648);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(997, ng6);
    t1 = (t0 + 25504);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(998, ng6);
    t1 = (t0 + 7540U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t9 = (t6 == (unsigned char)3);
    if (t9 != 0)
        goto LAB86;

LAB88:    xsi_set_current_line(1008, ng6);
    t1 = (t0 + 8552U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t9 = (t6 == (unsigned char)3);
    if (t9 != 0)
        goto LAB89;

LAB91:    t1 = (t0 + 8736U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t9 = (t6 == (unsigned char)3);
    if (t9 != 0)
        goto LAB101;

LAB102:    xsi_set_current_line(1030, ng6);
    t1 = (t0 + 9196U);
    t2 = *((char **)t1);
    t1 = (t0 + 13112U);
    t3 = *((char **)t1);
    t6 = 1;
    if (9U == 9U)
        goto LAB115;

LAB116:    t6 = 0;

LAB117:    if (t6 != 0)
        goto LAB112;

LAB114:
LAB113:
LAB90:
LAB87:    goto LAB2;

LAB10:    xsi_set_current_line(1039, ng6);
    t1 = (t0 + 5148U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t9 = (t6 == (unsigned char)3);
    if (t9 != 0)
        goto LAB121;

LAB123:    xsi_set_current_line(1042, ng6);
    t1 = (t0 + 25684);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);

LAB122:    goto LAB2;

LAB11:    xsi_set_current_line(1049, ng6);
    t1 = (t0 + 25612);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(1050, ng6);
    t1 = (t0 + 25648);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(1051, ng6);
    t1 = (t0 + 25576);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(1052, ng6);
    t1 = (t0 + 9196U);
    t2 = *((char **)t1);
    t1 = (t0 + 13588U);
    t3 = *((char **)t1);
    t6 = 1;
    if (9U == 9U)
        goto LAB127;

LAB128:    t6 = 0;

LAB129:    if (t6 != 0)
        goto LAB124;

LAB126:    xsi_set_current_line(1055, ng6);
    t1 = (t0 + 25684);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)8;
    xsi_driver_first_trans_fast(t1);

LAB125:    goto LAB2;

LAB12:    xsi_set_current_line(1059, ng6);
    t1 = (t0 + 25684);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB13:    xsi_set_current_line(840, ng6);
    t1 = (t0 + 25684);
    t5 = (t1 + 32U);
    t7 = *((char **)t5);
    t8 = (t7 + 40U);
    t16 = *((char **)t8);
    *((unsigned char *)t16) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB14;

LAB16:    t1 = (t0 + 8368U);
    t4 = *((char **)t1);
    t14 = *((unsigned char *)t4);
    t15 = (t14 == (unsigned char)3);
    t6 = t15;
    goto LAB18;

LAB19:    t1 = (t0 + 8184U);
    t3 = *((char **)t1);
    t12 = *((unsigned char *)t3);
    t13 = (t12 == (unsigned char)2);
    t9 = t13;
    goto LAB21;

LAB22:    xsi_set_current_line(852, ng6);
    t1 = (t0 + 25684);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB23;

LAB25:    xsi_set_current_line(866, ng6);
    t1 = (t0 + 13996U);
    t3 = *((char **)t1);
    t10 = *((unsigned char *)t3);
    t11 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t10);
    t1 = (t0 + 25720);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t7 = (t5 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t11;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB26;

LAB28:    xsi_set_current_line(870, ng6);
    t5 = (t0 + 25684);
    t7 = (t5 + 32U);
    t8 = *((char **)t7);
    t16 = (t8 + 40U);
    t18 = *((char **)t16);
    *((unsigned char *)t18) = (unsigned char)3;
    xsi_driver_first_trans_fast(t5);
    goto LAB29;

LAB31:    t17 = 0;

LAB34:    if (t17 < 9U)
        goto LAB35;
    else
        goto LAB33;

LAB35:    t1 = (t2 + t17);
    t4 = (t3 + t17);
    if (*((unsigned char *)t1) != *((unsigned char *)t4))
        goto LAB32;

LAB36:    t17 = (t17 + 1);
    goto LAB34;

LAB37:    xsi_set_current_line(884, ng6);
    t1 = (t0 + 25684);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB38;

LAB40:    xsi_set_current_line(903, ng6);
    t1 = (t0 + 25576);
    t8 = (t1 + 32U);
    t16 = *((char **)t8);
    t18 = (t16 + 40U);
    t25 = *((char **)t18);
    *((unsigned char *)t25) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(906, ng6);
    t1 = (t0 + 25540);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB41;

LAB43:    t1 = (t0 + 3952U);
    t7 = *((char **)t1);
    t23 = *((unsigned char *)t7);
    t24 = (t23 != (unsigned char)6);
    t6 = t24;
    goto LAB45;

LAB46:    t1 = (t0 + 3952U);
    t5 = *((char **)t1);
    t21 = *((unsigned char *)t5);
    t22 = (t21 != (unsigned char)2);
    t9 = t22;
    goto LAB48;

LAB49:    t1 = (t0 + 3952U);
    t4 = *((char **)t1);
    t19 = *((unsigned char *)t4);
    t20 = (t19 != (unsigned char)4);
    t10 = t20;
    goto LAB51;

LAB52:    t11 = (unsigned char)1;
    goto LAB54;

LAB55:    xsi_set_current_line(910, ng6);
    t1 = (t0 + 25540);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB41;

LAB57:    xsi_set_current_line(922, ng6);
    t5 = (t0 + 25684);
    t7 = (t5 + 32U);
    t8 = *((char **)t7);
    t16 = (t8 + 40U);
    t18 = *((char **)t16);
    *((unsigned char *)t18) = (unsigned char)5;
    xsi_driver_first_trans_fast(t5);
    goto LAB58;

LAB60:    t17 = 0;

LAB63:    if (t17 < 9U)
        goto LAB64;
    else
        goto LAB62;

LAB64:    t1 = (t2 + t17);
    t4 = (t3 + t17);
    if (*((unsigned char *)t1) != *((unsigned char *)t4))
        goto LAB61;

LAB65:    t17 = (t17 + 1);
    goto LAB63;

LAB66:    xsi_set_current_line(950, ng6);
    t1 = (t0 + 25576);
    t8 = (t1 + 32U);
    t16 = *((char **)t8);
    t18 = (t16 + 40U);
    t25 = *((char **)t18);
    *((unsigned char *)t25) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(953, ng6);
    t1 = (t0 + 25540);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB67;

LAB69:    t1 = (t0 + 3952U);
    t7 = *((char **)t1);
    t23 = *((unsigned char *)t7);
    t24 = (t23 != (unsigned char)6);
    t6 = t24;
    goto LAB71;

LAB72:    t1 = (t0 + 3952U);
    t5 = *((char **)t1);
    t21 = *((unsigned char *)t5);
    t22 = (t21 != (unsigned char)2);
    t9 = t22;
    goto LAB74;

LAB75:    t1 = (t0 + 3952U);
    t4 = *((char **)t1);
    t19 = *((unsigned char *)t4);
    t20 = (t19 != (unsigned char)4);
    t10 = t20;
    goto LAB77;

LAB78:    t11 = (unsigned char)1;
    goto LAB80;

LAB81:    xsi_set_current_line(961, ng6);
    t1 = (t0 + 25540);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB67;

LAB83:    xsi_set_current_line(976, ng6);
    t1 = (t0 + 25684);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);
    goto LAB84;

LAB86:    xsi_set_current_line(1001, ng6);
    t1 = (t0 + 25684);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB87;

LAB89:    xsi_set_current_line(1009, ng6);
    t1 = (t0 + 9196U);
    t3 = *((char **)t1);
    t1 = (t0 + 13316U);
    t4 = *((char **)t1);
    t10 = 1;
    if (9U == 9U)
        goto LAB95;

LAB96:    t10 = 0;

LAB97:    if (t10 != 0)
        goto LAB92;

LAB94:
LAB93:    goto LAB90;

LAB92:    xsi_set_current_line(1013, ng6);
    t7 = (t0 + 25684);
    t8 = (t7 + 32U);
    t16 = *((char **)t8);
    t18 = (t16 + 40U);
    t25 = *((char **)t18);
    *((unsigned char *)t25) = (unsigned char)1;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(1014, ng6);
    t1 = (t0 + 25612);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(1015, ng6);
    t1 = (t0 + 25648);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB93;

LAB95:    t17 = 0;

LAB98:    if (t17 < 9U)
        goto LAB99;
    else
        goto LAB97;

LAB99:    t1 = (t3 + t17);
    t5 = (t4 + t17);
    if (*((unsigned char *)t1) != *((unsigned char *)t5))
        goto LAB96;

LAB100:    t17 = (t17 + 1);
    goto LAB98;

LAB101:    xsi_set_current_line(1018, ng6);
    t1 = (t0 + 9196U);
    t3 = *((char **)t1);
    t1 = (t0 + 13384U);
    t4 = *((char **)t1);
    t10 = 1;
    if (9U == 9U)
        goto LAB106;

LAB107:    t10 = 0;

LAB108:    if (t10 != 0)
        goto LAB103;

LAB105:
LAB104:    goto LAB90;

LAB103:    xsi_set_current_line(1022, ng6);
    t7 = (t0 + 25684);
    t8 = (t7 + 32U);
    t16 = *((char **)t8);
    t18 = (t16 + 40U);
    t25 = *((char **)t18);
    *((unsigned char *)t25) = (unsigned char)7;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(1023, ng6);
    t1 = (t0 + 25648);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(1024, ng6);
    t1 = (t0 + 25612);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(1025, ng6);
    t1 = (t0 + 25540);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(1026, ng6);
    t1 = (t0 + 25576);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB104;

LAB106:    t17 = 0;

LAB109:    if (t17 < 9U)
        goto LAB110;
    else
        goto LAB108;

LAB110:    t1 = (t3 + t17);
    t5 = (t4 + t17);
    if (*((unsigned char *)t1) != *((unsigned char *)t5))
        goto LAB107;

LAB111:    t17 = (t17 + 1);
    goto LAB109;

LAB112:    xsi_set_current_line(1031, ng6);
    t5 = (t0 + 25684);
    t7 = (t5 + 32U);
    t8 = *((char **)t7);
    t16 = (t8 + 40U);
    t18 = *((char **)t16);
    *((unsigned char *)t18) = (unsigned char)3;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(1032, ng6);
    t1 = (t0 + 25648);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(1033, ng6);
    t1 = (t0 + 25612);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB113;

LAB115:    t17 = 0;

LAB118:    if (t17 < 9U)
        goto LAB119;
    else
        goto LAB117;

LAB119:    t1 = (t2 + t17);
    t4 = (t3 + t17);
    if (*((unsigned char *)t1) != *((unsigned char *)t4))
        goto LAB116;

LAB120:    t17 = (t17 + 1);
    goto LAB118;

LAB121:    xsi_set_current_line(1040, ng6);
    t1 = (t0 + 25684);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)8;
    xsi_driver_first_trans_fast(t1);
    goto LAB122;

LAB124:    xsi_set_current_line(1053, ng6);
    t5 = (t0 + 25684);
    t7 = (t5 + 32U);
    t8 = *((char **)t7);
    t16 = (t8 + 40U);
    t18 = *((char **)t16);
    *((unsigned char *)t18) = (unsigned char)0;
    xsi_driver_first_trans_fast(t5);
    goto LAB125;

LAB127:    t17 = 0;

LAB130:    if (t17 < 9U)
        goto LAB131;
    else
        goto LAB129;

LAB131:    t1 = (t2 + t17);
    t4 = (t3 + t17);
    if (*((unsigned char *)t1) != *((unsigned char *)t4))
        goto LAB128;

LAB132:    t17 = (t17 + 1);
    goto LAB130;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_19(char *t0)
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

LAB0:    xsi_set_current_line(1070, ng6);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 24280);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1071, ng6);
    t4 = (t0 + 824U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 13996U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t9 == t11);
    if (t12 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(1077, ng6);
    t2 = (t0 + 4136U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 25756);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1078, ng6);
    t2 = (t0 + 5884U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 25792);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1081, ng6);
    t2 = (t0 + 4504U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 1652U);
    t5 = *((char **)t2);
    t3 = *((unsigned char *)t5);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t1, t6);
    t2 = (t0 + 25828);
    t8 = (t2 + 32U);
    t10 = *((char **)t8);
    t13 = (t10 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t7;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1082, ng6);
    t2 = (t0 + 8644U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 25864);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1072, ng6);
    t4 = (t0 + 25756);
    t13 = (t4 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)0;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(1073, ng6);
    t2 = (t0 + 25792);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1074, ng6);
    t2 = (t0 + 25828);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1075, ng6);
    t2 = (t0 + 25864);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_20(char *t0)
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

LAB0:    xsi_set_current_line(1113, ng6);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 24288);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1115, ng6);
    t4 = (t0 + 916U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = ieee_p_2592010699_sub_1388759734_503743352(IEEE_P_2592010699, t9);
    t4 = (t0 + 25900);
    t11 = (t4 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t10;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(1116, ng6);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = ieee_p_2592010699_sub_1388759734_503743352(IEEE_P_2592010699, t1);
    t2 = (t0 + 25936);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t11 = (t8 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1118, ng6);
    t2 = (t0 + 5240U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 25972);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t11 = (t8 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1119, ng6);
    t2 = (t0 + 5148U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 26008);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t11 = (t8 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1122, ng6);
    t2 = (t0 + 4320U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 26044);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t11 = (t8 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1123, ng6);
    t2 = (t0 + 4228U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 26080);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t11 = (t8 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1125, ng6);
    t2 = (t0 + 5976U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 26116);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t11 = (t8 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_21(char *t0)
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
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    unsigned char t20;
    unsigned char t21;
    unsigned char t22;
    unsigned char t23;
    unsigned char t24;
    unsigned char t25;
    unsigned char t26;
    unsigned char t27;
    unsigned char t28;
    unsigned char t29;
    unsigned char t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    xsi_set_current_line(1138, ng6);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 24296);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1139, ng6);
    t4 = (t0 + 824U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 13996U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t9 == t11);
    if (t12 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(1143, ng6);
    t2 = (t0 + 1836U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 7816U);
    t5 = *((char **)t2);
    t3 = *((unsigned char *)t5);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t1, t6);
    t2 = (t0 + 7632U);
    t8 = *((char **)t2);
    t9 = *((unsigned char *)t8);
    t2 = (t0 + 10300U);
    t10 = *((char **)t2);
    t11 = *((unsigned char *)t10);
    t2 = (t0 + 10392U);
    t13 = *((char **)t2);
    t12 = *((unsigned char *)t13);
    t17 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t12);
    t18 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t11, t17);
    t19 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t18);
    t20 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t9, t19);
    t2 = (t0 + 7816U);
    t14 = *((char **)t2);
    t21 = *((unsigned char *)t14);
    t22 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t21);
    t23 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t20, t22);
    t2 = (t0 + 2020U);
    t15 = *((char **)t2);
    t24 = *((unsigned char *)t15);
    t25 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t24);
    t26 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t23, t25);
    t2 = (t0 + 11128U);
    t16 = *((char **)t2);
    t27 = *((unsigned char *)t16);
    t28 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t27);
    t29 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t26, t28);
    t30 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t7, t29);
    t2 = (t0 + 26152);
    t31 = (t2 + 32U);
    t32 = *((char **)t31);
    t33 = (t32 + 40U);
    t34 = *((char **)t33);
    *((unsigned char *)t34) = t30;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1147, ng6);
    t2 = (t0 + 7632U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 26188);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1140, ng6);
    t4 = (t0 + 26152);
    t13 = (t4 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(1141, ng6);
    t2 = (t0 + 26188);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_22(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(1159, ng6);

LAB3:    t1 = (t0 + 5332U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5148U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t5);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t6);
    t1 = (t0 + 26224);
    t8 = (t1 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t7;
    xsi_driver_first_trans_fast(t1);

LAB2:    t12 = (t0 + 24304);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_23(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(1160, ng6);

LAB3:    t1 = (t0 + 5332U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 5148U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t4, t6);
    t1 = (t0 + 26260);
    t8 = (t1 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t7;
    xsi_driver_first_trans_fast(t1);

LAB2:    t12 = (t0 + 24312);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_24(char *t0)
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
    unsigned char t11;
    unsigned char t12;
    char *t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(1161, ng6);

LAB3:    t1 = (t0 + 5424U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5516U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 12324U);
    t7 = *((char **)t1);
    t8 = *((unsigned char *)t7);
    t9 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t6, t8);
    t1 = (t0 + 12416U);
    t10 = *((char **)t1);
    t11 = *((unsigned char *)t10);
    t12 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t9, t11);
    t1 = (t0 + 12600U);
    t13 = *((char **)t1);
    t14 = *((unsigned char *)t13);
    t15 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t12, t14);
    t1 = (t0 + 26296);
    t16 = (t1 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = t15;
    xsi_driver_first_trans_fast(t1);

LAB2:    t20 = (t0 + 24320);
    *((int *)t20) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_25(char *t0)
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
    char *t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(1169, ng6);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 24328);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1170, ng6);
    t4 = (t0 + 824U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t4 = (t0 + 13996U);
    t11 = *((char **)t4);
    t12 = *((unsigned char *)t11);
    t13 = (t10 == t12);
    if (t13 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 3952U);
    t14 = *((char **)t4);
    t15 = *((unsigned char *)t14);
    t16 = (t15 == (unsigned char)1);
    t8 = t16;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 5424U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB14;

LAB15:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1171, ng6);
    t4 = (t0 + 26332);
    t17 = (t4 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    t8 = (unsigned char)1;
    goto LAB13;

LAB14:    xsi_set_current_line(1173, ng6);
    t2 = (t0 + 4228U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(1176, ng6);
    t2 = (t0 + 26332);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB17:    goto LAB9;

LAB16:    xsi_set_current_line(1174, ng6);
    t2 = (t0 + 26332);
    t9 = (t2 + 32U);
    t11 = *((char **)t9);
    t14 = (t11 + 40U);
    t17 = *((char **)t14);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB17;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_26(char *t0)
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
    char *t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(1187, ng6);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 24336);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1188, ng6);
    t4 = (t0 + 824U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t4 = (t0 + 13996U);
    t11 = *((char **)t4);
    t12 = *((unsigned char *)t11);
    t13 = (t10 == t12);
    if (t13 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 7908U);
    t14 = *((char **)t4);
    t15 = *((unsigned char *)t14);
    t16 = (t15 == (unsigned char)3);
    t8 = t16;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 5516U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB14;

LAB15:    t2 = (t0 + 7724U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)2);
    if (t6 == 1)
        goto LAB21;

LAB22:    t1 = (unsigned char)0;

LAB23:    if (t1 != 0)
        goto LAB19;

LAB20:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1189, ng6);
    t4 = (t0 + 26368);
    t17 = (t4 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    t8 = (unsigned char)1;
    goto LAB13;

LAB14:    xsi_set_current_line(1191, ng6);
    t2 = (t0 + 4228U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(1194, ng6);
    t2 = (t0 + 26368);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB17:    goto LAB9;

LAB16:    xsi_set_current_line(1192, ng6);
    t2 = (t0 + 26368);
    t9 = (t2 + 32U);
    t11 = *((char **)t9);
    t14 = (t11 + 40U);
    t17 = *((char **)t14);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB17;

LAB19:    xsi_set_current_line(1198, ng6);
    t2 = (t0 + 26368);
    t9 = (t2 + 32U);
    t11 = *((char **)t9);
    t14 = (t11 + 40U);
    t17 = *((char **)t14);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB21:    t2 = (t0 + 7632U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t8 = (t7 == (unsigned char)3);
    t1 = t8;
    goto LAB23;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_27(char *t0)
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

LAB0:    xsi_set_current_line(1215, ng6);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 24344);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1216, ng6);
    t4 = (t0 + 824U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 13996U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t9 == t11);
    if (t12 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(1221, ng6);
    t2 = (t0 + 8184U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 26440);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1223, ng6);
    t2 = (t0 + 7908U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB13:
LAB12:    xsi_set_current_line(1226, ng6);
    t2 = (t0 + 8000U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB14;

LAB16:
LAB15:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1217, ng6);
    t4 = (t0 + 26404);
    t13 = (t4 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(1218, ng6);
    t2 = (t0 + 26440);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_set_current_line(1224, ng6);
    t2 = (t0 + 26404);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB12;

LAB14:    xsi_set_current_line(1227, ng6);
    t2 = (t0 + 26404);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB15;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_28(char *t0)
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
    unsigned char t17;

LAB0:    xsi_set_current_line(1242, ng6);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 24352);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1243, ng6);
    t4 = (t0 + 824U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 13996U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t9 == t11);
    if (t12 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(1248, ng6);
    t2 = (t0 + 7724U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)2);
    if (t6 == 1)
        goto LAB14;

LAB15:    t1 = (unsigned char)0;

LAB16:    if (t1 != 0)
        goto LAB11;

LAB13:    t2 = (t0 + 7908U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB17;

LAB18:
LAB12:    xsi_set_current_line(1254, ng6);
    t2 = (t0 + 7540U);
    t4 = *((char **)t2);
    t6 = *((unsigned char *)t4);
    t7 = (t6 == (unsigned char)2);
    if (t7 == 1)
        goto LAB25;

LAB26:    t3 = (unsigned char)0;

LAB27:    if (t3 == 1)
        goto LAB22;

LAB23:    t1 = (unsigned char)0;

LAB24:    if (t1 != 0)
        goto LAB19;

LAB21:    t2 = (t0 + 8000U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB28;

LAB29:
LAB20:    xsi_set_current_line(1261, ng6);
    t2 = (t0 + 8184U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)2);
    if (t3 != 0)
        goto LAB30;

LAB32:    t2 = (t0 + 7540U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB33;

LAB34:    xsi_set_current_line(1268, ng6);
    t2 = (t0 + 6528U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 26548);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_fast(t2);

LAB31:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1244, ng6);
    t4 = (t0 + 26476);
    t13 = (t4 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(1245, ng6);
    t2 = (t0 + 26512);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1246, ng6);
    t2 = (t0 + 26548);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_set_current_line(1250, ng6);
    t2 = (t0 + 26476);
    t8 = (t2 + 32U);
    t10 = *((char **)t8);
    t13 = (t10 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB12;

LAB14:    t2 = (t0 + 7632U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t9 = (t7 == (unsigned char)3);
    t1 = t9;
    goto LAB16;

LAB17:    xsi_set_current_line(1252, ng6);
    t2 = (t0 + 26476);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB12;

LAB19:    xsi_set_current_line(1257, ng6);
    t2 = (t0 + 26512);
    t10 = (t2 + 32U);
    t13 = *((char **)t10);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB20;

LAB22:    t2 = (t0 + 7632U);
    t8 = *((char **)t2);
    t12 = *((unsigned char *)t8);
    t17 = (t12 == (unsigned char)2);
    t1 = t17;
    goto LAB24;

LAB25:    t2 = (t0 + 7724U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t11 = (t9 == (unsigned char)3);
    t3 = t11;
    goto LAB27;

LAB28:    xsi_set_current_line(1259, ng6);
    t2 = (t0 + 26512);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB20;

LAB30:    xsi_set_current_line(1264, ng6);
    t2 = (t0 + 7632U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t2 = (t0 + 26548);
    t8 = (t2 + 32U);
    t10 = *((char **)t8);
    t13 = (t10 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t6;
    xsi_driver_first_trans_fast(t2);
    goto LAB31;

LAB33:    xsi_set_current_line(1266, ng6);
    t2 = (t0 + 26548);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB31;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_29(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(1274, ng6);

LAB3:    t1 = (t0 + 2112U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 26584);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 24360);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_30(char *t0)
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

LAB0:    xsi_set_current_line(1285, ng6);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 24368);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1286, ng6);
    t4 = (t0 + 824U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 13996U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t9 == t11);
    if (t12 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 8460U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)2);
    if (t3 != 0)
        goto LAB11;

LAB12:    t2 = (t0 + 8460U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t1 = (unsigned char)0;

LAB17:    if (t1 != 0)
        goto LAB13;

LAB14:    xsi_set_current_line(1293, ng6);
    t2 = (t0 + 12048U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 26620);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1287, ng6);
    t4 = (t0 + 26620);
    t13 = (t4 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(1289, ng6);
    t2 = (t0 + 26620);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    xsi_set_current_line(1291, ng6);
    t2 = (t0 + 26620);
    t8 = (t2 + 32U);
    t10 = *((char **)t8);
    t13 = (t10 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB15:    t2 = (t0 + 4228U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t9 = (t7 == (unsigned char)3);
    t1 = t9;
    goto LAB17;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_31(char *t0)
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

LAB0:    xsi_set_current_line(1306, ng6);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 24376);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1307, ng6);
    t4 = (t0 + 824U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 13996U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t9 == t11);
    if (t12 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(1314, ng6);
    t2 = (t0 + 4412U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 4228U);
    t5 = *((char **)t2);
    t3 = *((unsigned char *)t5);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t1, t6);
    t2 = (t0 + 26656);
    t8 = (t2 + 32U);
    t10 = *((char **)t8);
    t13 = (t10 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t7;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1315, ng6);
    t2 = (t0 + 4412U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t1);
    t2 = (t0 + 4228U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t6);
    t2 = (t0 + 26692);
    t8 = (t2 + 32U);
    t10 = *((char **)t8);
    t13 = (t10 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t7;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1316, ng6);
    t2 = (t0 + 4780U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 26728);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1317, ng6);
    t2 = (t0 + 4872U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 26764);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1318, ng6);
    t2 = (t0 + 4964U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 26800);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1308, ng6);
    t4 = (t0 + 26656);
    t13 = (t4 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(1309, ng6);
    t2 = (t0 + 26692);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1310, ng6);
    t2 = (t0 + 26728);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1311, ng6);
    t2 = (t0 + 26764);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1312, ng6);
    t2 = (t0 + 26800);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_32(char *t0)
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
    char *t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned int t16;
    char *t17;
    char *t18;
    unsigned char t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(1332, ng6);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 24384);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1333, ng6);
    t4 = (t0 + 26836);
    t8 = (t4 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(1334, ng6);
    t2 = (t0 + 26872);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(1335, ng6);
    t2 = (t0 + 26908);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(1337, ng6);
    t2 = (t0 + 5056U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t1 = (unsigned char)0;

LAB13:    if (t1 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(1341, ng6);
    t2 = (t0 + 3952U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)4);
    if (t3 != 0)
        goto LAB14;

LAB16:
LAB15:    xsi_set_current_line(1345, ng6);
    t2 = (t0 + 3952U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)4);
    if (t6 == 1)
        goto LAB20;

LAB21:    t2 = (t0 + 3952U);
    t5 = *((char **)t2);
    t12 = *((unsigned char *)t5);
    t13 = (t12 == (unsigned char)3);
    if (t13 == 1)
        goto LAB23;

LAB24:    t7 = (unsigned char)0;

LAB25:    t1 = t7;

LAB22:    if (t1 != 0)
        goto LAB17;

LAB19:
LAB18:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1338, ng6);
    t2 = (t0 + 26836);
    t8 = (t2 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB9;

LAB11:    t2 = (t0 + 3952U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t12 = (t7 == (unsigned char)2);
    t1 = t12;
    goto LAB13;

LAB14:    xsi_set_current_line(1342, ng6);
    t2 = (t0 + 26908);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB15;

LAB17:    xsi_set_current_line(1347, ng6);
    t22 = (t0 + 26872);
    t23 = (t22 + 32U);
    t24 = *((char **)t23);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    *((unsigned char *)t26) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t22);
    goto LAB18;

LAB20:    t1 = (unsigned char)1;
    goto LAB22;

LAB23:    t2 = (t0 + 8828U);
    t8 = *((char **)t2);
    t2 = (t0 + 14064U);
    t9 = *((char **)t2);
    t15 = 1;
    if (4U == 4U)
        goto LAB29;

LAB30:    t15 = 0;

LAB31:    if (t15 == 1)
        goto LAB26;

LAB27:    t11 = (t0 + 8828U);
    t17 = *((char **)t11);
    t11 = (t0 + 13792U);
    t18 = *((char **)t11);
    t19 = 1;
    if (4U == 4U)
        goto LAB35;

LAB36:    t19 = 0;

LAB37:    t14 = t19;

LAB28:    t7 = t14;
    goto LAB25;

LAB26:    t14 = (unsigned char)1;
    goto LAB28;

LAB29:    t16 = 0;

LAB32:    if (t16 < 4U)
        goto LAB33;
    else
        goto LAB31;

LAB33:    t2 = (t8 + t16);
    t10 = (t9 + t16);
    if (*((unsigned char *)t2) != *((unsigned char *)t10))
        goto LAB30;

LAB34:    t16 = (t16 + 1);
    goto LAB32;

LAB35:    t20 = 0;

LAB38:    if (t20 < 4U)
        goto LAB39;
    else
        goto LAB37;

LAB39:    t11 = (t17 + t20);
    t21 = (t18 + t20);
    if (*((unsigned char *)t11) != *((unsigned char *)t21))
        goto LAB36;

LAB40:    t20 = (t20 + 1);
    goto LAB38;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_33(char *t0)
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
    unsigned int t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(1362, ng6);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 24392);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1363, ng6);
    t4 = (t0 + 824U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 13996U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t9 == t11);
    if (t12 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 4780U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1364, ng6);
    t4 = (t0 + 26944);
    t13 = (t4 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(1366, ng6);
    t2 = (t0 + 8828U);
    t5 = *((char **)t2);
    t2 = (t0 + 56416);
    t6 = 1;
    if (4U == 4U)
        goto LAB16;

LAB17:    t6 = 0;

LAB18:    if (t6 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(1369, ng6);
    t2 = (t0 + 26944);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB14:    goto LAB9;

LAB13:    xsi_set_current_line(1367, ng6);
    t14 = (t0 + 26944);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t18 = (t16 + 40U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)3;
    xsi_driver_first_trans_fast(t14);
    goto LAB14;

LAB16:    t17 = 0;

LAB19:    if (t17 < 4U)
        goto LAB20;
    else
        goto LAB18;

LAB20:    t10 = (t5 + t17);
    t13 = (t2 + t17);
    if (*((unsigned char *)t10) != *((unsigned char *)t13))
        goto LAB17;

LAB21:    t17 = (t17 + 1);
    goto LAB19;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_34(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(1375, ng6);

LAB3:    t1 = (t0 + 10208U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 26980);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 24400);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_35(char *t0)
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

LAB0:    xsi_set_current_line(1382, ng6);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 24408);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1383, ng6);
    t4 = (t0 + 824U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 13996U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t9 == t11);
    if (t12 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(1387, ng6);
    t2 = (t0 + 10208U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 27016);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1388, ng6);
    t2 = (t0 + 10300U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 27052);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1384, ng6);
    t4 = (t0 + 27016);
    t13 = (t4 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(1385, ng6);
    t2 = (t0 + 27052);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_36(char *t0)
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

LAB0:    xsi_set_current_line(1403, ng6);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 24416);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1404, ng6);
    t4 = (t0 + 824U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 13996U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t9 == t11);
    if (t12 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 8000U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 7448U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t9 = (t7 == (unsigned char)2);
    t1 = t9;

LAB15:    if (t1 != 0)
        goto LAB11;

LAB12:    t2 = (t0 + 3952U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)2);
    if (t3 != 0)
        goto LAB16;

LAB17:    xsi_set_current_line(1412, ng6);
    t2 = (t0 + 9932U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 27088);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1405, ng6);
    t4 = (t0 + 27088);
    t13 = (t4 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(1407, ng6);
    t2 = (t0 + 27088);
    t8 = (t2 + 32U);
    t10 = *((char **)t8);
    t13 = (t10 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    t1 = (unsigned char)1;
    goto LAB15;

LAB16:    xsi_set_current_line(1409, ng6);
    t2 = (t0 + 7448U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t2 = (t0 + 27088);
    t8 = (t2 + 32U);
    t10 = *((char **)t8);
    t13 = (t10 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t6;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_37(char *t0)
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

LAB0:    xsi_set_current_line(1424, ng6);
    t1 = (t0 + 9932U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 11680U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 27124);
    t7 = (t1 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 24424);
    *((int *)t1) = 1;

LAB1:    return;
}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_38(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(1435, ng6);

LAB3:    t1 = (t0 + 8184U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 27160);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 24432);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_39(char *t0)
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
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    unsigned char t20;
    unsigned char t21;
    unsigned char t22;
    unsigned char t23;
    unsigned char t24;
    unsigned char t25;
    unsigned char t26;
    unsigned char t27;
    unsigned char t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    xsi_set_current_line(1462, ng6);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 24440);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1463, ng6);
    t4 = (t0 + 824U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 13996U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t9 == t11);
    if (t12 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 6528U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:    t2 = (t0 + 2112U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB31;

LAB32:    xsi_set_current_line(1477, ng6);
    t2 = (t0 + 27196);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1464, ng6);
    t4 = (t0 + 27196);
    t13 = (t4 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(1466, ng6);
    t2 = (t0 + 7540U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t11 = (t9 == (unsigned char)3);
    if (t11 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 8276U);
    t8 = *((char **)t2);
    t17 = *((unsigned char *)t8);
    t18 = (t17 == (unsigned char)3);
    if (t18 == 1)
        goto LAB22;

LAB23:    t12 = (unsigned char)0;

LAB24:    t7 = t12;

LAB21:    if (t7 == 1)
        goto LAB16;

LAB17:    t2 = (t0 + 8000U);
    t13 = *((char **)t2);
    t23 = *((unsigned char *)t13);
    t24 = (t23 == (unsigned char)3);
    if (t24 == 1)
        goto LAB28;

LAB29:    t22 = (unsigned char)0;

LAB30:    if (t22 == 1)
        goto LAB25;

LAB26:    t21 = (unsigned char)0;

LAB27:    t6 = t21;

LAB18:    if (t6 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(1471, ng6);
    t2 = (t0 + 27196);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB14:    goto LAB9;

LAB13:    xsi_set_current_line(1469, ng6);
    t2 = (t0 + 27196);
    t16 = (t2 + 32U);
    t29 = *((char **)t16);
    t30 = (t29 + 40U);
    t31 = *((char **)t30);
    *((unsigned char *)t31) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB14;

LAB16:    t6 = (unsigned char)1;
    goto LAB18;

LAB19:    t7 = (unsigned char)1;
    goto LAB21;

LAB22:    t2 = (t0 + 8368U);
    t10 = *((char **)t2);
    t19 = *((unsigned char *)t10);
    t20 = (t19 == (unsigned char)3);
    t12 = t20;
    goto LAB24;

LAB25:    t2 = (t0 + 8092U);
    t15 = *((char **)t2);
    t27 = *((unsigned char *)t15);
    t28 = (t27 == (unsigned char)2);
    t21 = t28;
    goto LAB27;

LAB28:    t2 = (t0 + 10576U);
    t14 = *((char **)t2);
    t25 = *((unsigned char *)t14);
    t26 = (t25 == (unsigned char)2);
    t22 = t26;
    goto LAB30;

LAB31:    xsi_set_current_line(1475, ng6);
    t2 = (t0 + 27196);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_40(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(1489, ng6);
    t1 = (t0 + 10484U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 27232);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 24448);
    *((int *)t1) = 1;

LAB1:    return;
}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_41(char *t0)
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
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    unsigned char t20;

LAB0:    xsi_set_current_line(1501, ng6);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 24456);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1502, ng6);
    t4 = (t0 + 824U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 13996U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t9 == t11);
    if (t12 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 8460U);
    t4 = *((char **)t2);
    t6 = *((unsigned char *)t4);
    t7 = (t6 == (unsigned char)3);
    if (t7 == 1)
        goto LAB16;

LAB17:    t3 = (unsigned char)0;

LAB18:    if (t3 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 8092U);
    t8 = *((char **)t2);
    t17 = *((unsigned char *)t8);
    t18 = (t17 == (unsigned char)3);
    if (t18 == 1)
        goto LAB19;

LAB20:    t12 = (unsigned char)0;

LAB21:    t1 = t12;

LAB15:    if (t1 != 0)
        goto LAB11;

LAB12:    t2 = (t0 + 7908U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB22;

LAB23:    xsi_set_current_line(1510, ng6);
    t2 = (t0 + 10576U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 27268);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1503, ng6);
    t4 = (t0 + 27268);
    t13 = (t4 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(1506, ng6);
    t2 = (t0 + 27268);
    t13 = (t2 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    t1 = (unsigned char)1;
    goto LAB15;

LAB16:    t2 = (t0 + 7908U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t11 = (t9 == (unsigned char)2);
    t3 = t11;
    goto LAB18;

LAB19:    t2 = (t0 + 7908U);
    t10 = *((char **)t2);
    t19 = *((unsigned char *)t10);
    t20 = (t19 == (unsigned char)2);
    t12 = t20;
    goto LAB21;

LAB22:    xsi_set_current_line(1508, ng6);
    t2 = (t0 + 27268);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_42(char *t0)
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
    int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;

LAB0:    xsi_set_current_line(1527, ng6);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 24464);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1528, ng6);
    t4 = (t0 + 824U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 13996U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t9 == t11);
    if (t12 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 3952U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)2);
    if (t3 != 0)
        goto LAB11;

LAB12:    xsi_set_current_line(1533, ng6);
    t2 = (t0 + 10024U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 27304);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1529, ng6);
    t4 = (t0 + 27304);
    t13 = (t4 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(1531, ng6);
    t2 = (t0 + 7080U);
    t5 = *((char **)t2);
    t17 = (0 - 7);
    t18 = (t17 * -1);
    t19 = (1U * t18);
    t20 = (0 + t19);
    t2 = (t5 + t20);
    t6 = *((unsigned char *)t2);
    t8 = (t0 + 27304);
    t10 = (t8 + 32U);
    t13 = *((char **)t10);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t6;
    xsi_driver_first_trans_fast(t8);
    goto LAB9;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_43(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(1538, ng6);

LAB3:    t1 = (t0 + 10024U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 27340);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 24472);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_44(char *t0)
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
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;

LAB0:    xsi_set_current_line(1549, ng6);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 24480);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1550, ng6);
    t4 = (t0 + 824U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 13996U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t9 == t11);
    if (t12 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 4780U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1551, ng6);
    t4 = (t0 + 27376);
    t13 = (t4 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(1553, ng6);
    t2 = (t0 + 3952U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t11 = (t9 == (unsigned char)2);
    if (t11 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 3952U);
    t8 = *((char **)t2);
    t12 = *((unsigned char *)t8);
    t17 = (t12 == (unsigned char)4);
    t7 = t17;

LAB21:    if (t7 == 1)
        goto LAB16;

LAB17:    t2 = (t0 + 3952U);
    t10 = *((char **)t2);
    t18 = *((unsigned char *)t10);
    t19 = (t18 == (unsigned char)6);
    t6 = t19;

LAB18:    if (t6 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB9;

LAB13:    xsi_set_current_line(1554, ng6);
    t2 = (t0 + 6160U);
    t13 = *((char **)t2);
    t20 = *((unsigned char *)t13);
    t2 = (t0 + 27376);
    t14 = (t2 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t21 = *((char **)t16);
    *((unsigned char *)t21) = t20;
    xsi_driver_first_trans_fast(t2);
    goto LAB14;

LAB16:    t6 = (unsigned char)1;
    goto LAB18;

LAB19:    t7 = (unsigned char)1;
    goto LAB21;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_45(char *t0)
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
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;

LAB0:    xsi_set_current_line(1567, ng6);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 24488);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1568, ng6);
    t4 = (t0 + 824U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 13996U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t9 == t11);
    if (t12 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 4780U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:    t2 = (t0 + 4964U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB22;

LAB23:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1569, ng6);
    t4 = (t0 + 27412);
    t13 = (t4 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(1571, ng6);
    t2 = (t0 + 3952U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t11 = (t9 == (unsigned char)2);
    if (t11 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 3952U);
    t8 = *((char **)t2);
    t12 = *((unsigned char *)t8);
    t17 = (t12 == (unsigned char)4);
    t7 = t17;

LAB21:    if (t7 == 1)
        goto LAB16;

LAB17:    t2 = (t0 + 3952U);
    t10 = *((char **)t2);
    t18 = *((unsigned char *)t10);
    t19 = (t18 == (unsigned char)6);
    t6 = t19;

LAB18:    if (t6 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB9;

LAB13:    xsi_set_current_line(1572, ng6);
    t2 = (t0 + 6160U);
    t13 = *((char **)t2);
    t20 = *((unsigned char *)t13);
    t2 = (t0 + 27412);
    t14 = (t2 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t21 = *((char **)t16);
    *((unsigned char *)t21) = t20;
    xsi_driver_first_trans_fast(t2);
    goto LAB14;

LAB16:    t6 = (unsigned char)1;
    goto LAB18;

LAB19:    t7 = (unsigned char)1;
    goto LAB21;

LAB22:    xsi_set_current_line(1575, ng6);
    t2 = (t0 + 27412);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_46(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(1580, ng6);

LAB3:    t1 = (t0 + 11220U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 27448);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 24496);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_47(char *t0)
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
    unsigned char t19;
    unsigned char t20;
    unsigned char t21;
    unsigned char t22;

LAB0:    xsi_set_current_line(1590, ng6);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 24504);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1591, ng6);
    t4 = (t0 + 824U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 13996U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t9 == t11);
    if (t12 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 3952U);
    t4 = *((char **)t2);
    t7 = *((unsigned char *)t4);
    t9 = (t7 == (unsigned char)4);
    if (t9 == 1)
        goto LAB19;

LAB20:    t6 = (unsigned char)0;

LAB21:    if (t6 == 1)
        goto LAB16;

LAB17:    t3 = (unsigned char)0;

LAB18:    if (t3 == 1)
        goto LAB13;

LAB14:    t1 = (unsigned char)0;

LAB15:    if (t1 != 0)
        goto LAB11;

LAB12:    xsi_set_current_line(1599, ng6);
    t2 = (t0 + 9840U);
    t4 = *((char **)t2);
    t2 = (t0 + 27484);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t13 = *((char **)t10);
    memcpy(t13, t4, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1600, ng6);
    t2 = (t0 + 27520);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1592, ng6);
    t4 = xsi_get_transient_memory(8U);
    memset(t4, 0, 8U);
    t13 = t4;
    memset(t13, (unsigned char)2, 8U);
    t14 = (t0 + 27484);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memcpy(t18, t4, 8U);
    xsi_driver_first_trans_fast(t14);
    xsi_set_current_line(1593, ng6);
    t2 = (t0 + 27520);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_set_current_line(1596, ng6);
    t2 = (t0 + 6620U);
    t13 = *((char **)t2);
    t2 = (t0 + 27484);
    t14 = (t2 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t13, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1597, ng6);
    t2 = (t0 + 27520);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    t2 = (t0 + 11772U);
    t10 = *((char **)t2);
    t21 = *((unsigned char *)t10);
    t22 = (t21 == (unsigned char)2);
    t1 = t22;
    goto LAB15;

LAB16:    t2 = (t0 + 4780U);
    t8 = *((char **)t2);
    t19 = *((unsigned char *)t8);
    t20 = (t19 == (unsigned char)3);
    t3 = t20;
    goto LAB18;

LAB19:    t2 = (t0 + 1652U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)2);
    t6 = t12;
    goto LAB21;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_48(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(1612, ng6);
    t1 = (t0 + 11864U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 27556);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 24512);
    *((int *)t1) = 1;

LAB1:    return;
}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_49(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(1615, ng6);

LAB3:    t1 = (t0 + 9840U);
    t2 = *((char **)t1);
    t1 = (t0 + 27592);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 24520);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_50(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned char t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned char t18;
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

LAB0:    xsi_set_current_line(1626, ng6);
    t2 = (t0 + 7080U);
    t3 = *((char **)t2);
    t4 = (7 - 7);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t2 = (t3 + t6);
    t7 = (t0 + 2480U);
    t8 = *((char **)t7);
    t9 = (7 - 7);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t7 = (t8 + t11);
    t12 = 1;
    if (7U == 7U)
        goto LAB8;

LAB9:    t12 = 0;

LAB10:    if (t12 == 1)
        goto LAB5;

LAB6:    t16 = (t0 + 10116U);
    t17 = *((char **)t16);
    t18 = *((unsigned char *)t17);
    t19 = (t18 == (unsigned char)3);
    t1 = t19;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB14:    t24 = (t0 + 27628);
    t25 = (t24 + 32U);
    t26 = *((char **)t25);
    t27 = (t26 + 40U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = (unsigned char)2;
    xsi_driver_first_trans_fast(t24);

LAB2:    t29 = (t0 + 24528);
    *((int *)t29) = 1;

LAB1:    return;
LAB3:    t16 = (t0 + 27628);
    t20 = (t16 + 32U);
    t21 = *((char **)t20);
    t22 = (t21 + 40U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = (unsigned char)3;
    xsi_driver_first_trans_fast(t16);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t13 = 0;

LAB11:    if (t13 < 7U)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t14 = (t2 + t13);
    t15 = (t7 + t13);
    if (*((unsigned char *)t14) != *((unsigned char *)t15))
        goto LAB9;

LAB13:    t13 = (t13 + 1);
    goto LAB11;

LAB15:    goto LAB2;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_51(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1631, ng6);

LAB3:    t1 = (t0 + 27664);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_52(char *t0)
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
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(1777, ng6);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 24536);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1778, ng6);
    t4 = (t0 + 824U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 13996U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t9 == t11);
    if (t12 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 8000U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 7908U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t9 = (t7 == (unsigned char)3);
    t1 = t9;

LAB15:    if (t1 != 0)
        goto LAB11;

LAB12:    t2 = (t0 + 7080U);
    t4 = *((char **)t2);
    t17 = (7 - 7);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t2 = (t4 + t19);
    t5 = (t0 + 56420);
    t6 = 1;
    if (8U == 8U)
        goto LAB24;

LAB25:    t6 = 0;

LAB26:    if (t6 == 1)
        goto LAB21;

LAB22:    t3 = (unsigned char)0;

LAB23:    if (t3 == 1)
        goto LAB18;

LAB19:    t1 = (unsigned char)0;

LAB20:    if (t1 != 0)
        goto LAB16;

LAB17:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1779, ng6);
    t4 = (t0 + 27700);
    t13 = (t4 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(1781, ng6);
    t2 = (t0 + 27700);
    t8 = (t2 + 32U);
    t10 = *((char **)t8);
    t13 = (t10 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    t1 = (unsigned char)1;
    goto LAB15;

LAB16:    xsi_set_current_line(1784, ng6);
    t14 = (t0 + 27700);
    t21 = (t14 + 32U);
    t22 = *((char **)t21);
    t23 = (t22 + 40U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)3;
    xsi_driver_first_trans_fast(t14);
    goto LAB9;

LAB18:    t14 = (t0 + 3952U);
    t16 = *((char **)t14);
    t11 = *((unsigned char *)t16);
    t12 = (t11 == (unsigned char)2);
    t1 = t12;
    goto LAB20;

LAB21:    t14 = (t0 + 1560U);
    t15 = *((char **)t14);
    t7 = *((unsigned char *)t15);
    t9 = (t7 == (unsigned char)3);
    t3 = t9;
    goto LAB23;

LAB24:    t20 = 0;

LAB27:    if (t20 < 8U)
        goto LAB28;
    else
        goto LAB26;

LAB28:    t10 = (t2 + t20);
    t13 = (t5 + t20);
    if (*((unsigned char *)t10) != *((unsigned char *)t13))
        goto LAB25;

LAB29:    t20 = (t20 + 1);
    goto LAB27;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_53(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(1789, ng6);

LAB3:    t1 = (t0 + 10116U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 27736);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 24544);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_54(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(1800, ng6);
    t1 = (t0 + 708U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 24552);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1801, ng6);
    t3 = (t0 + 4688U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(1802, ng6);
    t3 = (t0 + 5148U);
    t7 = *((char **)t3);
    t8 = *((unsigned char *)t7);
    t3 = (t0 + 27772);
    t9 = (t3 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t8;
    xsi_driver_first_trans_fast(t3);
    goto LAB6;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_55(char *t0)
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
    char *t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned char t21;
    char *t22;
    unsigned int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    static char *nl0[] = {&&LAB23, &&LAB24, &&LAB25, &&LAB26, &&LAB28, &&LAB27, &&LAB29};

LAB0:    xsi_set_current_line(1820, ng6);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 24560);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1821, ng6);
    t4 = (t0 + 824U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t4 = (t0 + 13996U);
    t11 = *((char **)t4);
    t12 = *((unsigned char *)t11);
    t13 = (t10 == t12);
    if (t13 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 8000U);
    t14 = *((char **)t4);
    t15 = *((unsigned char *)t14);
    t16 = (t15 == (unsigned char)3);
    t8 = t16;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 4964U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB16;

LAB17:    t2 = (t0 + 1652U);
    t5 = *((char **)t2);
    t8 = *((unsigned char *)t5);
    t10 = (t8 == (unsigned char)2);
    if (t10 == 1)
        goto LAB19;

LAB20:    t7 = (unsigned char)0;

LAB21:    t1 = t7;

LAB18:    if (t1 != 0)
        goto LAB14;

LAB15:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1822, ng6);
    t4 = (t0 + 27808);
    t17 = (t4 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)0;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(1823, ng6);
    t2 = (t0 + 27844);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    t8 = (unsigned char)1;
    goto LAB13;

LAB14:    xsi_set_current_line(1827, ng6);
    t2 = (t0 + 3952U);
    t11 = *((char **)t2);
    t15 = *((unsigned char *)t11);
    t2 = (char *)((nl0) + t15);
    goto **((char **)t2);

LAB16:    t1 = (unsigned char)1;
    goto LAB18;

LAB19:    t2 = (t0 + 11956U);
    t9 = *((char **)t2);
    t12 = *((unsigned char *)t9);
    t13 = (t12 == (unsigned char)3);
    t7 = t13;
    goto LAB21;

LAB22:    goto LAB9;

LAB23:    xsi_set_current_line(1831, ng6);
    t14 = (t0 + 7908U);
    t17 = *((char **)t14);
    t16 = *((unsigned char *)t17);
    t21 = (t16 == (unsigned char)3);
    if (t21 != 0)
        goto LAB31;

LAB33:
LAB32:    goto LAB22;

LAB24:    xsi_set_current_line(1837, ng6);
    t2 = (t0 + 8828U);
    t4 = *((char **)t2);
    t2 = (t0 + 13792U);
    t5 = *((char **)t2);
    t1 = 1;
    if (4U == 4U)
        goto LAB37;

LAB38:    t1 = 0;

LAB39:    if (t1 != 0)
        goto LAB34;

LAB36:
LAB35:    goto LAB22;

LAB25:    xsi_set_current_line(1843, ng6);
    t2 = (t0 + 7540U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB43;

LAB45:    t2 = (t0 + 6160U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)2);
    if (t3 != 0)
        goto LAB46;

LAB47:    xsi_set_current_line(1876, ng6);
    t2 = (t0 + 27808);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1877, ng6);
    t2 = (t0 + 6528U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB60;

LAB62:
LAB61:
LAB44:    goto LAB22;

LAB26:    xsi_set_current_line(1887, ng6);
    t2 = (t0 + 7908U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB63;

LAB65:    t2 = (t0 + 8828U);
    t4 = *((char **)t2);
    t2 = (t0 + 13792U);
    t5 = *((char **)t2);
    t1 = 1;
    if (4U == 4U)
        goto LAB68;

LAB69:    t1 = 0;

LAB70:    if (t1 != 0)
        goto LAB66;

LAB67:
LAB64:    goto LAB22;

LAB27:    xsi_set_current_line(1903, ng6);
    t2 = (t0 + 7908U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB80;

LAB82:    t2 = (t0 + 8828U);
    t4 = *((char **)t2);
    t2 = (t0 + 13792U);
    t5 = *((char **)t2);
    t1 = 1;
    if (4U == 4U)
        goto LAB85;

LAB86:    t1 = 0;

LAB87:    if (t1 != 0)
        goto LAB83;

LAB84:
LAB81:    goto LAB22;

LAB28:    xsi_set_current_line(1917, ng6);
    t2 = (t0 + 1652U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)2);
    if (t3 != 0)
        goto LAB91;

LAB93:    xsi_set_current_line(1920, ng6);
    t2 = (t0 + 27808);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = (unsigned char)4;
    xsi_driver_first_trans_fast(t2);

LAB92:    goto LAB22;

LAB29:    xsi_set_current_line(1926, ng6);
    t2 = (t0 + 7540U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB94;

LAB96:    t2 = (t0 + 6160U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)2);
    if (t3 != 0)
        goto LAB97;

LAB98:    xsi_set_current_line(1939, ng6);
    t2 = (t0 + 6528U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB99;

LAB101:
LAB100:    xsi_set_current_line(1942, ng6);
    t2 = (t0 + 27808);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);

LAB95:    goto LAB22;

LAB30:    xsi_set_current_line(1946, ng6);
    t2 = (t0 + 27808);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    goto LAB22;

LAB31:    xsi_set_current_line(1832, ng6);
    t14 = (t0 + 27808);
    t18 = (t14 + 32U);
    t19 = *((char **)t18);
    t20 = (t19 + 40U);
    t22 = *((char **)t20);
    *((unsigned char *)t22) = (unsigned char)1;
    xsi_driver_first_trans_fast(t14);
    goto LAB32;

LAB34:    xsi_set_current_line(1838, ng6);
    t11 = (t0 + 27808);
    t14 = (t11 + 32U);
    t17 = *((char **)t14);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast(t11);
    goto LAB35;

LAB37:    t23 = 0;

LAB40:    if (t23 < 4U)
        goto LAB41;
    else
        goto LAB39;

LAB41:    t2 = (t4 + t23);
    t9 = (t5 + t23);
    if (*((unsigned char *)t2) != *((unsigned char *)t9))
        goto LAB38;

LAB42:    t23 = (t23 + 1);
    goto LAB40;

LAB43:    xsi_set_current_line(1844, ng6);
    t2 = (t0 + 27808);
    t5 = (t2 + 32U);
    t9 = *((char **)t5);
    t11 = (t9 + 40U);
    t14 = *((char **)t11);
    *((unsigned char *)t14) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    goto LAB44;

LAB46:    xsi_set_current_line(1847, ng6);
    t2 = (t0 + 6528U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB48;

LAB50:    xsi_set_current_line(1857, ng6);
    t2 = (t0 + 7448U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB54;

LAB56:    xsi_set_current_line(1870, ng6);
    t2 = (t0 + 27808);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);

LAB55:
LAB49:    goto LAB44;

LAB48:    xsi_set_current_line(1849, ng6);
    t2 = (t0 + 2296U);
    t9 = *((char **)t2);
    t8 = *((unsigned char *)t9);
    t10 = (t8 == (unsigned char)2);
    if (t10 != 0)
        goto LAB51;

LAB53:    xsi_set_current_line(1854, ng6);
    t2 = (t0 + 27808);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = (unsigned char)5;
    xsi_driver_first_trans_fast(t2);

LAB52:    goto LAB49;

LAB51:    xsi_set_current_line(1851, ng6);
    t2 = (t0 + 27808);
    t11 = (t2 + 32U);
    t14 = *((char **)t11);
    t17 = (t14 + 40U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB52;

LAB54:    xsi_set_current_line(1861, ng6);
    t2 = (t0 + 7080U);
    t5 = *((char **)t2);
    t24 = (0 - 7);
    t23 = (t24 * -1);
    t25 = (1U * t23);
    t26 = (0 + t25);
    t2 = (t5 + t26);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)2);
    if (t7 != 0)
        goto LAB57;

LAB59:    xsi_set_current_line(1866, ng6);
    t2 = (t0 + 27808);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = (unsigned char)5;
    xsi_driver_first_trans_fast(t2);

LAB58:    goto LAB55;

LAB57:    xsi_set_current_line(1863, ng6);
    t9 = (t0 + 27808);
    t11 = (t9 + 32U);
    t14 = *((char **)t11);
    t17 = (t14 + 40U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)3;
    xsi_driver_first_trans_fast(t9);
    goto LAB58;

LAB60:    xsi_set_current_line(1878, ng6);
    t2 = (t0 + 27844);
    t5 = (t2 + 32U);
    t9 = *((char **)t5);
    t11 = (t9 + 40U);
    t14 = *((char **)t11);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB61;

LAB63:    xsi_set_current_line(1888, ng6);
    t2 = (t0 + 27808);
    t5 = (t2 + 32U);
    t9 = *((char **)t5);
    t11 = (t9 + 40U);
    t14 = *((char **)t11);
    *((unsigned char *)t14) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    goto LAB64;

LAB66:    xsi_set_current_line(1890, ng6);
    t11 = (t0 + 6528U);
    t14 = *((char **)t11);
    t6 = *((unsigned char *)t14);
    t7 = (t6 == (unsigned char)2);
    if (t7 == 1)
        goto LAB77;

LAB78:    t3 = (unsigned char)0;

LAB79:    if (t3 != 0)
        goto LAB74;

LAB76:    xsi_set_current_line(1894, ng6);
    t2 = (t0 + 27808);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t9 = (t5 + 40U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = (unsigned char)4;
    xsi_driver_first_trans_fast(t2);

LAB75:    goto LAB64;

LAB68:    t23 = 0;

LAB71:    if (t23 < 4U)
        goto LAB72;
    else
        goto LAB70;

LAB72:    t2 = (t4 + t23);
    t9 = (t5 + t23);
    if (*((unsigned char *)t2) != *((unsigned char *)t9))
        goto LAB69;

LAB73:    t23 = (t23 + 1);
    goto LAB71;

LAB74:    xsi_set_current_line(1891, ng6);
    t11 = (t0 + 27808);
    t18 = (t11 + 32U);
    t19 = *((char **)t18);
    t20 = (t19 + 40U);
    t22 = *((char **)t20);
    *((unsigned char *)t22) = (unsigned char)0;
    xsi_driver_first_trans_fast(t11);
    goto LAB75;

LAB77:    t11 = (t0 + 7448U);
    t17 = *((char **)t11);
    t8 = *((unsigned char *)t17);
    t10 = (t8 == (unsigned char)2);
    t3 = t10;
    goto LAB79;

LAB80:    xsi_set_current_line(1904, ng6);
    t2 = (t0 + 27808);
    t5 = (t2 + 32U);
    t9 = *((char **)t5);
    t11 = (t9 + 40U);
    t14 = *((char **)t11);
    *((unsigned char *)t14) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    goto LAB81;

LAB83:    xsi_set_current_line(1909, ng6);
    t11 = (t0 + 27808);
    t14 = (t11 + 32U);
    t17 = *((char **)t14);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)6;
    xsi_driver_first_trans_fast(t11);
    goto LAB81;

LAB85:    t23 = 0;

LAB88:    if (t23 < 4U)
        goto LAB89;
    else
        goto LAB87;

LAB89:    t2 = (t4 + t23);
    t9 = (t5 + t23);
    if (*((unsigned char *)t2) != *((unsigned char *)t9))
        goto LAB86;

LAB90:    t23 = (t23 + 1);
    goto LAB88;

LAB91:    xsi_set_current_line(1918, ng6);
    t2 = (t0 + 27808);
    t5 = (t2 + 32U);
    t9 = *((char **)t5);
    t11 = (t9 + 40U);
    t14 = *((char **)t11);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB92;

LAB94:    xsi_set_current_line(1927, ng6);
    t2 = (t0 + 27808);
    t5 = (t2 + 32U);
    t9 = *((char **)t5);
    t11 = (t9 + 40U);
    t14 = *((char **)t11);
    *((unsigned char *)t14) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    goto LAB95;

LAB97:    xsi_set_current_line(1929, ng6);
    t2 = (t0 + 27808);
    t5 = (t2 + 32U);
    t9 = *((char **)t5);
    t11 = (t9 + 40U);
    t14 = *((char **)t11);
    *((unsigned char *)t14) = (unsigned char)5;
    xsi_driver_first_trans_fast(t2);
    goto LAB95;

LAB99:    xsi_set_current_line(1940, ng6);
    t2 = (t0 + 27844);
    t5 = (t2 + 32U);
    t9 = *((char **)t5);
    t11 = (t9 + 40U);
    t14 = *((char **)t11);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB100;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_56(char *t0)
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

LAB0:    xsi_set_current_line(1959, ng6);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 24568);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1960, ng6);
    t4 = (t0 + 824U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 13996U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t9 == t11);
    if (t12 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 3952U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)1);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 3952U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t9 = (t7 == (unsigned char)5);
    t1 = t9;

LAB15:    if (t1 != 0)
        goto LAB11;

LAB12:    t2 = (t0 + 3952U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)4);
    if (t3 != 0)
        goto LAB16;

LAB17:    xsi_set_current_line(1967, ng6);
    t2 = (t0 + 27880);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1961, ng6);
    t4 = (t0 + 27880);
    t13 = (t4 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(1963, ng6);
    t2 = (t0 + 6712U);
    t8 = *((char **)t2);
    t11 = *((unsigned char *)t8);
    t2 = (t0 + 27880);
    t10 = (t2 + 32U);
    t13 = *((char **)t10);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t11;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    t1 = (unsigned char)1;
    goto LAB15;

LAB16:    xsi_set_current_line(1965, ng6);
    t2 = (t0 + 1468U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t2 = (t0 + 27880);
    t8 = (t2 + 32U);
    t10 = *((char **)t8);
    t13 = (t10 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t6;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_57(char *t0)
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
    unsigned char t17;
    unsigned char t18;

LAB0:    xsi_set_current_line(1981, ng6);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 24576);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1982, ng6);
    t4 = (t0 + 824U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 13996U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t9 == t11);
    if (t12 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 7448U);
    t4 = *((char **)t2);
    t6 = *((unsigned char *)t4);
    t7 = (t6 == (unsigned char)3);
    if (t7 == 1)
        goto LAB16;

LAB17:    t3 = (unsigned char)0;

LAB18:    if (t3 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 3952U);
    t8 = *((char **)t2);
    t12 = *((unsigned char *)t8);
    t17 = (t12 == (unsigned char)4);
    t1 = t17;

LAB15:    if (t1 != 0)
        goto LAB11;

LAB12:    t2 = (t0 + 3952U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)5);
    if (t3 != 0)
        goto LAB19;

LAB20:    xsi_set_current_line(1990, ng6);
    t2 = (t0 + 27916);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1983, ng6);
    t4 = (t0 + 27916);
    t13 = (t4 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(1986, ng6);
    t2 = (t0 + 1468U);
    t10 = *((char **)t2);
    t18 = *((unsigned char *)t10);
    t2 = (t0 + 27916);
    t13 = (t2 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t18;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    t1 = (unsigned char)1;
    goto LAB15;

LAB16:    t2 = (t0 + 3952U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t11 = (t9 == (unsigned char)2);
    t3 = t11;
    goto LAB18;

LAB19:    xsi_set_current_line(1988, ng6);
    t2 = (t0 + 6712U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t2 = (t0 + 27916);
    t8 = (t2 + 32U);
    t10 = *((char **)t8);
    t13 = (t10 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t6;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_58(char *t0)
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
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    unsigned char t20;
    unsigned char t21;
    unsigned char t22;
    unsigned char t23;
    unsigned char t24;
    unsigned char t25;
    unsigned char t26;
    unsigned char t27;
    unsigned char t28;
    unsigned char t29;
    unsigned char t30;
    unsigned char t31;
    unsigned char t32;
    unsigned char t33;
    char *t34;
    unsigned char t35;
    unsigned char t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;

LAB0:    xsi_set_current_line(2015, ng6);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 24584);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(2016, ng6);
    t4 = (t0 + 824U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 13996U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t9 == t11);
    if (t12 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 6528U);
    t4 = *((char **)t2);
    t9 = *((unsigned char *)t4);
    t11 = (t9 == (unsigned char)3);
    if (t11 == 1)
        goto LAB22;

LAB23:    t7 = (unsigned char)0;

LAB24:    if (t7 == 1)
        goto LAB19;

LAB20:    t6 = (unsigned char)0;

LAB21:    if (t6 == 1)
        goto LAB16;

LAB17:    t2 = (t0 + 3952U);
    t10 = *((char **)t2);
    t22 = *((unsigned char *)t10);
    t23 = (t22 == (unsigned char)3);
    if (t23 == 1)
        goto LAB28;

LAB29:    t21 = (unsigned char)0;

LAB30:    if (t21 == 1)
        goto LAB25;

LAB26:    t20 = (unsigned char)0;

LAB27:    t3 = t20;

LAB18:    if (t3 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 3952U);
    t15 = *((char **)t2);
    t30 = *((unsigned char *)t15);
    t31 = (t30 == (unsigned char)5);
    if (t31 == 1)
        goto LAB34;

LAB35:    t29 = (unsigned char)0;

LAB36:    if (t29 == 1)
        goto LAB31;

LAB32:    t28 = (unsigned char)0;

LAB33:    t1 = t28;

LAB15:    if (t1 != 0)
        goto LAB11;

LAB12:    xsi_set_current_line(2030, ng6);
    t2 = (t0 + 27952);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(2017, ng6);
    t4 = (t0 + 27952);
    t13 = (t4 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(2028, ng6);
    t2 = (t0 + 27952);
    t37 = (t2 + 32U);
    t38 = *((char **)t37);
    t39 = (t38 + 40U);
    t40 = *((char **)t39);
    *((unsigned char *)t40) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    t1 = (unsigned char)1;
    goto LAB15;

LAB16:    t3 = (unsigned char)1;
    goto LAB18;

LAB19:    t2 = (t0 + 4688U);
    t8 = *((char **)t2);
    t18 = *((unsigned char *)t8);
    t19 = (t18 == (unsigned char)3);
    t6 = t19;
    goto LAB21;

LAB22:    t2 = (t0 + 3952U);
    t5 = *((char **)t2);
    t12 = *((unsigned char *)t5);
    t17 = (t12 == (unsigned char)1);
    t7 = t17;
    goto LAB24;

LAB25:    t2 = (t0 + 7908U);
    t14 = *((char **)t2);
    t26 = *((unsigned char *)t14);
    t27 = (t26 == (unsigned char)2);
    t20 = t27;
    goto LAB27;

LAB28:    t2 = (t0 + 4688U);
    t13 = *((char **)t2);
    t24 = *((unsigned char *)t13);
    t25 = (t24 == (unsigned char)3);
    t21 = t25;
    goto LAB30;

LAB31:    t2 = (t0 + 7908U);
    t34 = *((char **)t2);
    t35 = *((unsigned char *)t34);
    t36 = (t35 == (unsigned char)2);
    t28 = t36;
    goto LAB33;

LAB34:    t2 = (t0 + 4964U);
    t16 = *((char **)t2);
    t32 = *((unsigned char *)t16);
    t33 = (t32 == (unsigned char)3);
    t29 = t33;
    goto LAB36;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_59(char *t0)
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
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    unsigned char t20;
    unsigned char t21;
    unsigned char t22;
    unsigned char t23;
    unsigned char t24;
    unsigned char t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned char t30;
    unsigned char t31;
    unsigned char t32;
    unsigned char t33;
    unsigned char t34;
    unsigned char t35;
    unsigned char t36;
    unsigned char t37;
    char *t38;
    unsigned char t39;
    unsigned char t40;
    char *t41;
    unsigned char t42;
    unsigned char t43;
    unsigned char t44;
    char *t45;
    unsigned char t46;
    unsigned char t47;
    char *t48;
    unsigned char t49;
    unsigned char t50;
    char *t51;
    unsigned char t52;
    unsigned char t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;

LAB0:    xsi_set_current_line(2040, ng6);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 24592);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(2041, ng6);
    t4 = (t0 + 824U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 13996U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t9 == t11);
    if (t12 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 6528U);
    t4 = *((char **)t2);
    t12 = *((unsigned char *)t4);
    t17 = (t12 == (unsigned char)3);
    if (t17 == 1)
        goto LAB28;

LAB29:    t11 = (unsigned char)0;

LAB30:    if (t11 == 1)
        goto LAB25;

LAB26:    t2 = (t0 + 3952U);
    t8 = *((char **)t2);
    t20 = *((unsigned char *)t8);
    t21 = (t20 == (unsigned char)6);
    t9 = t21;

LAB27:    if (t9 == 1)
        goto LAB22;

LAB23:    t2 = (t0 + 3952U);
    t10 = *((char **)t2);
    t24 = *((unsigned char *)t10);
    t25 = (t24 == (unsigned char)2);
    if (t25 == 1)
        goto LAB34;

LAB35:    t23 = (unsigned char)0;

LAB36:    if (t23 == 1)
        goto LAB31;

LAB32:    t22 = (unsigned char)0;

LAB33:    t7 = t22;

LAB24:    if (t7 == 1)
        goto LAB19;

LAB20:    t14 = (t0 + 3952U);
    t16 = *((char **)t14);
    t36 = *((unsigned char *)t16);
    t37 = (t36 == (unsigned char)2);
    if (t37 == 1)
        goto LAB40;

LAB41:    t35 = (unsigned char)0;

LAB42:    if (t35 == 1)
        goto LAB37;

LAB38:    t34 = (unsigned char)0;

LAB39:    t6 = t34;

LAB21:    if (t6 == 1)
        goto LAB16;

LAB17:    t14 = (t0 + 3952U);
    t45 = *((char **)t14);
    t46 = *((unsigned char *)t45);
    t47 = (t46 == (unsigned char)3);
    if (t47 == 1)
        goto LAB43;

LAB44:    t44 = (unsigned char)0;

LAB45:    t3 = t44;

LAB18:    if (t3 == 1)
        goto LAB13;

LAB14:    t14 = (t0 + 10760U);
    t51 = *((char **)t14);
    t52 = *((unsigned char *)t51);
    t53 = (t52 == (unsigned char)3);
    t1 = t53;

LAB15:    if (t1 != 0)
        goto LAB11;

LAB12:    xsi_set_current_line(2056, ng6);
    t2 = (t0 + 27988);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(2042, ng6);
    t4 = (t0 + 27988);
    t13 = (t4 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(2054, ng6);
    t14 = (t0 + 27988);
    t54 = (t14 + 32U);
    t55 = *((char **)t54);
    t56 = (t55 + 40U);
    t57 = *((char **)t56);
    *((unsigned char *)t57) = (unsigned char)3;
    xsi_driver_first_trans_fast(t14);
    goto LAB9;

LAB13:    t1 = (unsigned char)1;
    goto LAB15;

LAB16:    t3 = (unsigned char)1;
    goto LAB18;

LAB19:    t6 = (unsigned char)1;
    goto LAB21;

LAB22:    t7 = (unsigned char)1;
    goto LAB24;

LAB25:    t9 = (unsigned char)1;
    goto LAB27;

LAB28:    t2 = (t0 + 3952U);
    t5 = *((char **)t2);
    t18 = *((unsigned char *)t5);
    t19 = (t18 == (unsigned char)0);
    t11 = t19;
    goto LAB30;

LAB31:    t14 = (t0 + 6528U);
    t15 = *((char **)t14);
    t32 = *((unsigned char *)t15);
    t33 = (t32 == (unsigned char)2);
    t22 = t33;
    goto LAB33;

LAB34:    t2 = (t0 + 7080U);
    t13 = *((char **)t2);
    t26 = (0 - 7);
    t27 = (t26 * -1);
    t28 = (1U * t27);
    t29 = (0 + t28);
    t2 = (t13 + t29);
    t30 = *((unsigned char *)t2);
    t31 = (t30 == (unsigned char)3);
    t23 = t31;
    goto LAB36;

LAB37:    t14 = (t0 + 6528U);
    t41 = *((char **)t14);
    t42 = *((unsigned char *)t41);
    t43 = (t42 == (unsigned char)3);
    t34 = t43;
    goto LAB39;

LAB40:    t14 = (t0 + 2296U);
    t38 = *((char **)t14);
    t39 = *((unsigned char *)t38);
    t40 = (t39 == (unsigned char)3);
    t35 = t40;
    goto LAB42;

LAB43:    t14 = (t0 + 7908U);
    t48 = *((char **)t14);
    t49 = *((unsigned char *)t48);
    t50 = (t49 == (unsigned char)3);
    t44 = t50;
    goto LAB45;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_60(char *t0)
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
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    unsigned char t20;
    unsigned char t21;
    char *t22;

LAB0:    xsi_set_current_line(2070, ng6);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 24600);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(2071, ng6);
    t4 = (t0 + 824U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 13996U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t9 == t11);
    if (t12 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(2074, ng6);
    t2 = (t0 + 6896U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 28024);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t10 = (t8 + 40U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_fast(t2);

LAB9:    xsi_set_current_line(2076, ng6);
    t2 = (t0 + 824U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 13996U);
    t5 = *((char **)t2);
    t3 = *((unsigned char *)t5);
    t6 = (t1 == t3);
    if (t6 != 0)
        goto LAB11;

LAB13:    t2 = (t0 + 3952U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)5);
    if (t6 == 1)
        goto LAB16;

LAB17:    t2 = (t0 + 3952U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t11 = (t9 == (unsigned char)1);
    if (t11 == 1)
        goto LAB19;

LAB20:    t7 = (unsigned char)0;

LAB21:    t1 = t7;

LAB18:    if (t1 != 0)
        goto LAB14;

LAB15:
LAB12:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(2072, ng6);
    t4 = (t0 + 28024);
    t13 = (t4 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(2077, ng6);
    t2 = (t0 + 28060);
    t8 = (t2 + 32U);
    t10 = *((char **)t8);
    t13 = (t10 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB12;

LAB14:    xsi_set_current_line(2079, ng6);
    t2 = (t0 + 6896U);
    t10 = *((char **)t2);
    t18 = *((unsigned char *)t10);
    t19 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t18);
    t2 = (t0 + 6988U);
    t13 = *((char **)t2);
    t20 = *((unsigned char *)t13);
    t21 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t19, t20);
    t2 = (t0 + 28060);
    t14 = (t2 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t22 = *((char **)t16);
    *((unsigned char *)t22) = t21;
    xsi_driver_first_trans_fast(t2);
    goto LAB12;

LAB16:    t1 = (unsigned char)1;
    goto LAB18;

LAB19:    t2 = (t0 + 1836U);
    t8 = *((char **)t2);
    t12 = *((unsigned char *)t8);
    t17 = (t12 == (unsigned char)3);
    t7 = t17;
    goto LAB21;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_61(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(2084, ng6);

LAB3:    t1 = (t0 + 10668U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 28096);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 24608);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_62(char *t0)
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

LAB0:    xsi_set_current_line(2106, ng6);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 24616);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(2107, ng6);
    t4 = (t0 + 824U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 13996U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t9 == t11);
    if (t12 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 3952U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)1);
    if (t6 == 1)
        goto LAB13;

LAB14:    t1 = (unsigned char)0;

LAB15:    if (t1 != 0)
        goto LAB11;

LAB12:    xsi_set_current_line(2112, ng6);
    t2 = (t0 + 28132);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(2108, ng6);
    t4 = (t0 + 28132);
    t13 = (t4 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(2110, ng6);
    t2 = (t0 + 28132);
    t8 = (t2 + 32U);
    t10 = *((char **)t8);
    t13 = (t10 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    t2 = (t0 + 4688U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t9 = (t7 == (unsigned char)3);
    t1 = t9;
    goto LAB15;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_63(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(2117, ng6);

LAB3:    t1 = (t0 + 28168);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_64(char *t0)
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
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    unsigned char t20;
    unsigned char t21;
    unsigned char t22;
    unsigned char t23;
    unsigned char t24;
    unsigned char t25;
    unsigned char t26;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(2139, ng6);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 24624);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(2140, ng6);
    t4 = (t0 + 824U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 13996U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t9 == t11);
    if (t12 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 3952U);
    t4 = *((char **)t2);
    t7 = *((unsigned char *)t4);
    t9 = (t7 == (unsigned char)1);
    if (t9 == 1)
        goto LAB19;

LAB20:    t6 = (unsigned char)0;

LAB21:    if (t6 == 1)
        goto LAB16;

LAB17:    t2 = (t0 + 3952U);
    t8 = *((char **)t2);
    t18 = *((unsigned char *)t8);
    t19 = (t18 == (unsigned char)3);
    if (t19 == 1)
        goto LAB22;

LAB23:    t17 = (unsigned char)0;

LAB24:    t3 = t17;

LAB18:    if (t3 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 3952U);
    t13 = *((char **)t2);
    t23 = *((unsigned char *)t13);
    t24 = (t23 == (unsigned char)5);
    if (t24 == 1)
        goto LAB25;

LAB26:    t22 = (unsigned char)0;

LAB27:    t1 = t22;

LAB15:    if (t1 != 0)
        goto LAB11;

LAB12:    xsi_set_current_line(2147, ng6);
    t2 = (t0 + 28204);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(2141, ng6);
    t4 = (t0 + 28204);
    t13 = (t4 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(2145, ng6);
    t2 = (t0 + 28204);
    t15 = (t2 + 32U);
    t16 = *((char **)t15);
    t27 = (t16 + 40U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    t1 = (unsigned char)1;
    goto LAB15;

LAB16:    t3 = (unsigned char)1;
    goto LAB18;

LAB19:    t2 = (t0 + 4780U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t6 = t12;
    goto LAB21;

LAB22:    t2 = (t0 + 4780U);
    t10 = *((char **)t2);
    t20 = *((unsigned char *)t10);
    t21 = (t20 == (unsigned char)3);
    t17 = t21;
    goto LAB24;

LAB25:    t2 = (t0 + 4780U);
    t14 = *((char **)t2);
    t25 = *((unsigned char *)t14);
    t26 = (t25 == (unsigned char)3);
    t22 = t26;
    goto LAB27;

}

static void xps_iic_v2_03_a_a_4169363769_3306564128_p_65(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    unsigned char t19;
    unsigned char t20;
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

LAB0:    xsi_set_current_line(2152, ng6);
    t5 = (t0 + 3952U);
    t6 = *((char **)t5);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)0);
    if (t8 == 1)
        goto LAB14;

LAB15:    t5 = (t0 + 3952U);
    t9 = *((char **)t5);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)2);
    t4 = t11;

LAB16:    if (t4 == 1)
        goto LAB11;

LAB12:    t5 = (t0 + 3952U);
    t12 = *((char **)t5);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)4);
    t3 = t14;

LAB13:    if (t3 == 1)
        goto LAB8;

LAB9:    t5 = (t0 + 3952U);
    t15 = *((char **)t5);
    t16 = *((unsigned char *)t15);
    t17 = (t16 == (unsigned char)6);
    t2 = t17;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t5 = (t0 + 7908U);
    t18 = *((char **)t5);
    t19 = *((unsigned char *)t18);
    t20 = (t19 == (unsigned char)3);
    t1 = t20;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB17:    t25 = (t0 + 28240);
    t26 = (t25 + 32U);
    t27 = *((char **)t26);
    t28 = (t27 + 40U);
    t29 = *((char **)t28);
    *((unsigned char *)t29) = (unsigned char)2;
    xsi_driver_first_trans_fast(t25);

LAB2:    t30 = (t0 + 24632);
    *((int *)t30) = 1;

LAB1:    return;
LAB3:    t5 = (t0 + 28240);
    t21 = (t5 + 32U);
    t22 = *((char **)t21);
    t23 = (t22 + 40U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)3;
    xsi_driver_first_trans_fast(t5);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB11:    t3 = (unsigned char)1;
    goto LAB13;

LAB14:    t4 = (unsigned char)1;
    goto LAB16;

LAB18:    goto LAB2;

}


extern void xps_iic_v2_03_a_a_4169363769_3306564128_init()
{
	static char *pe[] = {(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_0,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_1,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_2,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_3,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_4,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_5,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_6,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_7,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_8,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_9,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_10,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_11,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_12,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_13,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_14,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_15,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_16,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_17,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_18,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_19,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_20,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_21,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_22,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_23,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_24,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_25,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_26,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_27,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_28,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_29,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_30,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_31,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_32,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_33,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_34,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_35,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_36,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_37,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_38,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_39,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_40,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_41,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_42,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_43,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_44,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_45,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_46,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_47,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_48,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_49,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_50,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_51,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_52,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_53,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_54,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_55,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_56,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_57,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_58,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_59,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_60,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_61,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_62,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_63,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_64,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_p_65};
	static char *se[] = {(void *)xps_iic_v2_03_a_a_4169363769_3306564128_sub_1622619199_229454594,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_sub_1622634445_229454594,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_sub_3931039043_229454594,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_sub_1604168272_229454594,(void *)xps_iic_v2_03_a_a_4169363769_3306564128_sub_464833100_229454594};
	xsi_register_didat("xps_iic_v2_03_a_a_4169363769_3306564128", "isim/testbench_isim_beh.exe.sim/xps_iic_v2_03_a/a_4169363769_3306564128.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
