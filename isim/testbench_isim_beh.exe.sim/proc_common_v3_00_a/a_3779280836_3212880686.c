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
static const char *ng1 = "Function min ended without a return statement";
static const char *ng2 = "G:/Xilinx/14.7/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/dynshreg_f.vhd";
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);


unsigned char proc_common_v3_00_a_a_3779280836_3212880686_sub_2621524218_3057020925(char *t1, int t2)
{
    char t3[72];
    char t4[8];
    char t8[8];
    unsigned char t0;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    unsigned char t15;
    char *t16;
    int t17;
    int t18;
    char *t19;

LAB0:    t5 = (t3 + 4U);
    t6 = ((STD_STANDARD) + 608);
    t7 = (t5 + 52U);
    *((char **)t7) = t6;
    t9 = (t5 + 36U);
    *((char **)t9) = t8;
    *((int *)t8) = 1;
    t10 = (t5 + 48U);
    *((unsigned int *)t10) = 4U;
    t11 = (t4 + 4U);
    *((int *)t11) = t2;

LAB2:    t12 = (t5 + 36U);
    t13 = *((char **)t12);
    t14 = *((int *)t13);
    t15 = (t2 > t14);
    if (t15 != 0)
        goto LAB3;

LAB5:    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t14 = *((int *)t7);
    t15 = (t2 == t14);
    t0 = t15;

LAB1:    return t0;
LAB3:    t12 = (t5 + 36U);
    t16 = *((char **)t12);
    t17 = *((int *)t16);
    t18 = (t17 * 2);
    t12 = (t5 + 36U);
    t19 = *((char **)t12);
    t12 = (t19 + 0);
    *((int *)t12) = t18;
    goto LAB2;

LAB4:;
LAB6:;
}

int proc_common_v3_00_a_a_3779280836_3212880686_sub_1447842762_3057020925(char *t1, int t2, int t3)
{
    char t5[16];
    int t0;
    char *t6;
    char *t7;
    unsigned char t8;

LAB0:    t6 = (t5 + 4U);
    *((int *)t6) = t2;
    t7 = (t5 + 8U);
    *((int *)t7) = t3;
    t8 = (t2 < t3);
    if (t8 != 0)
        goto LAB2;

LAB4:    t0 = t3;

LAB1:    return t0;
LAB2:    t0 = t2;
    goto LAB1;

LAB3:    xsi_error(ng1);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

static void proc_common_v3_00_a_a_3779280836_3212880686_p_0(char *t0)
{
    char t17[16];
    char t19[32];
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
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t18;
    char *t20;
    char *t21;
    int t22;
    unsigned int t23;
    char *t24;
    int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(360, ng2);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 2752);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(361, ng2);
    t4 = (t0 + 824U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 732U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(362, ng2);
    t4 = (t0 + 1008U);
    t11 = *((char **)t4);
    t4 = (t0 + 1192U);
    t12 = *((char **)t4);
    t13 = (0 - 0);
    t14 = (t13 * 8U);
    t15 = (0 + t14);
    t4 = (t12 + t15);
    t18 = (t0 + 3116);
    t20 = (t19 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 0;
    t21 = (t20 + 4U);
    *((int *)t21) = 14;
    t21 = (t20 + 8U);
    *((int *)t21) = 1;
    t22 = (14 - 0);
    t23 = (t22 * 1);
    t23 = (t23 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t23;
    t21 = (t19 + 16U);
    t24 = (t21 + 0U);
    *((int *)t24) = 0;
    t24 = (t21 + 4U);
    *((int *)t24) = 7;
    t24 = (t21 + 8U);
    *((int *)t24) = 1;
    t25 = (7 - 0);
    t23 = (t25 * 1);
    t23 = (t23 + 1);
    t24 = (t21 + 12U);
    *((unsigned int *)t24) = t23;
    t16 = xsi_base_array_concat(t16, t17, t18, (char)109, t11, (char)97, t4, t19, (char)101);
    t24 = (t0 + 2804);
    t26 = (t24 + 32U);
    t27 = *((char **)t26);
    t28 = (t27 + 40U);
    t29 = *((char **)t28);
    memcpy(t29, t16, 128U);
    xsi_driver_first_trans_fast(t24);
    goto LAB9;

}

static void proc_common_v3_00_a_a_3779280836_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
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
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(367, ng2);
    t1 = (t0 + 916U);
    t2 = *((char **)t1);
    t1 = (t0 + 6040U);
    t3 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t2, t1);
    t4 = (t3 < 16);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t19 = xsi_get_transient_memory(8U);
    memset(t19, 0, 8U);
    t20 = t19;
    memset(t20, (unsigned char)8, 8U);
    t21 = (t0 + 2840);
    t22 = (t21 + 32U);
    t23 = *((char **)t22);
    t24 = (t23 + 40U);
    t25 = *((char **)t24);
    memcpy(t25, t19, 8U);
    xsi_driver_first_trans_fast_port(t21);

LAB2:    t26 = (t0 + 2760);
    *((int *)t26) = 1;

LAB1:    return;
LAB3:    t5 = (t0 + 1192U);
    t6 = *((char **)t5);
    t5 = (t0 + 916U);
    t7 = *((char **)t5);
    t5 = (t0 + 6040U);
    t8 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t7, t5);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t8);
    t11 = (8U * t10);
    t12 = (0 + t11);
    t13 = (t6 + t12);
    t14 = (t0 + 2840);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memcpy(t18, t13, 8U);
    xsi_driver_first_trans_fast_port(t14);
    goto LAB2;

LAB6:    goto LAB2;

}


extern void proc_common_v3_00_a_a_3779280836_3212880686_init()
{
	static char *pe[] = {(void *)proc_common_v3_00_a_a_3779280836_3212880686_p_0,(void *)proc_common_v3_00_a_a_3779280836_3212880686_p_1};
	static char *se[] = {(void *)proc_common_v3_00_a_a_3779280836_3212880686_sub_2621524218_3057020925,(void *)proc_common_v3_00_a_a_3779280836_3212880686_sub_1447842762_3057020925};
	xsi_register_didat("proc_common_v3_00_a_a_3779280836_3212880686", "isim/testbench_isim_beh.exe.sim/proc_common_v3_00_a/a_3779280836_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
