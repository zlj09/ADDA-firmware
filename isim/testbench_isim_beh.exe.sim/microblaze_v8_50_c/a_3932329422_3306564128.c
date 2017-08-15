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
static const char *ng0 = "G:/Xilinx/14.7/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/microblaze_v8_50_c/hdl/vhdl/zero_detect_gti.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );


static void microblaze_v8_50_c_a_3932329422_3306564128_p_0(char *t0)
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

LAB0:    xsi_set_current_line(184, ng0);
    t1 = (t0 + 1852U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t8 = (t0 + 7192);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 7044);
    *((int *)t13) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 7192);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_50_c_a_3932329422_3306564128_p_1(char *t0)
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

LAB0:    xsi_set_current_line(185, ng0);
    t1 = (t0 + 1944U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t8 = (t0 + 7228);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 7052);
    *((int *)t13) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 7228);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_50_c_a_3932329422_3306564128_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(194, ng0);

LAB3:    t1 = (t0 + 2496U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7264);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 7060);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_50_c_a_3932329422_3306564128_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(199, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 7300);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(200, ng0);
    t1 = (t0 + 2036U);
    t2 = *((char **)t1);
    t1 = (t0 + 7300);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_delta(t1, 0U, 32U, 0LL);
    t1 = (t0 + 7068);
    *((int *)t1) = 1;

LAB1:    return;
}

static void microblaze_v8_50_c_a_3932329422_3306564128_p_4(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    char *t5;
    int t6;
    int t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    int t15;
    int t16;
    char *t17;
    int t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    char *t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned char t33;
    unsigned char t34;
    char *t35;
    char *t36;

LAB0:    xsi_set_current_line(210, ng0);
    t1 = (t0 + 3468U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)2;
    xsi_set_current_line(211, ng0);
    t1 = (t0 + 3196U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 - 1);
    t1 = (t0 + 17209);
    *((int *)t1) = t4;
    t5 = (t0 + 17213);
    *((int *)t5) = 0;
    t6 = t4;
    t7 = 0;

LAB2:    if (t6 >= t7)
        goto LAB3;

LAB5:    xsi_set_current_line(215, ng0);
    t1 = (t0 + 3468U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t33 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t10);
    t1 = (t0 + 7336);
    t5 = (t1 + 32U);
    t8 = *((char **)t5);
    t9 = (t8 + 40U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = t33;
    xsi_driver_first_trans_delta(t1, 7U, 1, 0LL);
    t1 = (t0 + 7076);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(212, ng0);
    t8 = (t0 + 3468U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t8 = (t0 + 2312U);
    t11 = *((char **)t8);
    t8 = (t0 + 3332U);
    t12 = *((char **)t8);
    t13 = *((int *)t12);
    t8 = (t0 + 3196U);
    t14 = *((char **)t8);
    t15 = *((int *)t14);
    t16 = (t13 * t15);
    t8 = (t0 + 3400U);
    t17 = *((char **)t8);
    t18 = *((int *)t17);
    t8 = (t0 + 3196U);
    t19 = *((char **)t8);
    t20 = *((int *)t19);
    t21 = (t18 * t20);
    t22 = (t16 - t21);
    t8 = (t0 + 3196U);
    t23 = *((char **)t8);
    t24 = *((int *)t23);
    t25 = (t22 - t24);
    t8 = (t0 + 17209);
    t26 = *((int *)t8);
    t27 = (t25 + t26);
    t28 = (t27 - 0);
    t29 = (t28 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t27);
    t30 = (1U * t29);
    t31 = (0 + t30);
    t32 = (t11 + t31);
    t33 = *((unsigned char *)t32);
    t34 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t10, t33);
    t35 = (t0 + 3468U);
    t36 = *((char **)t35);
    t35 = (t36 + 0);
    *((unsigned char *)t35) = t34;

LAB4:    t1 = (t0 + 17209);
    t6 = *((int *)t1);
    t2 = (t0 + 17213);
    t7 = *((int *)t2);
    if (t6 == t7)
        goto LAB5;

LAB6:    t3 = (t6 + -1);
    t6 = t3;
    t5 = (t0 + 17209);
    *((int *)t5) = t6;
    goto LAB2;

}

static void microblaze_v8_50_c_a_3932329422_3306564128_p_5(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    char *t5;
    int t6;
    int t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    int t15;
    int t16;
    char *t17;
    int t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    char *t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned char t33;
    unsigned char t34;
    char *t35;
    char *t36;

LAB0:    xsi_set_current_line(210, ng0);
    t1 = (t0 + 3604U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)2;
    xsi_set_current_line(211, ng0);
    t1 = (t0 + 3196U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 - 1);
    t1 = (t0 + 17217);
    *((int *)t1) = t4;
    t5 = (t0 + 17221);
    *((int *)t5) = 0;
    t6 = t4;
    t7 = 0;

LAB2:    if (t6 >= t7)
        goto LAB3;

LAB5:    xsi_set_current_line(215, ng0);
    t1 = (t0 + 3604U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t33 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t10);
    t1 = (t0 + 7372);
    t5 = (t1 + 32U);
    t8 = *((char **)t5);
    t9 = (t8 + 40U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = t33;
    xsi_driver_first_trans_delta(t1, 6U, 1, 0LL);
    t1 = (t0 + 7084);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(212, ng0);
    t8 = (t0 + 3604U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t8 = (t0 + 2312U);
    t11 = *((char **)t8);
    t8 = (t0 + 3332U);
    t12 = *((char **)t8);
    t13 = *((int *)t12);
    t8 = (t0 + 3196U);
    t14 = *((char **)t8);
    t15 = *((int *)t14);
    t16 = (t13 * t15);
    t8 = (t0 + 3536U);
    t17 = *((char **)t8);
    t18 = *((int *)t17);
    t8 = (t0 + 3196U);
    t19 = *((char **)t8);
    t20 = *((int *)t19);
    t21 = (t18 * t20);
    t22 = (t16 - t21);
    t8 = (t0 + 3196U);
    t23 = *((char **)t8);
    t24 = *((int *)t23);
    t25 = (t22 - t24);
    t8 = (t0 + 17217);
    t26 = *((int *)t8);
    t27 = (t25 + t26);
    t28 = (t27 - 0);
    t29 = (t28 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t27);
    t30 = (1U * t29);
    t31 = (0 + t30);
    t32 = (t11 + t31);
    t33 = *((unsigned char *)t32);
    t34 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t10, t33);
    t35 = (t0 + 3604U);
    t36 = *((char **)t35);
    t35 = (t36 + 0);
    *((unsigned char *)t35) = t34;

LAB4:    t1 = (t0 + 17217);
    t6 = *((int *)t1);
    t2 = (t0 + 17221);
    t7 = *((int *)t2);
    if (t6 == t7)
        goto LAB5;

LAB6:    t3 = (t6 + -1);
    t6 = t3;
    t5 = (t0 + 17217);
    *((int *)t5) = t6;
    goto LAB2;

}

static void microblaze_v8_50_c_a_3932329422_3306564128_p_6(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    char *t5;
    int t6;
    int t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    int t15;
    int t16;
    char *t17;
    int t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    char *t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned char t33;
    unsigned char t34;
    char *t35;
    char *t36;

LAB0:    xsi_set_current_line(210, ng0);
    t1 = (t0 + 3740U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)2;
    xsi_set_current_line(211, ng0);
    t1 = (t0 + 3196U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 - 1);
    t1 = (t0 + 17225);
    *((int *)t1) = t4;
    t5 = (t0 + 17229);
    *((int *)t5) = 0;
    t6 = t4;
    t7 = 0;

LAB2:    if (t6 >= t7)
        goto LAB3;

LAB5:    xsi_set_current_line(215, ng0);
    t1 = (t0 + 3740U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t33 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t10);
    t1 = (t0 + 7408);
    t5 = (t1 + 32U);
    t8 = *((char **)t5);
    t9 = (t8 + 40U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = t33;
    xsi_driver_first_trans_delta(t1, 5U, 1, 0LL);
    t1 = (t0 + 7092);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(212, ng0);
    t8 = (t0 + 3740U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t8 = (t0 + 2312U);
    t11 = *((char **)t8);
    t8 = (t0 + 3332U);
    t12 = *((char **)t8);
    t13 = *((int *)t12);
    t8 = (t0 + 3196U);
    t14 = *((char **)t8);
    t15 = *((int *)t14);
    t16 = (t13 * t15);
    t8 = (t0 + 3672U);
    t17 = *((char **)t8);
    t18 = *((int *)t17);
    t8 = (t0 + 3196U);
    t19 = *((char **)t8);
    t20 = *((int *)t19);
    t21 = (t18 * t20);
    t22 = (t16 - t21);
    t8 = (t0 + 3196U);
    t23 = *((char **)t8);
    t24 = *((int *)t23);
    t25 = (t22 - t24);
    t8 = (t0 + 17225);
    t26 = *((int *)t8);
    t27 = (t25 + t26);
    t28 = (t27 - 0);
    t29 = (t28 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t27);
    t30 = (1U * t29);
    t31 = (0 + t30);
    t32 = (t11 + t31);
    t33 = *((unsigned char *)t32);
    t34 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t10, t33);
    t35 = (t0 + 3740U);
    t36 = *((char **)t35);
    t35 = (t36 + 0);
    *((unsigned char *)t35) = t34;

LAB4:    t1 = (t0 + 17225);
    t6 = *((int *)t1);
    t2 = (t0 + 17229);
    t7 = *((int *)t2);
    if (t6 == t7)
        goto LAB5;

LAB6:    t3 = (t6 + -1);
    t6 = t3;
    t5 = (t0 + 17225);
    *((int *)t5) = t6;
    goto LAB2;

}

static void microblaze_v8_50_c_a_3932329422_3306564128_p_7(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    char *t5;
    int t6;
    int t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    int t15;
    int t16;
    char *t17;
    int t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    char *t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned char t33;
    unsigned char t34;
    char *t35;
    char *t36;

LAB0:    xsi_set_current_line(210, ng0);
    t1 = (t0 + 3876U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)2;
    xsi_set_current_line(211, ng0);
    t1 = (t0 + 3196U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 - 1);
    t1 = (t0 + 17233);
    *((int *)t1) = t4;
    t5 = (t0 + 17237);
    *((int *)t5) = 0;
    t6 = t4;
    t7 = 0;

LAB2:    if (t6 >= t7)
        goto LAB3;

LAB5:    xsi_set_current_line(215, ng0);
    t1 = (t0 + 3876U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t33 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t10);
    t1 = (t0 + 7444);
    t5 = (t1 + 32U);
    t8 = *((char **)t5);
    t9 = (t8 + 40U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = t33;
    xsi_driver_first_trans_delta(t1, 4U, 1, 0LL);
    t1 = (t0 + 7100);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(212, ng0);
    t8 = (t0 + 3876U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t8 = (t0 + 2312U);
    t11 = *((char **)t8);
    t8 = (t0 + 3332U);
    t12 = *((char **)t8);
    t13 = *((int *)t12);
    t8 = (t0 + 3196U);
    t14 = *((char **)t8);
    t15 = *((int *)t14);
    t16 = (t13 * t15);
    t8 = (t0 + 3808U);
    t17 = *((char **)t8);
    t18 = *((int *)t17);
    t8 = (t0 + 3196U);
    t19 = *((char **)t8);
    t20 = *((int *)t19);
    t21 = (t18 * t20);
    t22 = (t16 - t21);
    t8 = (t0 + 3196U);
    t23 = *((char **)t8);
    t24 = *((int *)t23);
    t25 = (t22 - t24);
    t8 = (t0 + 17233);
    t26 = *((int *)t8);
    t27 = (t25 + t26);
    t28 = (t27 - 0);
    t29 = (t28 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t27);
    t30 = (1U * t29);
    t31 = (0 + t30);
    t32 = (t11 + t31);
    t33 = *((unsigned char *)t32);
    t34 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t10, t33);
    t35 = (t0 + 3876U);
    t36 = *((char **)t35);
    t35 = (t36 + 0);
    *((unsigned char *)t35) = t34;

LAB4:    t1 = (t0 + 17233);
    t6 = *((int *)t1);
    t2 = (t0 + 17237);
    t7 = *((int *)t2);
    if (t6 == t7)
        goto LAB5;

LAB6:    t3 = (t6 + -1);
    t6 = t3;
    t5 = (t0 + 17233);
    *((int *)t5) = t6;
    goto LAB2;

}

static void microblaze_v8_50_c_a_3932329422_3306564128_p_8(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    char *t5;
    int t6;
    int t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    int t15;
    int t16;
    char *t17;
    int t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    char *t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned char t33;
    unsigned char t34;
    char *t35;
    char *t36;

LAB0:    xsi_set_current_line(210, ng0);
    t1 = (t0 + 4012U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)2;
    xsi_set_current_line(211, ng0);
    t1 = (t0 + 3196U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 - 1);
    t1 = (t0 + 17241);
    *((int *)t1) = t4;
    t5 = (t0 + 17245);
    *((int *)t5) = 0;
    t6 = t4;
    t7 = 0;

LAB2:    if (t6 >= t7)
        goto LAB3;

LAB5:    xsi_set_current_line(215, ng0);
    t1 = (t0 + 4012U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t33 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t10);
    t1 = (t0 + 7480);
    t5 = (t1 + 32U);
    t8 = *((char **)t5);
    t9 = (t8 + 40U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = t33;
    xsi_driver_first_trans_delta(t1, 3U, 1, 0LL);
    t1 = (t0 + 7108);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(212, ng0);
    t8 = (t0 + 4012U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t8 = (t0 + 2312U);
    t11 = *((char **)t8);
    t8 = (t0 + 3332U);
    t12 = *((char **)t8);
    t13 = *((int *)t12);
    t8 = (t0 + 3196U);
    t14 = *((char **)t8);
    t15 = *((int *)t14);
    t16 = (t13 * t15);
    t8 = (t0 + 3944U);
    t17 = *((char **)t8);
    t18 = *((int *)t17);
    t8 = (t0 + 3196U);
    t19 = *((char **)t8);
    t20 = *((int *)t19);
    t21 = (t18 * t20);
    t22 = (t16 - t21);
    t8 = (t0 + 3196U);
    t23 = *((char **)t8);
    t24 = *((int *)t23);
    t25 = (t22 - t24);
    t8 = (t0 + 17241);
    t26 = *((int *)t8);
    t27 = (t25 + t26);
    t28 = (t27 - 0);
    t29 = (t28 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t27);
    t30 = (1U * t29);
    t31 = (0 + t30);
    t32 = (t11 + t31);
    t33 = *((unsigned char *)t32);
    t34 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t10, t33);
    t35 = (t0 + 4012U);
    t36 = *((char **)t35);
    t35 = (t36 + 0);
    *((unsigned char *)t35) = t34;

LAB4:    t1 = (t0 + 17241);
    t6 = *((int *)t1);
    t2 = (t0 + 17245);
    t7 = *((int *)t2);
    if (t6 == t7)
        goto LAB5;

LAB6:    t3 = (t6 + -1);
    t6 = t3;
    t5 = (t0 + 17241);
    *((int *)t5) = t6;
    goto LAB2;

}

static void microblaze_v8_50_c_a_3932329422_3306564128_p_9(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    char *t5;
    int t6;
    int t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    int t15;
    int t16;
    char *t17;
    int t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    char *t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned char t33;
    unsigned char t34;
    char *t35;
    char *t36;

LAB0:    xsi_set_current_line(210, ng0);
    t1 = (t0 + 4148U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)2;
    xsi_set_current_line(211, ng0);
    t1 = (t0 + 3196U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 - 1);
    t1 = (t0 + 17249);
    *((int *)t1) = t4;
    t5 = (t0 + 17253);
    *((int *)t5) = 0;
    t6 = t4;
    t7 = 0;

LAB2:    if (t6 >= t7)
        goto LAB3;

LAB5:    xsi_set_current_line(215, ng0);
    t1 = (t0 + 4148U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t33 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t10);
    t1 = (t0 + 7516);
    t5 = (t1 + 32U);
    t8 = *((char **)t5);
    t9 = (t8 + 40U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = t33;
    xsi_driver_first_trans_delta(t1, 2U, 1, 0LL);
    t1 = (t0 + 7116);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(212, ng0);
    t8 = (t0 + 4148U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t8 = (t0 + 2312U);
    t11 = *((char **)t8);
    t8 = (t0 + 3332U);
    t12 = *((char **)t8);
    t13 = *((int *)t12);
    t8 = (t0 + 3196U);
    t14 = *((char **)t8);
    t15 = *((int *)t14);
    t16 = (t13 * t15);
    t8 = (t0 + 4080U);
    t17 = *((char **)t8);
    t18 = *((int *)t17);
    t8 = (t0 + 3196U);
    t19 = *((char **)t8);
    t20 = *((int *)t19);
    t21 = (t18 * t20);
    t22 = (t16 - t21);
    t8 = (t0 + 3196U);
    t23 = *((char **)t8);
    t24 = *((int *)t23);
    t25 = (t22 - t24);
    t8 = (t0 + 17249);
    t26 = *((int *)t8);
    t27 = (t25 + t26);
    t28 = (t27 - 0);
    t29 = (t28 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t27);
    t30 = (1U * t29);
    t31 = (0 + t30);
    t32 = (t11 + t31);
    t33 = *((unsigned char *)t32);
    t34 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t10, t33);
    t35 = (t0 + 4148U);
    t36 = *((char **)t35);
    t35 = (t36 + 0);
    *((unsigned char *)t35) = t34;

LAB4:    t1 = (t0 + 17249);
    t6 = *((int *)t1);
    t2 = (t0 + 17253);
    t7 = *((int *)t2);
    if (t6 == t7)
        goto LAB5;

LAB6:    t3 = (t6 + -1);
    t6 = t3;
    t5 = (t0 + 17249);
    *((int *)t5) = t6;
    goto LAB2;

}

static void microblaze_v8_50_c_a_3932329422_3306564128_p_10(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    char *t5;
    int t6;
    int t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    int t15;
    int t16;
    char *t17;
    int t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    char *t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned char t33;
    unsigned char t34;
    char *t35;
    char *t36;

LAB0:    xsi_set_current_line(210, ng0);
    t1 = (t0 + 4284U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)2;
    xsi_set_current_line(211, ng0);
    t1 = (t0 + 3196U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 - 1);
    t1 = (t0 + 17257);
    *((int *)t1) = t4;
    t5 = (t0 + 17261);
    *((int *)t5) = 0;
    t6 = t4;
    t7 = 0;

LAB2:    if (t6 >= t7)
        goto LAB3;

LAB5:    xsi_set_current_line(215, ng0);
    t1 = (t0 + 4284U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t33 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t10);
    t1 = (t0 + 7552);
    t5 = (t1 + 32U);
    t8 = *((char **)t5);
    t9 = (t8 + 40U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = t33;
    xsi_driver_first_trans_delta(t1, 1U, 1, 0LL);
    t1 = (t0 + 7124);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(212, ng0);
    t8 = (t0 + 4284U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t8 = (t0 + 2312U);
    t11 = *((char **)t8);
    t8 = (t0 + 3332U);
    t12 = *((char **)t8);
    t13 = *((int *)t12);
    t8 = (t0 + 3196U);
    t14 = *((char **)t8);
    t15 = *((int *)t14);
    t16 = (t13 * t15);
    t8 = (t0 + 4216U);
    t17 = *((char **)t8);
    t18 = *((int *)t17);
    t8 = (t0 + 3196U);
    t19 = *((char **)t8);
    t20 = *((int *)t19);
    t21 = (t18 * t20);
    t22 = (t16 - t21);
    t8 = (t0 + 3196U);
    t23 = *((char **)t8);
    t24 = *((int *)t23);
    t25 = (t22 - t24);
    t8 = (t0 + 17257);
    t26 = *((int *)t8);
    t27 = (t25 + t26);
    t28 = (t27 - 0);
    t29 = (t28 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t27);
    t30 = (1U * t29);
    t31 = (0 + t30);
    t32 = (t11 + t31);
    t33 = *((unsigned char *)t32);
    t34 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t10, t33);
    t35 = (t0 + 4284U);
    t36 = *((char **)t35);
    t35 = (t36 + 0);
    *((unsigned char *)t35) = t34;

LAB4:    t1 = (t0 + 17257);
    t6 = *((int *)t1);
    t2 = (t0 + 17261);
    t7 = *((int *)t2);
    if (t6 == t7)
        goto LAB5;

LAB6:    t3 = (t6 + -1);
    t6 = t3;
    t5 = (t0 + 17257);
    *((int *)t5) = t6;
    goto LAB2;

}

static void microblaze_v8_50_c_a_3932329422_3306564128_p_11(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    char *t5;
    int t6;
    int t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    int t15;
    int t16;
    char *t17;
    int t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    char *t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned char t33;
    unsigned char t34;
    char *t35;
    char *t36;

LAB0:    xsi_set_current_line(210, ng0);
    t1 = (t0 + 4420U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)2;
    xsi_set_current_line(211, ng0);
    t1 = (t0 + 3196U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 - 1);
    t1 = (t0 + 17265);
    *((int *)t1) = t4;
    t5 = (t0 + 17269);
    *((int *)t5) = 0;
    t6 = t4;
    t7 = 0;

LAB2:    if (t6 >= t7)
        goto LAB3;

LAB5:    xsi_set_current_line(215, ng0);
    t1 = (t0 + 4420U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t33 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t10);
    t1 = (t0 + 7588);
    t5 = (t1 + 32U);
    t8 = *((char **)t5);
    t9 = (t8 + 40U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = t33;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t1 = (t0 + 7132);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(212, ng0);
    t8 = (t0 + 4420U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t8 = (t0 + 2312U);
    t11 = *((char **)t8);
    t8 = (t0 + 3332U);
    t12 = *((char **)t8);
    t13 = *((int *)t12);
    t8 = (t0 + 3196U);
    t14 = *((char **)t8);
    t15 = *((int *)t14);
    t16 = (t13 * t15);
    t8 = (t0 + 4352U);
    t17 = *((char **)t8);
    t18 = *((int *)t17);
    t8 = (t0 + 3196U);
    t19 = *((char **)t8);
    t20 = *((int *)t19);
    t21 = (t18 * t20);
    t22 = (t16 - t21);
    t8 = (t0 + 3196U);
    t23 = *((char **)t8);
    t24 = *((int *)t23);
    t25 = (t22 - t24);
    t8 = (t0 + 17265);
    t26 = *((int *)t8);
    t27 = (t25 + t26);
    t28 = (t27 - 0);
    t29 = (t28 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t27);
    t30 = (1U * t29);
    t31 = (0 + t30);
    t32 = (t11 + t31);
    t33 = *((unsigned char *)t32);
    t34 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t10, t33);
    t35 = (t0 + 4420U);
    t36 = *((char **)t35);
    t35 = (t36 + 0);
    *((unsigned char *)t35) = t34;

LAB4:    t1 = (t0 + 17265);
    t6 = *((int *)t1);
    t2 = (t0 + 17269);
    t7 = *((int *)t2);
    if (t6 == t7)
        goto LAB5;

LAB6:    t3 = (t6 + -1);
    t6 = t3;
    t5 = (t0 + 17265);
    *((int *)t5) = t6;
    goto LAB2;

}

static void microblaze_v8_50_c_a_3932329422_3306564128_p_12(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(228, ng0);

LAB3:    t1 = (t0 + 2680U);
    t2 = *((char **)t1);
    t1 = (t0 + 3332U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 8);
    t6 = (t5 * -1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = *((unsigned char *)t1);
    t10 = (t9 == (unsigned char)3);
    t11 = (t0 + 7624);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t10;
    xsi_driver_first_trans_fast(t11);

LAB2:    t16 = (t0 + 7140);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_50_c_a_3932329422_3306564128_p_13(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(232, ng0);

LAB3:    t1 = (t0 + 2220U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7660);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 7148);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void microblaze_v8_50_c_a_3932329422_3306564128_init()
{
	static char *pe[] = {(void *)microblaze_v8_50_c_a_3932329422_3306564128_p_0,(void *)microblaze_v8_50_c_a_3932329422_3306564128_p_1,(void *)microblaze_v8_50_c_a_3932329422_3306564128_p_2,(void *)microblaze_v8_50_c_a_3932329422_3306564128_p_3,(void *)microblaze_v8_50_c_a_3932329422_3306564128_p_4,(void *)microblaze_v8_50_c_a_3932329422_3306564128_p_5,(void *)microblaze_v8_50_c_a_3932329422_3306564128_p_6,(void *)microblaze_v8_50_c_a_3932329422_3306564128_p_7,(void *)microblaze_v8_50_c_a_3932329422_3306564128_p_8,(void *)microblaze_v8_50_c_a_3932329422_3306564128_p_9,(void *)microblaze_v8_50_c_a_3932329422_3306564128_p_10,(void *)microblaze_v8_50_c_a_3932329422_3306564128_p_11,(void *)microblaze_v8_50_c_a_3932329422_3306564128_p_12,(void *)microblaze_v8_50_c_a_3932329422_3306564128_p_13};
	xsi_register_didat("microblaze_v8_50_c_a_3932329422_3306564128", "isim/testbench_isim_beh.exe.sim/microblaze_v8_50_c/a_3932329422_3306564128.didat");
	xsi_register_executes(pe);
}
