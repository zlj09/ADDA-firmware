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
static const char *ng0 = "G:/Xilinx/14.7/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/microblaze_v8_50_c/hdl/vhdl/read_data_mux_gti.vhd";
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_1735675855_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_795620321_503743352(char *, char *, char *, char *, char *, char *);


static void microblaze_v8_50_c_a_1603826570_3306564128_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
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

LAB0:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 868U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t12 = xsi_get_transient_memory(32U);
    memset(t12, 0, 32U);
    t13 = t12;
    memset(t13, (unsigned char)2, 32U);
    t14 = (t0 + 2872);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memcpy(t18, t12, 32U);
    xsi_driver_first_trans_fast(t14);

LAB2:    t19 = (t0 + 2820);
    *((int *)t19) = 1;

LAB1:    return;
LAB3:    t2 = xsi_get_transient_memory(32U);
    memset(t2, 0, 32U);
    t6 = t2;
    memset(t6, (unsigned char)3, 32U);
    t7 = (t0 + 2872);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 32U);
    xsi_driver_first_trans_fast(t7);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB9:    goto LAB2;

}

static void microblaze_v8_50_c_a_1603826570_3306564128_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
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

LAB0:    xsi_set_current_line(111, ng0);
    if ((unsigned char)1 != 0)
        goto LAB3;

LAB4:
LAB5:    t8 = xsi_get_transient_memory(32U);
    memset(t8, 0, 32U);
    t9 = t8;
    memset(t9, (unsigned char)2, 32U);
    t10 = (t0 + 2908);
    t11 = (t10 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    memcpy(t14, t8, 32U);
    xsi_driver_first_trans_fast(t10);

LAB2:
LAB1:    return;
LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)3, 32U);
    t3 = (t0 + 2908);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast(t3);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_50_c_a_1603826570_3306564128_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
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

LAB0:    xsi_set_current_line(113, ng0);
    if ((unsigned char)0 != 0)
        goto LAB3;

LAB4:
LAB5:    t8 = xsi_get_transient_memory(32U);
    memset(t8, 0, 32U);
    t9 = t8;
    memset(t9, (unsigned char)2, 32U);
    t10 = (t0 + 2944);
    t11 = (t10 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    memcpy(t14, t8, 32U);
    xsi_driver_first_trans_fast(t10);

LAB2:
LAB1:    return;
LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)3, 32U);
    t3 = (t0 + 2944);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast(t3);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_50_c_a_1603826570_3306564128_p_3(char *t0)
{
    char t1[16];
    char t2[16];
    char t3[16];
    char t11[16];
    char t20[16];
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned char t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;

LAB0:    xsi_set_current_line(116, ng0);

LAB3:    t4 = (t0 + 592U);
    t5 = *((char **)t4);
    t4 = (t0 + 596U);
    t6 = *((char **)t4);
    t7 = (t0 + 1236U);
    t8 = *((char **)t7);
    t7 = (t0 + 1240U);
    t9 = *((char **)t7);
    t10 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t3, t5, t6, t8, t9);
    t12 = (t0 + 960U);
    t13 = *((char **)t12);
    t12 = (t0 + 964U);
    t14 = *((char **)t12);
    t15 = (t0 + 1328U);
    t16 = *((char **)t15);
    t15 = (t0 + 1332U);
    t17 = *((char **)t15);
    t18 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t11, t13, t14, t16, t17);
    t19 = ieee_p_2592010699_sub_1735675855_503743352(IEEE_P_2592010699, t2, t10, t3, t18, t11);
    t21 = (t0 + 776U);
    t22 = *((char **)t21);
    t21 = (t0 + 780U);
    t23 = *((char **)t21);
    t24 = (t0 + 1144U);
    t25 = *((char **)t24);
    t24 = (t0 + 1148U);
    t26 = *((char **)t24);
    t27 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t20, t22, t23, t25, t26);
    t28 = ieee_p_2592010699_sub_1735675855_503743352(IEEE_P_2592010699, t1, t19, t2, t27, t20);
    t29 = (t1 + 12U);
    t30 = *((unsigned int *)t29);
    t31 = (1U * t30);
    t32 = (32U != t31);
    if (t32 == 1)
        goto LAB5;

LAB6:    t33 = (t0 + 2980);
    t34 = (t33 + 32U);
    t35 = *((char **)t34);
    t36 = (t35 + 40U);
    t37 = *((char **)t36);
    memcpy(t37, t28, 32U);
    xsi_driver_first_trans_fast_port(t33);

LAB2:    t38 = (t0 + 2828);
    *((int *)t38) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t31, 0);
    goto LAB6;

}


extern void microblaze_v8_50_c_a_1603826570_3306564128_init()
{
	static char *pe[] = {(void *)microblaze_v8_50_c_a_1603826570_3306564128_p_0,(void *)microblaze_v8_50_c_a_1603826570_3306564128_p_1,(void *)microblaze_v8_50_c_a_1603826570_3306564128_p_2,(void *)microblaze_v8_50_c_a_1603826570_3306564128_p_3};
	xsi_register_didat("microblaze_v8_50_c_a_1603826570_3306564128", "isim/testbench_isim_beh.exe.sim/microblaze_v8_50_c/a_1603826570_3306564128.didat");
	xsi_register_executes(pe);
}
