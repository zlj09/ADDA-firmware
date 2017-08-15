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
static const char *ng0 = "G:/Xilinx/14.7/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/microblaze_v8_50_c/hdl/vhdl/register_file_gti.vhd";
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);


static void microblaze_v8_50_c_a_3963702523_3306564128_p_0(char *t0)
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

LAB0:    xsi_set_current_line(176, ng0);
    t1 = (t0 + 1560U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t8 = (t0 + 3496);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 3420);
    *((int *)t13) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 3496);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_50_c_a_3963702523_3306564128_p_1(char *t0)
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
    int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(217, ng0);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 3428);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(218, ng0);
    t4 = (t0 + 1560U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    if (t9 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(219, ng0);
    t4 = (t0 + 1652U);
    t10 = *((char **)t4);
    t4 = (t0 + 1468U);
    t11 = *((char **)t4);
    t4 = (t0 + 1472U);
    t12 = *((char **)t4);
    t13 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t11, t12);
    t14 = (t13 - 0);
    t15 = (t14 * 1);
    t16 = (32U * t15);
    t17 = (0U + t16);
    t18 = (t0 + 3532);
    t19 = (t18 + 32U);
    t20 = *((char **)t19);
    t21 = (t20 + 40U);
    t22 = *((char **)t21);
    memcpy(t22, t10, 32U);
    xsi_driver_first_trans_delta(t18, t17, 32U, 0LL);
    goto LAB9;

}

static void microblaze_v8_50_c_a_3963702523_3306564128_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(224, ng0);

LAB3:    t1 = (t0 + 1744U);
    t2 = *((char **)t1);
    t1 = (t0 + 916U);
    t3 = *((char **)t1);
    t1 = (t0 + 920U);
    t4 = *((char **)t1);
    t5 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t3, t4);
    t6 = (t5 - 0);
    t7 = (t6 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t5);
    t8 = (32U * t7);
    t9 = (0 + t8);
    t10 = (t2 + t9);
    t11 = (t0 + 3568);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t10, 32U);
    xsi_driver_first_trans_fast_port(t11);

LAB2:    t16 = (t0 + 3436);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_50_c_a_3963702523_3306564128_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(225, ng0);

LAB3:    t1 = (t0 + 1744U);
    t2 = *((char **)t1);
    t1 = (t0 + 1100U);
    t3 = *((char **)t1);
    t1 = (t0 + 1104U);
    t4 = *((char **)t1);
    t5 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t3, t4);
    t6 = (t5 - 0);
    t7 = (t6 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t5);
    t8 = (32U * t7);
    t9 = (0 + t8);
    t10 = (t2 + t9);
    t11 = (t0 + 3604);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t10, 32U);
    xsi_driver_first_trans_fast_port(t11);

LAB2:    t16 = (t0 + 3444);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_50_c_a_3963702523_3306564128_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(226, ng0);

LAB3:    t1 = (t0 + 1744U);
    t2 = *((char **)t1);
    t1 = (t0 + 1284U);
    t3 = *((char **)t1);
    t1 = (t0 + 1288U);
    t4 = *((char **)t1);
    t5 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t3, t4);
    t6 = (t5 - 0);
    t7 = (t6 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t5);
    t8 = (32U * t7);
    t9 = (0 + t8);
    t10 = (t2 + t9);
    t11 = (t0 + 3640);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t10, 32U);
    xsi_driver_first_trans_fast_port(t11);

LAB2:    t16 = (t0 + 3452);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void microblaze_v8_50_c_a_3963702523_3306564128_init()
{
	static char *pe[] = {(void *)microblaze_v8_50_c_a_3963702523_3306564128_p_0,(void *)microblaze_v8_50_c_a_3963702523_3306564128_p_1,(void *)microblaze_v8_50_c_a_3963702523_3306564128_p_2,(void *)microblaze_v8_50_c_a_3963702523_3306564128_p_3,(void *)microblaze_v8_50_c_a_3963702523_3306564128_p_4};
	xsi_register_didat("microblaze_v8_50_c_a_3963702523_3306564128", "isim/testbench_isim_beh.exe.sim/microblaze_v8_50_c/a_3963702523_3306564128.didat");
	xsi_register_executes(pe);
}
