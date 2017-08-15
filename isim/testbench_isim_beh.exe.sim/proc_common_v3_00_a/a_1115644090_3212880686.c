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
static const char *ng0 = "Function min ended without a return statement";
extern char *STD_STANDARD;
static const char *ng2 = "G:/Xilinx/14.7/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/dynshreg_i_f.vhd";
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);


int proc_common_v3_00_a_a_1115644090_3212880686_sub_1447842762_3057020925(char *t1, int t2, int t3)
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

LAB3:    xsi_error(ng0);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

char *proc_common_v3_00_a_a_1115644090_3212880686_sub_4190154379_3057020925(char *t1, char *t2, int t3, int t4, char *t5, char *t6)
{
    char t7[208];
    char t8[24];
    char t13[16];
    char t29[8];
    char t35[8];
    char *t0;
    int t9;
    int t10;
    int t11;
    unsigned int t12;
    int t14;
    int t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned char t41;
    char *t42;
    unsigned char t43;
    unsigned int t44;
    int t45;
    unsigned int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    int t56;
    int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;

LAB0:    t9 = (t3 * t4);
    t10 = (t9 - 1);
    t11 = (t10 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t12 = (t12 * 1U);
    t14 = (t3 * t4);
    t15 = (t14 - 1);
    t16 = (t13 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 0;
    t17 = (t16 + 4U);
    *((int *)t17) = t15;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t18 = (t15 - 0);
    t19 = (t18 * 1);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t17 = (t7 + 4U);
    t20 = ((STD_STANDARD) + 720);
    t21 = (t17 + 52U);
    *((char **)t21) = t20;
    t22 = (char *)alloca(t12);
    t23 = (t17 + 36U);
    *((char **)t23) = t22;
    xsi_type_set_default_value(t20, t22, t13);
    t24 = (t17 + 40U);
    *((char **)t24) = t13;
    t25 = (t17 + 48U);
    *((unsigned int *)t25) = t12;
    t26 = (t7 + 72U);
    t27 = ((STD_STANDARD) + 552);
    t28 = (t26 + 52U);
    *((char **)t28) = t27;
    t30 = (t26 + 36U);
    *((char **)t30) = t29;
    xsi_type_set_default_value(t27, t29, 0);
    t31 = (t26 + 48U);
    *((unsigned int *)t31) = 4U;
    t32 = (t7 + 140U);
    t33 = ((STD_STANDARD) + 552);
    t34 = (t32 + 52U);
    *((char **)t34) = t33;
    t36 = (t32 + 36U);
    *((char **)t36) = t35;
    xsi_type_set_default_value(t33, t35, 0);
    t37 = (t32 + 48U);
    *((unsigned int *)t37) = 4U;
    t38 = (t8 + 4U);
    *((int *)t38) = t3;
    t39 = (t8 + 8U);
    *((int *)t39) = t4;
    t40 = (t8 + 12U);
    t41 = (t5 != 0);
    if (t41 == 1)
        goto LAB3;

LAB2:    t42 = (t8 + 16U);
    *((char **)t42) = t6;
    t43 = (t3 == 0);
    if (t43 != 0)
        goto LAB4;

LAB6:    t16 = (t6 + 12U);
    t12 = *((unsigned int *)t16);
    t41 = (t12 == 0);
    if (t41 != 0)
        goto LAB7;

LAB8:    t16 = (t26 + 36U);
    t20 = *((char **)t16);
    t16 = (t20 + 0);
    *((int *)t16) = 0;

LAB9:    t16 = (t26 + 36U);
    t20 = *((char **)t16);
    t9 = *((int *)t20);
    t16 = (t13 + 12U);
    t12 = *((unsigned int *)t16);
    t41 = (t9 != t12);
    if (t41 != 0)
        goto LAB10;

LAB12:
LAB5:    t16 = (t17 + 36U);
    t20 = *((char **)t16);
    t16 = (t13 + 12U);
    t12 = *((unsigned int *)t16);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t20, t12);
    t21 = (t13 + 0U);
    t9 = *((int *)t21);
    t23 = (t13 + 4U);
    t10 = *((int *)t23);
    t24 = (t13 + 8U);
    t11 = *((int *)t24);
    t25 = (t2 + 0U);
    t27 = (t25 + 0U);
    *((int *)t27) = t9;
    t27 = (t25 + 4U);
    *((int *)t27) = t10;
    t27 = (t25 + 8U);
    *((int *)t27) = t11;
    t14 = (t10 - t9);
    t19 = (t14 * t11);
    t19 = (t19 + 1);
    t27 = (t25 + 12U);
    *((unsigned int *)t27) = t19;

LAB1:    return t0;
LAB3:    *((char **)t40) = t5;
    goto LAB2;

LAB4:    goto LAB5;

LAB7:    t20 = (t13 + 12U);
    t19 = *((unsigned int *)t20);
    t19 = (t19 * 1U);
    t21 = xsi_get_transient_memory(t19);
    memset(t21, 0, t19);
    t23 = t21;
    memset(t23, (unsigned char)0, t19);
    t24 = (t17 + 36U);
    t25 = *((char **)t24);
    t24 = (t25 + 0);
    t27 = (t13 + 12U);
    t44 = *((unsigned int *)t27);
    t44 = (t44 * 1U);
    memcpy(t24, t21, t44);
    goto LAB5;

LAB10:    t21 = (t6 + 12U);
    t19 = *((unsigned int *)t21);
    t23 = (t13 + 12U);
    t44 = *((unsigned int *)t23);
    t24 = (t26 + 36U);
    t25 = *((char **)t24);
    t10 = *((int *)t25);
    t11 = (t44 - t10);
    t14 = proc_common_v3_00_a_a_1115644090_3212880686_sub_1447842762_3057020925(t1, ((t19)), t11);
    t24 = (t32 + 36U);
    t27 = *((char **)t24);
    t24 = (t27 + 0);
    *((int *)t24) = t14;
    t16 = (t6 + 0U);
    t9 = *((int *)t16);
    t12 = (0 - t9);
    t20 = (t32 + 36U);
    t21 = *((char **)t20);
    t10 = *((int *)t21);
    t11 = (t10 - 1);
    t20 = (t6 + 4U);
    t14 = *((int *)t20);
    t23 = (t6 + 8U);
    t15 = *((int *)t23);
    xsi_vhdl_check_range_of_slice(t9, t14, t15, 0, t11, 1);
    t19 = (t12 * 1U);
    t44 = (0 + t19);
    t24 = (t5 + t44);
    t25 = (t17 + 36U);
    t27 = *((char **)t25);
    t25 = (t13 + 0U);
    t18 = *((int *)t25);
    t28 = (t26 + 36U);
    t30 = *((char **)t28);
    t45 = *((int *)t30);
    t46 = (t45 - t18);
    t28 = (t26 + 36U);
    t31 = *((char **)t28);
    t47 = *((int *)t31);
    t28 = (t32 + 36U);
    t33 = *((char **)t28);
    t48 = *((int *)t33);
    t49 = (t47 + t48);
    t50 = (t49 - 1);
    t28 = (t13 + 4U);
    t51 = *((int *)t28);
    t34 = (t13 + 8U);
    t52 = *((int *)t34);
    xsi_vhdl_check_range_of_slice(t18, t51, t52, t45, t50, 1);
    t53 = (t46 * 1U);
    t54 = (0 + t53);
    t36 = (t27 + t54);
    t37 = (t32 + 36U);
    t55 = *((char **)t37);
    t56 = *((int *)t55);
    t57 = (t56 - 1);
    t58 = (t57 - 0);
    t59 = (t58 * 1);
    t59 = (t59 + 1);
    t60 = (1U * t59);
    memcpy(t36, t24, t60);
    t16 = (t26 + 36U);
    t20 = *((char **)t16);
    t9 = *((int *)t20);
    t16 = (t32 + 36U);
    t21 = *((char **)t16);
    t10 = *((int *)t21);
    t11 = (t9 + t10);
    t16 = (t26 + 36U);
    t23 = *((char **)t16);
    t16 = (t23 + 0);
    *((int *)t16) = t11;
    goto LAB9;

LAB11:;
LAB13:;
}

unsigned char proc_common_v3_00_a_a_1115644090_3212880686_sub_2621524218_3057020925(char *t1, int t2)
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

char *proc_common_v3_00_a_a_1115644090_3212880686_sub_2088672193_3696635108(char *t1, int t2, int t3, char *t4, char *t5)
{
    char t6[72];
    char t7[24];
    char t8[32];
    char t17[16];
    char *t0;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
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
    char *t24;
    char *t25;
    unsigned char t26;
    char *t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    char *t34;
    char *t35;
    int t36;
    int t37;
    int t38;
    char *t39;
    int t40;
    int t41;
    char *t42;
    int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned char t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned char t53;
    char *t54;
    char *t55;
    int t56;
    unsigned int t57;
    int t58;
    unsigned int t59;
    int t60;
    unsigned int t61;
    int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;

LAB0:    t9 = (t8 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 15;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t11 = (15 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t12;
    t10 = (t8 + 16U);
    t13 = (t10 + 0U);
    *((int *)t13) = 0;
    t13 = (t10 + 4U);
    *((int *)t13) = 0;
    t13 = (t10 + 8U);
    *((int *)t13) = 1;
    t14 = (0 - 0);
    t12 = (t14 * 1);
    t12 = (t12 + 1);
    t13 = (t10 + 12U);
    *((unsigned int *)t13) = t12;
    t13 = (t6 + 4U);
    t15 = (t1 + 3440);
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
    *((unsigned int *)t22) = 16U;
    t23 = (t7 + 4U);
    *((int *)t23) = t2;
    t24 = (t7 + 8U);
    *((int *)t24) = t3;
    t25 = (t7 + 12U);
    t26 = (t4 != 0);
    if (t26 == 1)
        goto LAB3;

LAB2:    t27 = (t7 + 16U);
    *((char **)t27) = t5;
    t28 = (t3 - 1);
    t29 = 0;
    t30 = t28;

LAB4:    if (t29 <= t30)
        goto LAB5;

LAB7:    t9 = (t13 + 36U);
    t10 = *((char **)t9);
    t26 = (16U != 16U);
    if (t26 == 1)
        goto LAB14;

LAB15:    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t10, 16U);

LAB1:    return t0;
LAB3:    *((char **)t25) = t4;
    goto LAB2;

LAB5:    t31 = (t2 - 1);
    t32 = 0;
    t33 = t31;

LAB8:    if (t32 <= t33)
        goto LAB9;

LAB11:
LAB6:    if (t29 == t30)
        goto LAB7;

LAB13:    t11 = (t29 + 1);
    t29 = t11;
    goto LAB4;

LAB9:    t34 = (t1 + 1568U);
    t35 = *((char **)t34);
    t36 = (t29 * t2);
    t37 = (t36 + t32);
    t34 = (t5 + 0U);
    t38 = *((int *)t34);
    t39 = (t5 + 8U);
    t40 = *((int *)t39);
    t41 = (t37 - t38);
    t12 = (t41 * t40);
    t42 = (t5 + 4U);
    t43 = *((int *)t42);
    xsi_vhdl_check_range_of_index(t38, t43, t40, t37);
    t44 = (1U * t12);
    t45 = (0 + t44);
    t46 = (t4 + t45);
    t47 = *((unsigned char *)t46);
    t48 = (t47 - 0);
    t49 = (t48 * 1);
    t50 = (1U * t49);
    t51 = (0 + t50);
    t52 = (t35 + t51);
    t53 = *((unsigned char *)t52);
    t54 = (t13 + 36U);
    t55 = *((char **)t54);
    t56 = (t32 - 0);
    t57 = (t56 * 1);
    t58 = (1 - 1);
    xsi_vhdl_check_range_of_index(0, t58, 1, t32);
    t59 = (1U * t57);
    t60 = (t29 - 0);
    t61 = (t60 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t29);
    t62 = (1 - 1);
    t63 = (t62 - 0);
    t64 = (t63 * 1);
    t64 = (t64 + 1);
    t64 = (t64 * 1U);
    t65 = (t64 * t61);
    t66 = (0 + t65);
    t67 = (t66 + t59);
    t54 = (t55 + t67);
    *((unsigned char *)t54) = t53;

LAB10:    if (t32 == t33)
        goto LAB11;

LAB12:    t11 = (t32 + 1);
    t32 = t11;
    goto LAB8;

LAB14:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB15;

LAB16:;
}

static void proc_common_v3_00_a_a_1115644090_3212880686_p_0(char *t0)
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

LAB0:    xsi_set_current_line(472, ng2);
    t2 = (t0 + 708U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 2956);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(473, ng2);
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

LAB8:    xsi_set_current_line(474, ng2);
    t4 = (t0 + 1008U);
    t11 = *((char **)t4);
    t4 = (t0 + 1192U);
    t12 = *((char **)t4);
    t13 = (0 - 0);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t4 = (t12 + t15);
    t18 = (t0 + 3440);
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
    *((int *)t24) = 0;
    t24 = (t21 + 8U);
    *((int *)t24) = 1;
    t25 = (0 - 0);
    t23 = (t25 * 1);
    t23 = (t23 + 1);
    t24 = (t21 + 12U);
    *((unsigned int *)t24) = t23;
    t16 = xsi_base_array_concat(t16, t17, t18, (char)109, t11, (char)97, t4, t19, (char)101);
    t24 = (t0 + 3008);
    t26 = (t24 + 32U);
    t27 = *((char **)t26);
    t28 = (t27 + 40U);
    t29 = *((char **)t28);
    memcpy(t29, t16, 16U);
    xsi_driver_first_trans_fast(t24);
    goto LAB9;

}

static void proc_common_v3_00_a_a_1115644090_3212880686_p_1(char *t0)
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

LAB0:    xsi_set_current_line(479, ng2);
    t1 = (t0 + 916U);
    t2 = *((char **)t1);
    t1 = (t0 + 6800U);
    t3 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t2, t1);
    t4 = (t3 < 16);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t19 = xsi_get_transient_memory(1U);
    memset(t19, 0, 1U);
    t20 = t19;
    memset(t20, (unsigned char)8, 1U);
    t21 = (t0 + 3044);
    t22 = (t21 + 32U);
    t23 = *((char **)t22);
    t24 = (t23 + 40U);
    t25 = *((char **)t24);
    memcpy(t25, t19, 1U);
    xsi_driver_first_trans_fast_port(t21);

LAB2:    t26 = (t0 + 2964);
    *((int *)t26) = 1;

LAB1:    return;
LAB3:    t5 = (t0 + 1192U);
    t6 = *((char **)t5);
    t5 = (t0 + 916U);
    t7 = *((char **)t5);
    t5 = (t0 + 6800U);
    t8 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t7, t5);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t8);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t13 = (t6 + t12);
    t14 = (t0 + 3044);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memcpy(t18, t13, 1U);
    xsi_driver_first_trans_fast_port(t14);
    goto LAB2;

LAB6:    goto LAB2;

}


extern void proc_common_v3_00_a_a_1115644090_3212880686_init()
{
	static char *pe[] = {(void *)proc_common_v3_00_a_a_1115644090_3212880686_p_0,(void *)proc_common_v3_00_a_a_1115644090_3212880686_p_1};
	static char *se[] = {(void *)proc_common_v3_00_a_a_1115644090_3212880686_sub_1447842762_3057020925,(void *)proc_common_v3_00_a_a_1115644090_3212880686_sub_4190154379_3057020925,(void *)proc_common_v3_00_a_a_1115644090_3212880686_sub_2621524218_3057020925,(void *)proc_common_v3_00_a_a_1115644090_3212880686_sub_2088672193_3696635108};
	xsi_register_didat("proc_common_v3_00_a_a_1115644090_3212880686", "isim/testbench_isim_beh.exe.sim/proc_common_v3_00_a/a_1115644090_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
