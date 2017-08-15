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
static const char *ng0 = "G:/Xilinx/14.7/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/xps_iic_v2_03_a/hdl/vhdl/shift8.vhd";
extern char *IEEE_P_2592010699;



static void xps_iic_v2_03_a_a_2625681708_3306564128_p_0(char *t0)
{
    char t22[16];
    char t23[16];
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
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    int t24;
    unsigned int t25;
    char *t26;

LAB0:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 568U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 2540);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(150, ng0);
    t4 = (t0 + 684U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 1500U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t9 == t11);
    if (t12 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 776U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:    t2 = (t0 + 1052U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB13;

LAB14:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 592U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(151, ng0);
    t4 = xsi_get_transient_memory(8U);
    memset(t4, 0, 8U);
    t13 = t4;
    memset(t13, (unsigned char)2, 8U);
    t14 = (t0 + 2600);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memcpy(t18, t4, 8U);
    xsi_driver_first_trans_fast(t14);
    goto LAB9;

LAB11:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 868U);
    t5 = *((char **)t2);
    t2 = (t0 + 2600);
    t8 = (t2 + 32U);
    t10 = *((char **)t8);
    t13 = (t10 + 40U);
    t14 = *((char **)t13);
    memcpy(t14, t5, 8U);
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 1328U);
    t5 = *((char **)t2);
    t19 = (7 - 6);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t2 = (t5 + t21);
    t8 = (t0 + 960U);
    t10 = *((char **)t8);
    t6 = *((unsigned char *)t10);
    t13 = ((IEEE_P_2592010699) + 2332);
    t14 = (t23 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 6;
    t15 = (t14 + 4U);
    *((int *)t15) = 0;
    t15 = (t14 + 8U);
    *((int *)t15) = -1;
    t24 = (0 - 6);
    t25 = (t24 * -1);
    t25 = (t25 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t25;
    t8 = xsi_base_array_concat(t8, t22, t13, (char)97, t2, t23, (char)99, t6, (char)101);
    t25 = (7U + 1U);
    t7 = (8U != t25);
    if (t7 == 1)
        goto LAB15;

LAB16:    t15 = (t0 + 2600);
    t16 = (t15 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 40U);
    t26 = *((char **)t18);
    memcpy(t26, t8, 8U);
    xsi_driver_first_trans_fast(t15);
    goto LAB9;

LAB15:    xsi_size_not_matching(8U, t25, 0);
    goto LAB16;

}

static void xps_iic_v2_03_a_a_2625681708_3306564128_p_1(char *t0)
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

LAB0:    xsi_set_current_line(160, ng0);

LAB3:    t1 = (t0 + 1328U);
    t2 = *((char **)t1);
    t3 = (7 - 7);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 2636);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 2548);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xps_iic_v2_03_a_a_2625681708_3306564128_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(161, ng0);

LAB3:    t1 = (t0 + 1328U);
    t2 = *((char **)t1);
    t1 = (t0 + 2672);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 2556);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void xps_iic_v2_03_a_a_2625681708_3306564128_init()
{
	static char *pe[] = {(void *)xps_iic_v2_03_a_a_2625681708_3306564128_p_0,(void *)xps_iic_v2_03_a_a_2625681708_3306564128_p_1,(void *)xps_iic_v2_03_a_a_2625681708_3306564128_p_2};
	xsi_register_didat("xps_iic_v2_03_a_a_2625681708_3306564128", "isim/testbench_isim_beh.exe.sim/xps_iic_v2_03_a/a_2625681708_3306564128.didat");
	xsi_register_executes(pe);
}
