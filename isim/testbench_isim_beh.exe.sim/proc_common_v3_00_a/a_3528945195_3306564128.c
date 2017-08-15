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
static const char *ng0 = "G:/Xilinx/14.7/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/counter_f.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_1919437128_1035706684(char *, char *, char *, char *, int );


static void proc_common_v3_00_a_a_3528945195_3306564128_p_0(char *t0)
{
    char t3[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(279, ng0);

LAB3:    t1 = (t0 + 916U);
    t2 = *((char **)t1);
    t4 = ((IEEE_P_2592010699) + 2332);
    t5 = (t0 + 6976U);
    t1 = xsi_base_array_concat(t1, t3, t4, (char)99, (unsigned char)2, (char)97, t2, t5, (char)101);
    t6 = (t0 + 3448);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 9U);
    xsi_driver_first_trans_fast(t6);

LAB2:    t11 = (t0 + 3372);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void proc_common_v3_00_a_a_3528945195_3306564128_p_1(char *t0)
{
    char t8[16];
    char t10[16];
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t9;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(283, ng0);

LAB3:    t1 = (t0 + 1468U);
    t2 = *((char **)t1);
    t3 = (8 - 1);
    t4 = (8 - t3);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t9 = ((IEEE_P_2592010699) + 2332);
    t11 = (t10 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 7;
    t12 = (t11 + 4U);
    *((int *)t12) = 0;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t13 = (0 - 7);
    t14 = (t13 * -1);
    t14 = (t14 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t14;
    t7 = xsi_base_array_concat(t7, t8, t9, (char)99, (unsigned char)2, (char)97, t1, t10, (char)101);
    t12 = (t0 + 3484);
    t15 = (t12 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memcpy(t18, t7, 9U);
    xsi_driver_first_trans_fast(t12);

LAB2:    t19 = (t0 + 3380);
    *((int *)t19) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void proc_common_v3_00_a_a_3528945195_3306564128_p_2(char *t0)
{
    char t17[16];
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
    char *t15;
    char *t16;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    xsi_set_current_line(291, ng0);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 3388);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(292, ng0);
    t4 = (t0 + 824U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1100U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t1 = (unsigned char)0;

LAB17:    if (t1 != 0)
        goto LAB13;

LAB14:    t2 = (t0 + 1008U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB20;

LAB21:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(293, ng0);
    t4 = xsi_get_transient_memory(9U);
    memset(t4, 0, 9U);
    t11 = t4;
    memset(t11, (unsigned char)2, 9U);
    t12 = (t0 + 3520);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 9U);
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

LAB11:    xsi_set_current_line(295, ng0);
    t2 = (t0 + 1652U);
    t5 = *((char **)t2);
    t2 = (t0 + 3520);
    t8 = (t2 + 32U);
    t11 = *((char **)t8);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 9U);
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    xsi_set_current_line(297, ng0);
    t2 = (t0 + 1560U);
    t8 = *((char **)t2);
    t2 = (t0 + 7024U);
    t11 = ieee_p_1242562249_sub_1919437128_1035706684(IEEE_P_1242562249, t17, t8, t2, 1);
    t12 = (t17 + 12U);
    t18 = *((unsigned int *)t12);
    t19 = (1U * t18);
    t10 = (9U != t19);
    if (t10 == 1)
        goto LAB18;

LAB19:    t13 = (t0 + 3520);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t20 = *((char **)t16);
    memcpy(t20, t11, 9U);
    xsi_driver_first_trans_fast(t13);
    goto LAB9;

LAB15:    t2 = (t0 + 1008U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t9 = (t7 == (unsigned char)3);
    t1 = t9;
    goto LAB17;

LAB18:    xsi_size_not_matching(9U, t19, 0);
    goto LAB19;

LAB20:    xsi_set_current_line(299, ng0);
    t2 = (t0 + 1560U);
    t5 = *((char **)t2);
    t2 = (t0 + 7024U);
    t8 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t17, t5, t2, 1);
    t11 = (t17 + 12U);
    t18 = *((unsigned int *)t11);
    t19 = (1U * t18);
    t6 = (9U != t19);
    if (t6 == 1)
        goto LAB22;

LAB23:    t12 = (t0 + 3520);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t8, 9U);
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

LAB22:    xsi_size_not_matching(9U, t19, 0);
    goto LAB23;

}

static void proc_common_v3_00_a_a_3528945195_3306564128_p_3(char *t0)
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

LAB0:    xsi_set_current_line(304, ng0);

LAB3:    t1 = (t0 + 1468U);
    t2 = *((char **)t1);
    t3 = (8 - 8);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 3556);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 3396);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void proc_common_v3_00_a_a_3528945195_3306564128_p_4(char *t0)
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

LAB0:    xsi_set_current_line(305, ng0);

LAB3:    t1 = (t0 + 1468U);
    t2 = *((char **)t1);
    t3 = (8 - 1);
    t4 = (8 - t3);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = (t0 + 3592);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast_port(t7);

LAB2:    t12 = (t0 + 3404);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void proc_common_v3_00_a_a_3528945195_3306564128_init()
{
	static char *pe[] = {(void *)proc_common_v3_00_a_a_3528945195_3306564128_p_0,(void *)proc_common_v3_00_a_a_3528945195_3306564128_p_1,(void *)proc_common_v3_00_a_a_3528945195_3306564128_p_2,(void *)proc_common_v3_00_a_a_3528945195_3306564128_p_3,(void *)proc_common_v3_00_a_a_3528945195_3306564128_p_4};
	xsi_register_didat("proc_common_v3_00_a_a_3528945195_3306564128", "isim/testbench_isim_beh.exe.sim/proc_common_v3_00_a/a_3528945195_3306564128.didat");
	xsi_register_executes(pe);
}
