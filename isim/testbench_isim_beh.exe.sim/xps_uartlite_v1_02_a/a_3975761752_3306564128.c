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
static const char *ng1 = "rem 0 asked for.  Divide by zero error.";
static const char *ng2 = "Function calc_ratio ended without a return statement";
static const char *ng3 = "G:/Xilinx/14.7/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/xps_uartlite_v1_02_a/hdl/vhdl/uartlite_core.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );


int xps_uartlite_v1_02_a_a_3975761752_3306564128_sub_306793076_229454594(char *t1, int t2, int t3)
{
    char t4[208];
    char t5[16];
    char t11[8];
    char t22[8];
    char t30[8];
    int t0;
    int t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    int t25;
    int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    int t37;
    char *t38;
    int t39;
    unsigned char t40;
    char *t41;
    int t42;
    int t43;

LAB0:    t6 = (16 * t3);
    t7 = (t6 / 2);
    t8 = (t4 + 4U);
    t9 = ((STD_STANDARD) + 240);
    t10 = (t8 + 52U);
    *((char **)t10) = t9;
    t12 = (t8 + 36U);
    *((char **)t12) = t11;
    *((int *)t11) = t7;
    t13 = (t8 + 48U);
    *((unsigned int *)t13) = 4U;
    t14 = (16 * t3);
    if (t14 == 0)
        goto LAB2;

LAB3:    t15 = abs(t2);
    t16 = abs(t14);
    t17 = (t15 % t16);
    if (t2 < 0)
        goto LAB4;

LAB5:    t19 = (t4 + 72U);
    t20 = ((STD_STANDARD) + 240);
    t21 = (t19 + 52U);
    *((char **)t21) = t20;
    t23 = (t19 + 36U);
    *((char **)t23) = t22;
    *((int *)t22) = t17;
    t24 = (t19 + 48U);
    *((unsigned int *)t24) = 4U;
    t25 = (16 * t3);
    t26 = (t2 / t25);
    t27 = (t4 + 140U);
    t28 = ((STD_STANDARD) + 240);
    t29 = (t27 + 52U);
    *((char **)t29) = t28;
    t31 = (t27 + 36U);
    *((char **)t31) = t30;
    *((int *)t30) = t26;
    t32 = (t27 + 48U);
    *((unsigned int *)t32) = 4U;
    t33 = (t5 + 4U);
    *((int *)t33) = t2;
    t34 = (t5 + 8U);
    *((int *)t34) = t3;
    t35 = (t8 + 36U);
    t36 = *((char **)t35);
    t37 = *((int *)t36);
    t35 = (t19 + 36U);
    t38 = *((char **)t35);
    t39 = *((int *)t38);
    t40 = (t37 < t39);
    if (t40 != 0)
        goto LAB6;

LAB8:    t9 = (t27 + 36U);
    t10 = *((char **)t9);
    t6 = *((int *)t10);
    t0 = t6;

LAB1:    return t0;
LAB2:    xsi_error(ng1);
    goto LAB3;

LAB4:    t18 = (-(t17));
    t17 = t18;
    goto LAB5;

LAB6:    t35 = (t27 + 36U);
    t41 = *((char **)t35);
    t42 = *((int *)t41);
    t43 = (t42 + 1);
    t0 = t43;
    goto LAB1;

LAB7:    xsi_error(ng2);
    t0 = 0;
    goto LAB1;

LAB9:    goto LAB7;

LAB10:    goto LAB7;

}

static void xps_uartlite_v1_02_a_a_3975761752_3306564128_p_0(char *t0)
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
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned char t22;
    unsigned char t23;
    char *t24;
    char *t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned char t30;
    unsigned char t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    xsi_set_current_line(295, ng3);

LAB3:    t1 = (t0 + 1008U);
    t2 = *((char **)t1);
    t3 = (0 - 0);
    t4 = (t3 * 1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 1008U);
    t9 = *((char **)t8);
    t10 = (2 - 0);
    t11 = (t10 * 1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t8 = (t9 + t13);
    t14 = *((unsigned char *)t8);
    t15 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t7, t14);
    t16 = (t0 + 1008U);
    t17 = *((char **)t16);
    t18 = (1 - 0);
    t19 = (t18 * 1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t16 = (t17 + t21);
    t22 = *((unsigned char *)t16);
    t23 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t15, t22);
    t24 = (t0 + 1008U);
    t25 = *((char **)t24);
    t26 = (3 - 0);
    t27 = (t26 * 1);
    t28 = (1U * t27);
    t29 = (0 + t28);
    t24 = (t25 + t29);
    t30 = *((unsigned char *)t24);
    t31 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t23, t30);
    t32 = (t0 + 7216);
    t33 = (t32 + 32U);
    t34 = *((char **)t33);
    t35 = (t34 + 40U);
    t36 = *((char **)t35);
    *((unsigned char *)t36) = t31;
    xsi_driver_first_trans_fast_port(t32);

LAB2:    t37 = (t0 + 7052);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_uartlite_v1_02_a_a_3975761752_3306564128_p_1(char *t0)
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
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned char t22;
    unsigned char t23;
    char *t24;
    char *t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned char t30;
    unsigned char t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    xsi_set_current_line(298, ng3);

LAB3:    t1 = (t0 + 1100U);
    t2 = *((char **)t1);
    t3 = (1 - 0);
    t4 = (t3 * 1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 1100U);
    t9 = *((char **)t8);
    t10 = (3 - 0);
    t11 = (t10 * 1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t8 = (t9 + t13);
    t14 = *((unsigned char *)t8);
    t15 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t7, t14);
    t16 = (t0 + 1100U);
    t17 = *((char **)t16);
    t18 = (0 - 0);
    t19 = (t18 * 1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t16 = (t17 + t21);
    t22 = *((unsigned char *)t16);
    t23 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t15, t22);
    t24 = (t0 + 1100U);
    t25 = *((char **)t24);
    t26 = (2 - 0);
    t27 = (t26 * 1);
    t28 = (1U * t27);
    t29 = (0 + t28);
    t24 = (t25 + t29);
    t30 = *((unsigned char *)t24);
    t31 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t23, t30);
    t32 = (t0 + 7252);
    t33 = (t32 + 32U);
    t34 = *((char **)t33);
    t35 = (t34 + 40U);
    t36 = *((char **)t35);
    *((unsigned char *)t36) = t31;
    xsi_driver_first_trans_fast_port(t32);

LAB2:    t37 = (t0 + 7060);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_uartlite_v1_02_a_a_3975761752_3306564128_p_2(char *t0)
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
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned char t18;
    char *t19;
    char *t20;
    unsigned char t21;
    unsigned char t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(301, ng3);

LAB3:    t1 = (t0 + 1008U);
    t2 = *((char **)t1);
    t3 = (0 - 0);
    t4 = (t3 * 1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 2480U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t11 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t10);
    t12 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t7, t11);
    t8 = (t0 + 1100U);
    t13 = *((char **)t8);
    t14 = (1 - 0);
    t15 = (t14 * 1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t8 = (t13 + t17);
    t18 = *((unsigned char *)t8);
    t19 = (t0 + 3124U);
    t20 = *((char **)t19);
    t21 = *((unsigned char *)t20);
    t22 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t18, t21);
    t23 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t12, t22);
    t19 = (t0 + 7288);
    t24 = (t19 + 32U);
    t25 = *((char **)t24);
    t26 = (t25 + 40U);
    t27 = *((char **)t26);
    *((unsigned char *)t27) = t23;
    xsi_driver_first_trans_fast_port(t19);

LAB2:    t28 = (t0 + 7068);
    *((int *)t28) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_uartlite_v1_02_a_a_3975761752_3306564128_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(320, ng3);

LAB3:    t1 = (t0 + 2480U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7324);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 7U, 1, 0LL);

LAB2:    t8 = (t0 + 7076);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_uartlite_v1_02_a_a_3975761752_3306564128_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(321, ng3);

LAB3:    t1 = (t0 + 2572U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7360);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 6U, 1, 0LL);

LAB2:    t8 = (t0 + 7084);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_uartlite_v1_02_a_a_3975761752_3306564128_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(322, ng3);

LAB3:    t1 = (t0 + 3216U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7396);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 5U, 1, 0LL);

LAB2:    t8 = (t0 + 7092);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_uartlite_v1_02_a_a_3975761752_3306564128_p_6(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(323, ng3);

LAB3:    t1 = (t0 + 3124U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7432);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 4U, 1, 0LL);

LAB2:    t8 = (t0 + 7100);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_uartlite_v1_02_a_a_3975761752_3306564128_p_7(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(324, ng3);

LAB3:    t1 = (t0 + 2204U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7468);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 3U, 1, 0LL);

LAB2:    t8 = (t0 + 7108);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_uartlite_v1_02_a_a_3975761752_3306564128_p_8(char *t0)
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
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;

LAB0:    xsi_set_current_line(331, ng3);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 7116);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(332, ng3);
    t4 = (t0 + 824U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(335, ng3);
    t2 = (t0 + 1008U);
    t4 = *((char **)t2);
    t15 = (2 - 0);
    t16 = (t15 * 1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t2 = (t4 + t18);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 7504);
    t8 = (t5 + 32U);
    t11 = *((char **)t8);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_fast(t5);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(333, ng3);
    t4 = (t0 + 7504);
    t11 = (t4 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

}

static void xps_uartlite_v1_02_a_a_3975761752_3306564128_p_9(char *t0)
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

LAB0:    xsi_set_current_line(345, ng3);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 7124);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(346, ng3);
    t4 = (t0 + 824U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 2940U);
    t12 = *((char **)t4);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    t8 = t14;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 2756U);
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

LAB8:    xsi_set_current_line(347, ng3);
    t4 = (t0 + 7540);
    t15 = (t4 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_first_trans_delta(t4, 2U, 1, 0LL);
    goto LAB9;

LAB11:    t8 = (unsigned char)1;
    goto LAB13;

LAB14:    xsi_set_current_line(349, ng3);
    t2 = (t0 + 7540);
    t5 = (t2 + 32U);
    t9 = *((char **)t5);
    t12 = (t9 + 40U);
    t15 = *((char **)t12);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 2U, 1, 0LL);
    goto LAB9;

}

static void xps_uartlite_v1_02_a_a_3975761752_3306564128_p_10(char *t0)
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

LAB0:    xsi_set_current_line(359, ng3);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 7132);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(360, ng3);
    t4 = (t0 + 824U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 2940U);
    t12 = *((char **)t4);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    t8 = t14;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 2664U);
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

LAB8:    xsi_set_current_line(361, ng3);
    t4 = (t0 + 7576);
    t15 = (t4 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_first_trans_delta(t4, 1U, 1, 0LL);
    goto LAB9;

LAB11:    t8 = (unsigned char)1;
    goto LAB13;

LAB14:    xsi_set_current_line(363, ng3);
    t2 = (t0 + 7576);
    t5 = (t2 + 32U);
    t9 = *((char **)t5);
    t12 = (t9 + 40U);
    t15 = *((char **)t12);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 1U, 1, 0LL);
    goto LAB9;

}

static void xps_uartlite_v1_02_a_a_3975761752_3306564128_p_11(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(388, ng3);

LAB3:    t1 = (t0 + 7612);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_uartlite_v1_02_a_a_3975761752_3306564128_p_12(char *t0)
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
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;

LAB0:    xsi_set_current_line(396, ng3);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 7140);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(397, ng3);
    t4 = (t0 + 824U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1100U);
    t4 = *((char **)t2);
    t15 = (3 - 0);
    t16 = (t15 * 1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t2 = (t4 + t18);
    t1 = *((unsigned char *)t2);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:    xsi_set_current_line(406, ng3);
    t2 = (t0 + 7648);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(407, ng3);
    t2 = (t0 + 7684);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(398, ng3);
    t4 = (t0 + 7648);
    t11 = (t4 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(399, ng3);
    t2 = (t0 + 7684);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(400, ng3);
    t2 = (t0 + 7720);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_set_current_line(402, ng3);
    t5 = (t0 + 916U);
    t8 = *((char **)t5);
    t19 = (6 - 0);
    t20 = (t19 * 1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t5 = (t8 + t22);
    t6 = *((unsigned char *)t5);
    t11 = (t0 + 7684);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t23 = *((char **)t14);
    *((unsigned char *)t23) = t6;
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(403, ng3);
    t2 = (t0 + 916U);
    t4 = *((char **)t2);
    t15 = (7 - 0);
    t16 = (t15 * 1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t2 = (t4 + t18);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 7648);
    t8 = (t5 + 32U);
    t11 = *((char **)t8);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(404, ng3);
    t2 = (t0 + 916U);
    t4 = *((char **)t2);
    t15 = (3 - 0);
    t16 = (t15 * 1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t2 = (t4 + t18);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 7720);
    t8 = (t5 + 32U);
    t11 = *((char **)t8);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_fast(t5);
    goto LAB9;

}

static void xps_uartlite_v1_02_a_a_3975761752_3306564128_p_13(char *t0)
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
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(417, ng3);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 7148);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(418, ng3);
    t4 = (t0 + 1100U);
    t8 = *((char **)t4);
    t9 = (1 - 0);
    t10 = (t9 * 1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t4 = (t8 + t12);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(421, ng3);
    t2 = (t0 + 3216U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 7756);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t15 = (t8 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t1;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(419, ng3);
    t15 = (t0 + 7756);
    t16 = (t15 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast(t15);
    goto LAB9;

}

static void xps_uartlite_v1_02_a_a_3975761752_3306564128_p_14(char *t0)
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
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(432, ng3);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 7156);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(433, ng3);
    t4 = (t0 + 1008U);
    t8 = *((char **)t4);
    t9 = (0 - 0);
    t10 = (t9 * 1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t4 = (t8 + t12);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(436, ng3);
    t2 = (t0 + 2480U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 7792);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t15 = (t8 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t1;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(434, ng3);
    t15 = (t0 + 7792);
    t16 = (t15 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast(t15);
    goto LAB9;

}

static void xps_uartlite_v1_02_a_a_3975761752_3306564128_p_15(char *t0)
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
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(446, ng3);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 7164);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(447, ng3);
    t4 = (t0 + 824U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(450, ng3);
    t2 = (t0 + 2204U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 2480U);
    t5 = *((char **)t2);
    t3 = *((unsigned char *)t5);
    t2 = (t0 + 3400U);
    t8 = *((char **)t2);
    t6 = *((unsigned char *)t8);
    t7 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t6);
    t9 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t7);
    t2 = (t0 + 3216U);
    t11 = *((char **)t2);
    t10 = *((unsigned char *)t11);
    t2 = (t0 + 3308U);
    t12 = *((char **)t2);
    t15 = *((unsigned char *)t12);
    t16 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t15);
    t17 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t10, t16);
    t18 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t9, t17);
    t19 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t1, t18);
    t2 = (t0 + 7828);
    t13 = (t2 + 32U);
    t14 = *((char **)t13);
    t20 = (t14 + 40U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = t19;
    xsi_driver_first_trans_fast_port(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(448, ng3);
    t4 = (t0 + 7828);
    t11 = (t4 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB9;

}

static void xps_uartlite_v1_02_a_a_3975761752_3306564128_p_16(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;

LAB0:    xsi_set_current_line(462, ng3);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t3 = (t0 + 7864);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(463, ng3);
    t1 = (t0 + 1008U);
    t2 = *((char **)t1);
    t8 = (2 - 0);
    t9 = (t8 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t12 = *((unsigned char *)t1);
    t13 = (t12 == (unsigned char)3);
    if (t13 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1008U);
    t2 = *((char **)t1);
    t8 = (0 - 0);
    t9 = (t8 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t12 = *((unsigned char *)t1);
    t13 = (t12 == (unsigned char)3);
    if (t13 != 0)
        goto LAB5;

LAB6:    xsi_set_current_line(468, ng3);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t3 = (t0 + 7864);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_delta(t3, 0U, 8U, 0LL);

LAB3:    t1 = (t0 + 7172);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(464, ng3);
    t3 = (t0 + 2020U);
    t4 = *((char **)t3);
    t3 = (t0 + 7864);
    t5 = (t3 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t14 = *((char **)t7);
    memcpy(t14, t4, 8U);
    xsi_driver_first_trans_delta(t3, 0U, 8U, 0LL);
    goto LAB3;

LAB5:    xsi_set_current_line(466, ng3);
    t3 = (t0 + 2388U);
    t4 = *((char **)t3);
    t3 = (t0 + 7864);
    t5 = (t3 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t14 = *((char **)t7);
    memcpy(t14, t4, 8U);
    xsi_driver_first_trans_delta(t3, 0U, 8U, 0LL);
    goto LAB3;

}


extern void xps_uartlite_v1_02_a_a_3975761752_3306564128_init()
{
	static char *pe[] = {(void *)xps_uartlite_v1_02_a_a_3975761752_3306564128_p_0,(void *)xps_uartlite_v1_02_a_a_3975761752_3306564128_p_1,(void *)xps_uartlite_v1_02_a_a_3975761752_3306564128_p_2,(void *)xps_uartlite_v1_02_a_a_3975761752_3306564128_p_3,(void *)xps_uartlite_v1_02_a_a_3975761752_3306564128_p_4,(void *)xps_uartlite_v1_02_a_a_3975761752_3306564128_p_5,(void *)xps_uartlite_v1_02_a_a_3975761752_3306564128_p_6,(void *)xps_uartlite_v1_02_a_a_3975761752_3306564128_p_7,(void *)xps_uartlite_v1_02_a_a_3975761752_3306564128_p_8,(void *)xps_uartlite_v1_02_a_a_3975761752_3306564128_p_9,(void *)xps_uartlite_v1_02_a_a_3975761752_3306564128_p_10,(void *)xps_uartlite_v1_02_a_a_3975761752_3306564128_p_11,(void *)xps_uartlite_v1_02_a_a_3975761752_3306564128_p_12,(void *)xps_uartlite_v1_02_a_a_3975761752_3306564128_p_13,(void *)xps_uartlite_v1_02_a_a_3975761752_3306564128_p_14,(void *)xps_uartlite_v1_02_a_a_3975761752_3306564128_p_15,(void *)xps_uartlite_v1_02_a_a_3975761752_3306564128_p_16};
	static char *se[] = {(void *)xps_uartlite_v1_02_a_a_3975761752_3306564128_sub_306793076_229454594};
	xsi_register_didat("xps_uartlite_v1_02_a_a_3975761752_3306564128", "isim/testbench_isim_beh.exe.sim/xps_uartlite_v1_02_a/a_3975761752_3306564128.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
