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
static const char *ng0 = "F:/Programs/Verilog/FPGA_Group/test_br0101/pn_microblaze_testbench_tb.v";
static unsigned int ng1[] = {0U, 0U};



static void Initial_63_0(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    double t5;
    double t6;
    double t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;

LAB0:    t1 = (t0 + 2548U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);

LAB4:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1932);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(66, ng0);

LAB5:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = *((double *)t4);
    t6 = (t5 / 2.0000000000000000);
    t6 = (t6 * 10.000000000000000);
    t7 = (t6 < 0.00000000000000000);
    if (t7 == 1)
        goto LAB6;

LAB7:    t6 = (t6 + 0.50000000000000000);
    t6 = ((int64)(t6));

LAB8:    t6 = (t6 * 1.0000000000000000);
    t8 = (t0 + 2448);
    xsi_process_wait(t8, t6);
    *((char **)t1) = &&LAB9;

LAB1:    return;
LAB6:    t6 = 0.00000000000000000;
    goto LAB8;

LAB9:    xsi_set_current_line(67, ng0);
    t10 = (t0 + 1932);
    t11 = (t10 + 36U);
    t12 = *((char **)t11);
    memset(t9, 0, 8);
    t13 = (t12 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t12);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t13) == 0)
        goto LAB10;

LAB12:    t19 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t19) = 1;

LAB13:    t20 = (t9 + 4);
    t21 = (t12 + 4);
    t22 = *((unsigned int *)t12);
    t23 = (~(t22));
    *((unsigned int *)t9) = t23;
    *((unsigned int *)t20) = 0;
    if (*((unsigned int *)t21) != 0)
        goto LAB15;

LAB14:    t28 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t28 & 1U);
    t29 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t29 & 1U);
    t30 = (t0 + 1932);
    xsi_vlogvar_assign_value(t30, t9, 0, 0, 1);
    goto LAB5;

LAB10:    *((unsigned int *)t9) = 1;
    goto LAB13;

LAB15:    t24 = *((unsigned int *)t9);
    t25 = *((unsigned int *)t21);
    *((unsigned int *)t9) = (t24 | t25);
    t26 = *((unsigned int *)t20);
    t27 = *((unsigned int *)t21);
    *((unsigned int *)t20) = (t26 | t27);
    goto LAB14;

LAB16:    goto LAB1;

}

static void Initial_72_1(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    double t5;
    double t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;

LAB0:    t1 = (t0 + 2692U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(73, ng0);

LAB4:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1748);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = *((double *)t4);
    t5 = (t5 * 10.000000000000000);
    t6 = (t5 < 0.00000000000000000);
    if (t6 == 1)
        goto LAB5;

LAB6:    t5 = (t5 + 0.50000000000000000);
    t5 = ((int64)(t5));

LAB7:    t5 = (t5 * 1.0000000000000000);
    t7 = (t0 + 2592);
    xsi_process_wait(t7, t5);
    *((char **)t1) = &&LAB8;

LAB1:    return;
LAB5:    t5 = 0.00000000000000000;
    goto LAB7;

LAB8:    xsi_set_current_line(75, ng0);
    t9 = (t0 + 2024);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    memset(t8, 0, 8);
    t12 = (t11 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t11);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB12;

LAB10:    if (*((unsigned int *)t12) == 0)
        goto LAB9;

LAB11:    t18 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t18) = 1;

LAB12:    t19 = (t8 + 4);
    t20 = (t11 + 4);
    t21 = *((unsigned int *)t11);
    t22 = (~(t21));
    *((unsigned int *)t8) = t22;
    *((unsigned int *)t19) = 0;
    if (*((unsigned int *)t20) != 0)
        goto LAB14;

LAB13:    t27 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t27 & 1U);
    t28 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t28 & 1U);
    t29 = (t0 + 2024);
    xsi_vlogvar_assign_value(t29, t8, 0, 0, 1);
    goto LAB1;

LAB9:    *((unsigned int *)t8) = 1;
    goto LAB12;

LAB14:    t23 = *((unsigned int *)t8);
    t24 = *((unsigned int *)t20);
    *((unsigned int *)t8) = (t23 | t24);
    t25 = *((unsigned int *)t19);
    t26 = *((unsigned int *)t20);
    *((unsigned int *)t19) = (t25 | t26);
    goto LAB13;

}


extern void work_m_00000000002021989070_1949178628_init()
{
	static char *pe[] = {(void *)Initial_63_0,(void *)Initial_72_1};
	xsi_register_didat("work_m_00000000002021989070_1949178628", "isim/testbench_isim_beh.exe.sim/work/m_00000000002021989070_1949178628.didat");
	xsi_register_executes(pe);
}
