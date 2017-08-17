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
extern char *IEEE_P_2592010699;
extern char *STD_STANDARD;
extern char *PROC_COMMON_V3_00_A_P_2444876401;
static const char *ng3 = "G:/Xilinx/14.7/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/plbv46_slave_single_v1_01_a/hdl/vhdl/plb_address_decoder.vhd";

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
char *ieee_p_2592010699_sub_1697423399_503743352(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );
int proc_common_v3_00_a_p_2444876401_sub_3271517850_3834616973(char *, int );


char *plbv46_slave_single_v1_01_a_a_1358028990_3306564128_sub_221363100_229454594(char *t1, char *t2, char *t3, int t4)
{
    char t5[144];
    char t6[16];
    char t7[16];
    char t14[64];
    char t18[32];
    char t26[64];
    char *t0;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    int t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned char t33;
    char *t34;
    char *t35;
    char *t36;
    int t37;
    int t38;
    int t39;
    char *t40;
    int t41;
    char *t42;
    int t43;
    int t44;
    unsigned int t45;
    char *t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;

LAB0:    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 63;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (63 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = (t5 + 4U);
    t12 = ((IEEE_P_2592010699) + 2332);
    t13 = (t9 + 52U);
    *((char **)t13) = t12;
    t15 = (t9 + 36U);
    *((char **)t15) = t14;
    xsi_type_set_default_value(t12, t14, t7);
    t16 = (t9 + 40U);
    *((char **)t16) = t7;
    t17 = (t9 + 48U);
    *((unsigned int *)t17) = 64U;
    t19 = (t18 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 0;
    t20 = (t19 + 4U);
    *((int *)t20) = 1;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t21 = (1 - 0);
    t11 = (t21 * 1);
    t11 = (t11 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t11;
    t20 = (t18 + 16U);
    t22 = (t20 + 0U);
    *((int *)t22) = 0;
    t22 = (t20 + 4U);
    *((int *)t22) = 31;
    t22 = (t20 + 8U);
    *((int *)t22) = 1;
    t23 = (31 - 0);
    t11 = (t23 * 1);
    t11 = (t11 + 1);
    t22 = (t20 + 12U);
    *((unsigned int *)t22) = t11;
    t22 = (t5 + 72U);
    t24 = (t1 + 14176);
    t25 = (t22 + 52U);
    *((char **)t25) = t24;
    t27 = (t22 + 36U);
    *((char **)t27) = t26;
    xsi_type_set_default_value(t24, t26, 0);
    t28 = (t22 + 40U);
    t29 = (t24 + 44U);
    t30 = *((char **)t29);
    *((char **)t28) = t30;
    t31 = (t22 + 48U);
    *((unsigned int *)t31) = 64U;
    t32 = (t6 + 4U);
    t33 = (t2 != 0);
    if (t33 == 1)
        goto LAB3;

LAB2:    t34 = (t6 + 8U);
    *((char **)t34) = t3;
    t35 = (t6 + 12U);
    *((int *)t35) = t4;
    t36 = (t3 + 12U);
    t11 = *((unsigned int *)t36);
    t37 = (t11 - 1);
    t38 = 0;
    t39 = t37;

LAB4:    if (t38 <= t39)
        goto LAB5;

LAB7:    t8 = (t22 + 36U);
    t12 = *((char **)t8);
    t33 = (64U != 64U);
    if (t33 == 1)
        goto LAB9;

LAB10:    t0 = xsi_get_transient_memory(64U);
    memcpy(t0, t12, 64U);

LAB1:    return t0;
LAB3:    *((char **)t32) = t2;
    goto LAB2;

LAB5:    t40 = (t3 + 0U);
    t41 = *((int *)t40);
    t42 = (t3 + 8U);
    t43 = *((int *)t42);
    t44 = (t38 - t41);
    t45 = (t44 * t43);
    t46 = (t3 + 4U);
    t47 = *((int *)t46);
    xsi_vhdl_check_range_of_index(t41, t47, t43, t38);
    t48 = (64U * t45);
    t49 = (0 + t48);
    t50 = (t2 + t49);
    t51 = (t9 + 36U);
    t52 = *((char **)t51);
    t51 = (t52 + 0);
    memcpy(t51, t50, 64U);
    t8 = (t9 + 36U);
    t12 = *((char **)t8);
    t8 = (t7 + 0U);
    t10 = *((int *)t8);
    t21 = (64 - t4);
    t11 = (t21 - t10);
    t13 = (t7 + 4U);
    t23 = *((int *)t13);
    t15 = (t7 + 8U);
    t37 = *((int *)t15);
    xsi_vhdl_check_range_of_slice(t10, t23, t37, t21, 63, 1);
    t45 = (t11 * 1U);
    t48 = (0 + t45);
    t16 = (t12 + t48);
    t17 = (t22 + 36U);
    t19 = *((char **)t17);
    t41 = (t38 - 0);
    t49 = (t41 * 1);
    xsi_vhdl_check_range_of_index(0, 1, 1, t38);
    t43 = (32 - 1);
    t44 = (t43 - 0);
    t53 = (t44 * 1);
    t53 = (t53 + 1);
    t53 = (t53 * 1U);
    t54 = (t53 * t49);
    t55 = (0 + t54);
    t17 = (t19 + t55);
    t47 = (64 - t4);
    t56 = (63 - t47);
    t57 = (t56 * 1);
    t57 = (t57 + 1);
    t58 = (1U * t57);
    memcpy(t17, t16, t58);

LAB6:    if (t38 == t39)
        goto LAB7;

LAB8:    t10 = (t38 + 1);
    t38 = t10;
    goto LAB4;

LAB9:    xsi_size_not_matching(64U, 64U, 0);
    goto LAB10;

LAB11:;
}

int plbv46_slave_single_v1_01_a_a_1358028990_3306564128_sub_4080491193_229454594(char *t1, char *t2, char *t3)
{
    char t4[72];
    char t5[24];
    char t6[16];
    char t12[16];
    char t15[16];
    char t32[16];
    int t0;
    int t7;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    int t13;
    int t14;
    int t16;
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
    unsigned char t27;
    char *t28;
    char *t29;
    unsigned char t30;
    char *t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    int t38;

LAB0:    t7 = (32 - 1);
    t8 = (t6 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = t7;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (t7 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    memcpy(t12, t6, 16U);
    t13 = (32 - 1);
    t14 = (t13 - 0);
    t11 = (t14 * 1);
    t11 = (t11 + 1);
    t11 = (t11 * 1U);
    t16 = (32 - 1);
    t9 = (t15 + 0U);
    t17 = (t9 + 0U);
    *((int *)t17) = 0;
    t17 = (t9 + 4U);
    *((int *)t17) = t16;
    t17 = (t9 + 8U);
    *((int *)t17) = 1;
    t18 = (t16 - 0);
    t19 = (t18 * 1);
    t19 = (t19 + 1);
    t17 = (t9 + 12U);
    *((unsigned int *)t17) = t19;
    t17 = (t4 + 4U);
    t20 = ((IEEE_P_2592010699) + 2332);
    t21 = (t17 + 52U);
    *((char **)t21) = t20;
    t22 = (char *)alloca(t11);
    t23 = (t17 + 36U);
    *((char **)t23) = t22;
    xsi_type_set_default_value(t20, t22, t15);
    t24 = (t17 + 40U);
    *((char **)t24) = t15;
    t25 = (t17 + 48U);
    *((unsigned int *)t25) = t11;
    t26 = (t5 + 4U);
    t27 = (t2 != 0);
    if (t27 == 1)
        goto LAB3;

LAB2:    t28 = (t5 + 8U);
    *((char **)t28) = t6;
    t29 = (t5 + 12U);
    t30 = (t3 != 0);
    if (t30 == 1)
        goto LAB5;

LAB4:    t31 = (t5 + 16U);
    *((char **)t31) = t12;
    t33 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t32, t2, t6, t3, t12);
    t34 = (t17 + 36U);
    t35 = *((char **)t34);
    t34 = (t35 + 0);
    t36 = (t32 + 12U);
    t19 = *((unsigned int *)t36);
    t37 = (1U * t19);
    memcpy(t34, t33, t37);
    t7 = (32 - 1);
    t10 = 0;
    t13 = t7;

LAB6:    if (t10 <= t13)
        goto LAB7;

LAB9:    t0 = 32;

LAB1:    return t0;
LAB3:    *((char **)t26) = t2;
    goto LAB2;

LAB5:    *((char **)t29) = t3;
    goto LAB4;

LAB7:    t8 = (t17 + 36U);
    t9 = *((char **)t8);
    t8 = (t15 + 0U);
    t14 = *((int *)t8);
    t20 = (t15 + 8U);
    t16 = *((int *)t20);
    t18 = (t10 - t14);
    t11 = (t18 * t16);
    t21 = (t15 + 4U);
    t38 = *((int *)t21);
    xsi_vhdl_check_range_of_index(t14, t38, t16, t10);
    t19 = (1U * t11);
    t37 = (0 + t19);
    t23 = (t9 + t37);
    t27 = *((unsigned char *)t23);
    t30 = (t27 == (unsigned char)3);
    if (t30 != 0)
        goto LAB10;

LAB12:
LAB11:
LAB8:    if (t10 == t13)
        goto LAB9;

LAB14:    t7 = (t10 + 1);
    t10 = t7;
    goto LAB6;

LAB10:    t0 = t10;
    goto LAB1;

LAB13:    goto LAB11;

LAB15:;
}

char *plbv46_slave_single_v1_01_a_a_1358028990_3306564128_sub_1573467964_229454594(char *t1, char *t2)
{
    char t3[72];
    char t4[16];
    char t5[32];
    char t12[16];
    char t17[8];
    char *t0;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    char *t10;
    int t11;
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
    unsigned char t24;
    char *t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    int t38;
    int t39;
    int t40;
    unsigned int t41;
    int t42;
    int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    int t48;
    char *t49;
    char *t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;

LAB0:    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 1;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (1 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t7 = (t5 + 16U);
    t10 = (t7 + 0U);
    *((int *)t10) = 0;
    t10 = (t7 + 4U);
    *((int *)t10) = 31;
    t10 = (t7 + 8U);
    *((int *)t10) = 1;
    t11 = (31 - 0);
    t9 = (t11 * 1);
    t9 = (t9 + 1);
    t10 = (t7 + 12U);
    *((unsigned int *)t10) = t9;
    t10 = (t12 + 0U);
    t13 = (t10 + 0U);
    *((int *)t13) = 0;
    t13 = (t10 + 4U);
    *((int *)t13) = 0;
    t13 = (t10 + 8U);
    *((int *)t13) = 1;
    t14 = (0 - 0);
    t9 = (t14 * 1);
    t9 = (t9 + 1);
    t13 = (t10 + 12U);
    *((unsigned int *)t13) = t9;
    t13 = (t3 + 4U);
    t15 = (t1 + 13996);
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
    *((unsigned int *)t22) = 4U;
    t23 = (t4 + 4U);
    t24 = (t2 != 0);
    if (t24 == 1)
        goto LAB3;

LAB2:    t25 = (t4 + 8U);
    *((char **)t25) = t5;
    t26 = (2U / 2);
    t27 = (t26 - 1);
    t28 = 0;
    t29 = t27;

LAB4:    if (t28 <= t29)
        goto LAB5;

LAB7:    t6 = (t13 + 36U);
    t7 = *((char **)t6);
    t24 = (4U != 4U);
    if (t24 == 1)
        goto LAB9;

LAB10:    t0 = xsi_get_transient_memory(4U);
    memcpy(t0, t7, 4U);

LAB1:    return t0;
LAB3:    *((char **)t23) = t2;
    goto LAB2;

LAB5:    t30 = (t28 * 2);
    t31 = (t30 - 0);
    t9 = (t31 * 1);
    xsi_vhdl_check_range_of_index(0, 1, 1, t30);
    t32 = (32 - 1);
    t33 = (t32 - 0);
    t34 = (t33 * 1);
    t34 = (t34 + 1);
    t34 = (t34 * 1U);
    t35 = (t34 * t9);
    t36 = (0 + t35);
    t37 = (t2 + t36);
    t38 = (t28 * 2);
    t39 = (t38 + 1);
    t40 = (t39 - 0);
    t41 = (t40 * 1);
    xsi_vhdl_check_range_of_index(0, 1, 1, t39);
    t42 = (32 - 1);
    t43 = (t42 - 0);
    t44 = (t43 * 1);
    t44 = (t44 + 1);
    t44 = (t44 * 1U);
    t45 = (t44 * t41);
    t46 = (0 + t45);
    t47 = (t2 + t46);
    t48 = plbv46_slave_single_v1_01_a_a_1358028990_3306564128_sub_4080491193_229454594(t1, t37, t47);
    t49 = (t13 + 36U);
    t50 = *((char **)t49);
    t51 = (t28 - 0);
    t52 = (t51 * 1);
    xsi_vhdl_check_range_of_index(0, 0, 1, t28);
    t53 = (4U * t52);
    t54 = (0 + t53);
    t49 = (t50 + t54);
    *((int *)t49) = t48;

LAB6:    if (t28 == t29)
        goto LAB7;

LAB8:    t8 = (t28 + 1);
    t28 = t8;
    goto LAB4;

LAB9:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB10;

LAB11:;
}

int plbv46_slave_single_v1_01_a_a_1358028990_3306564128_sub_3202688317_229454594(char *t1, char *t2, char *t3)
{
    char t4[280];
    char t5[16];
    char t11[8];
    char t17[8];
    char t23[8];
    char t29[8];
    int t0;
    char *t6;
    unsigned int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    unsigned char t33;
    char *t34;
    char *t35;
    char *t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    char *t42;
    int t43;
    int t44;
    unsigned int t45;
    char *t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    int t51;
    int t52;
    char *t53;
    char *t54;

LAB0:    t6 = (t3 + 12U);
    t7 = *((unsigned int *)t6);
    t8 = (t4 + 4U);
    t9 = ((STD_STANDARD) + 240);
    t10 = (t8 + 52U);
    *((char **)t10) = t9;
    t12 = (t8 + 36U);
    *((char **)t12) = t11;
    *((unsigned int *)t11) = t7;
    t13 = (t8 + 48U);
    *((unsigned int *)t13) = 4U;
    t14 = (t4 + 72U);
    t15 = ((STD_STANDARD) + 240);
    t16 = (t14 + 52U);
    *((char **)t16) = t15;
    t18 = (t14 + 36U);
    *((char **)t18) = t17;
    *((int *)t17) = 2;
    t19 = (t14 + 48U);
    *((unsigned int *)t19) = 4U;
    t20 = (t4 + 140U);
    t21 = ((STD_STANDARD) + 240);
    t22 = (t20 + 52U);
    *((char **)t22) = t21;
    t24 = (t20 + 36U);
    *((char **)t24) = t23;
    *((int *)t23) = 0;
    t25 = (t20 + 48U);
    *((unsigned int *)t25) = 4U;
    t26 = (t4 + 208U);
    t27 = ((STD_STANDARD) + 240);
    t28 = (t26 + 52U);
    *((char **)t28) = t27;
    t30 = (t26 + 36U);
    *((char **)t30) = t29;
    *((int *)t29) = 0;
    t31 = (t26 + 48U);
    *((unsigned int *)t31) = 4U;
    t32 = (t5 + 4U);
    t33 = (t2 != 0);
    if (t33 == 1)
        goto LAB3;

LAB2:    t34 = (t5 + 8U);
    *((char **)t34) = t3;
    t35 = (t8 + 36U);
    t36 = *((char **)t35);
    t37 = *((int *)t36);
    t38 = (t37 - 1);
    t39 = 0;
    t40 = t38;

LAB4:    if (t39 <= t40)
        goto LAB5;

LAB7:    t6 = (t14 + 36U);
    t9 = *((char **)t6);
    t37 = *((int *)t9);
    t38 = proc_common_v3_00_a_p_2444876401_sub_3271517850_3834616973(PROC_COMMON_V3_00_A_P_2444876401, t37);
    t6 = (t26 + 36U);
    t10 = *((char **)t6);
    t6 = (t10 + 0);
    *((int *)t6) = t38;
    t6 = (t26 + 36U);
    t9 = *((char **)t6);
    t37 = *((int *)t9);
    t0 = t37;

LAB1:    return t0;
LAB3:    *((char **)t32) = t2;
    goto LAB2;

LAB5:    t35 = (t3 + 0U);
    t41 = *((int *)t35);
    t42 = (t3 + 8U);
    t43 = *((int *)t42);
    t44 = (t39 - t41);
    t45 = (t44 * t43);
    t46 = (t3 + 4U);
    t47 = *((int *)t46);
    xsi_vhdl_check_range_of_index(t41, t47, t43, t39);
    t48 = (4U * t45);
    t49 = (0 + t48);
    t50 = (t2 + t49);
    t51 = *((int *)t50);
    t52 = (t51 * 4);
    t53 = (t20 + 36U);
    t54 = *((char **)t53);
    t53 = (t54 + 0);
    *((int *)t53) = t52;
    t6 = (t20 + 36U);
    t9 = *((char **)t6);
    t37 = *((int *)t9);
    t6 = (t14 + 36U);
    t10 = *((char **)t6);
    t38 = *((int *)t10);
    t33 = (t37 > t38);
    if (t33 != 0)
        goto LAB8;

LAB10:
LAB9:
LAB6:    if (t39 == t40)
        goto LAB7;

LAB11:    t37 = (t39 + 1);
    t39 = t37;
    goto LAB4;

LAB8:    t6 = (t20 + 36U);
    t12 = *((char **)t6);
    t41 = *((int *)t12);
    t6 = (t14 + 36U);
    t13 = *((char **)t6);
    t6 = (t13 + 0);
    *((int *)t6) = t41;
    goto LAB9;

LAB12:;
}

static void plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_0(char *t0)
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

LAB0:    xsi_set_current_line(319, ng3);

LAB3:    t1 = (t0 + 3344U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4080U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 12916);
    t7 = (t1 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 12680);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_1(char *t0)
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

LAB0:    xsi_set_current_line(320, ng3);

LAB3:    t1 = (t0 + 3344U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4264U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 12952);
    t7 = (t1 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 12688);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_2(char *t0)
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
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(321, ng3);

LAB3:    t1 = (t0 + 3344U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4448U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 6196U);
    t7 = *((char **)t1);
    t8 = *((unsigned char *)t7);
    t9 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t8);
    t10 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t6, t9);
    t1 = (t0 + 12988);
    t11 = (t1 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t10;
    xsi_driver_first_trans_fast(t1);

LAB2:    t15 = (t0 + 12696);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_3(char *t0)
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
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(322, ng3);

LAB3:    t1 = (t0 + 3344U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4448U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 6196U);
    t7 = *((char **)t1);
    t8 = *((unsigned char *)t7);
    t9 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t6, t8);
    t1 = (t0 + 13024);
    t10 = (t1 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast(t1);

LAB2:    t14 = (t0 + 12704);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_4(char *t0)
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

LAB0:    xsi_set_current_line(323, ng3);

LAB3:    t1 = (t0 + 3344U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4540U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 13060);
    t7 = (t1 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 12712);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_5(char *t0)
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

LAB0:    xsi_set_current_line(350, ng3);
    t2 = (t0 + 3228U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 12720);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(351, ng3);
    t4 = (t0 + 3344U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 4080U);
    t12 = *((char **)t4);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    t8 = t14;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 3988U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB14;

LAB15:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 3252U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(352, ng3);
    t4 = (t0 + 13096);
    t15 = (t4 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    t8 = (unsigned char)1;
    goto LAB13;

LAB14:    xsi_set_current_line(354, ng3);
    t2 = (t0 + 3804U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t2 = (t0 + 13096);
    t9 = (t2 + 32U);
    t12 = *((char **)t9);
    t15 = (t12 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t6;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_6(char *t0)
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
    char *t19;
    char *t20;
    int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;

LAB0:    xsi_set_current_line(367, ng3);
    t2 = (t0 + 3228U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 12728);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(368, ng3);
    t4 = (t0 + 3344U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 4080U);
    t12 = *((char **)t4);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    t8 = t14;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 3988U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB14;

LAB15:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 3252U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(369, ng3);
    t4 = xsi_get_transient_memory(5U);
    memset(t4, 0, 5U);
    t15 = t4;
    memset(t15, (unsigned char)2, 5U);
    t16 = (t0 + 13132);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    memcpy(t20, t4, 5U);
    xsi_driver_first_trans_fast(t16);
    goto LAB9;

LAB11:    t8 = (unsigned char)1;
    goto LAB13;

LAB14:    xsi_set_current_line(371, ng3);
    t2 = (t0 + 3436U);
    t5 = *((char **)t2);
    t2 = (t0 + 7096U);
    t9 = *((char **)t2);
    t21 = *((int *)t9);
    t22 = (32 - t21);
    t23 = (t22 - 0);
    t24 = (t23 * 1U);
    t25 = (0 + t24);
    t2 = (t5 + t25);
    t12 = (t0 + 13132);
    t15 = (t12 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memcpy(t18, t2, 5U);
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

}

static void plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_7(char *t0)
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
    int t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;

LAB0:    xsi_set_current_line(429, ng3);
    t2 = (t0 + 3228U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 12736);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(430, ng3);
    t4 = (t0 + 3344U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 4080U);
    t12 = *((char **)t4);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    t8 = t14;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 3988U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB14;

LAB15:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 3252U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(431, ng3);
    t4 = (t0 + 13168);
    t15 = (t4 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_first_trans_delta(t4, 0U, 1, 0LL);
    goto LAB9;

LAB11:    t8 = (unsigned char)1;
    goto LAB13;

LAB14:    xsi_set_current_line(433, ng3);
    t2 = (t0 + 5092U);
    t5 = *((char **)t2);
    t2 = (t0 + 7164U);
    t9 = *((char **)t2);
    t19 = *((int *)t9);
    t20 = (t19 - 0);
    t21 = (t20 * 1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t2 = (t5 + t23);
    t6 = *((unsigned char *)t2);
    t12 = (t0 + 13168);
    t15 = (t12 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = t6;
    xsi_driver_first_trans_delta(t12, 0U, 1, 0LL);
    goto LAB9;

}

static void plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_8(char *t0)
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
    int t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;

LAB0:    xsi_set_current_line(442, ng3);
    t2 = (t0 + 3228U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 12744);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(443, ng3);
    t4 = (t0 + 3344U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 4264U);
    t12 = *((char **)t4);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    t8 = t14;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 4172U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB14;

LAB15:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 3252U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(444, ng3);
    t4 = (t0 + 13204);
    t15 = (t4 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_first_trans_delta(t4, 0U, 1, 0LL);
    goto LAB9;

LAB11:    t8 = (unsigned char)1;
    goto LAB13;

LAB14:    xsi_set_current_line(446, ng3);
    t2 = (t0 + 6380U);
    t5 = *((char **)t2);
    t2 = (t0 + 7164U);
    t9 = *((char **)t2);
    t19 = *((int *)t9);
    t20 = (t19 - 0);
    t21 = (t20 * 1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t2 = (t5 + t23);
    t6 = *((unsigned char *)t2);
    t12 = (t0 + 13204);
    t15 = (t12 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = t6;
    xsi_driver_first_trans_delta(t12, 0U, 1, 0LL);
    goto LAB9;

}

static void plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_9(char *t0)
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
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;

LAB0:    xsi_set_current_line(553, ng3);
    t2 = (t0 + 3228U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 12752);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(554, ng3);
    t4 = (t0 + 3344U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 4540U);
    t12 = *((char **)t4);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    t8 = t14;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(557, ng3);
    t2 = (t0 + 5552U);
    t4 = *((char **)t2);
    t19 = (0 - 0);
    t20 = (t19 * 1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t2 = (t4 + t22);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 13240);
    t9 = (t5 + 32U);
    t12 = *((char **)t9);
    t15 = (t12 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t1;
    xsi_driver_first_trans_fast(t5);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 3252U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(555, ng3);
    t4 = (t0 + 13240);
    t15 = (t4 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    t8 = (unsigned char)1;
    goto LAB13;

}

static void plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_10(char *t0)
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
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    xsi_set_current_line(574, ng3);
    t2 = (t0 + 3228U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 12760);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(575, ng3);
    t4 = (t0 + 5920U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 4356U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 3252U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(576, ng3);
    t4 = (t0 + 13276);
    t11 = (t4 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_delta(t4, 0U, 1, 0LL);
    goto LAB9;

LAB11:    xsi_set_current_line(578, ng3);
    t2 = (t0 + 5276U);
    t5 = *((char **)t2);
    t2 = (t0 + 8116U);
    t8 = *((char **)t2);
    t15 = *((int *)t8);
    t16 = (t15 - 0);
    t17 = (t16 * 1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t2 = (t5 + t19);
    t6 = *((unsigned char *)t2);
    t11 = (t0 + 13276);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t20 = *((char **)t14);
    *((unsigned char *)t20) = t6;
    xsi_driver_first_trans_delta(t11, 0U, 1, 0LL);
    goto LAB9;

}

static void plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_11(char *t0)
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
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    xsi_set_current_line(587, ng3);
    t2 = (t0 + 3228U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 12768);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(588, ng3);
    t4 = (t0 + 6012U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 4356U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 3252U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(589, ng3);
    t4 = (t0 + 13312);
    t11 = (t4 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_delta(t4, 0U, 1, 0LL);
    goto LAB9;

LAB11:    xsi_set_current_line(591, ng3);
    t2 = (t0 + 5276U);
    t5 = *((char **)t2);
    t2 = (t0 + 8116U);
    t8 = *((char **)t2);
    t15 = *((int *)t8);
    t16 = (t15 - 0);
    t17 = (t16 * 1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t2 = (t5 + t19);
    t6 = *((unsigned char *)t2);
    t11 = (t0 + 13312);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t20 = *((char **)t14);
    *((unsigned char *)t20) = t6;
    xsi_driver_first_trans_delta(t11, 0U, 1, 0LL);
    goto LAB9;

}

static void plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_12(char *t0)
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
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    xsi_set_current_line(574, ng3);
    t2 = (t0 + 3228U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 12776);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(575, ng3);
    t4 = (t0 + 5920U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 4356U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 3252U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(576, ng3);
    t4 = (t0 + 13348);
    t11 = (t4 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_delta(t4, 1U, 1, 0LL);
    goto LAB9;

LAB11:    xsi_set_current_line(578, ng3);
    t2 = (t0 + 5276U);
    t5 = *((char **)t2);
    t2 = (t0 + 8184U);
    t8 = *((char **)t2);
    t15 = *((int *)t8);
    t16 = (t15 - 0);
    t17 = (t16 * 1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t2 = (t5 + t19);
    t6 = *((unsigned char *)t2);
    t11 = (t0 + 13348);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t20 = *((char **)t14);
    *((unsigned char *)t20) = t6;
    xsi_driver_first_trans_delta(t11, 1U, 1, 0LL);
    goto LAB9;

}

static void plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_13(char *t0)
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
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    xsi_set_current_line(587, ng3);
    t2 = (t0 + 3228U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 12784);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(588, ng3);
    t4 = (t0 + 6012U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 4356U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 3252U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(589, ng3);
    t4 = (t0 + 13384);
    t11 = (t4 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_delta(t4, 1U, 1, 0LL);
    goto LAB9;

LAB11:    xsi_set_current_line(591, ng3);
    t2 = (t0 + 5276U);
    t5 = *((char **)t2);
    t2 = (t0 + 8184U);
    t8 = *((char **)t2);
    t15 = *((int *)t8);
    t16 = (t15 - 0);
    t17 = (t16 * 1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t2 = (t5 + t19);
    t6 = *((unsigned char *)t2);
    t11 = (t0 + 13384);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t20 = *((char **)t14);
    *((unsigned char *)t20) = t6;
    xsi_driver_first_trans_delta(t11, 1U, 1, 0LL);
    goto LAB9;

}

static void plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_14(char *t0)
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
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    xsi_set_current_line(574, ng3);
    t2 = (t0 + 3228U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 12792);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(575, ng3);
    t4 = (t0 + 5920U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 4356U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 3252U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(576, ng3);
    t4 = (t0 + 13420);
    t11 = (t4 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_delta(t4, 2U, 1, 0LL);
    goto LAB9;

LAB11:    xsi_set_current_line(578, ng3);
    t2 = (t0 + 5276U);
    t5 = *((char **)t2);
    t2 = (t0 + 8252U);
    t8 = *((char **)t2);
    t15 = *((int *)t8);
    t16 = (t15 - 0);
    t17 = (t16 * 1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t2 = (t5 + t19);
    t6 = *((unsigned char *)t2);
    t11 = (t0 + 13420);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t20 = *((char **)t14);
    *((unsigned char *)t20) = t6;
    xsi_driver_first_trans_delta(t11, 2U, 1, 0LL);
    goto LAB9;

}

static void plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_15(char *t0)
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
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    xsi_set_current_line(587, ng3);
    t2 = (t0 + 3228U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 12800);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(588, ng3);
    t4 = (t0 + 6012U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 4356U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 3252U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(589, ng3);
    t4 = (t0 + 13456);
    t11 = (t4 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_delta(t4, 2U, 1, 0LL);
    goto LAB9;

LAB11:    xsi_set_current_line(591, ng3);
    t2 = (t0 + 5276U);
    t5 = *((char **)t2);
    t2 = (t0 + 8252U);
    t8 = *((char **)t2);
    t15 = *((int *)t8);
    t16 = (t15 - 0);
    t17 = (t16 * 1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t2 = (t5 + t19);
    t6 = *((unsigned char *)t2);
    t11 = (t0 + 13456);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t20 = *((char **)t14);
    *((unsigned char *)t20) = t6;
    xsi_driver_first_trans_delta(t11, 2U, 1, 0LL);
    goto LAB9;

}

static void plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_16(char *t0)
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
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    xsi_set_current_line(574, ng3);
    t2 = (t0 + 3228U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 12808);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(575, ng3);
    t4 = (t0 + 5920U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 4356U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 3252U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(576, ng3);
    t4 = (t0 + 13492);
    t11 = (t4 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_delta(t4, 3U, 1, 0LL);
    goto LAB9;

LAB11:    xsi_set_current_line(578, ng3);
    t2 = (t0 + 5276U);
    t5 = *((char **)t2);
    t2 = (t0 + 8320U);
    t8 = *((char **)t2);
    t15 = *((int *)t8);
    t16 = (t15 - 0);
    t17 = (t16 * 1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t2 = (t5 + t19);
    t6 = *((unsigned char *)t2);
    t11 = (t0 + 13492);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t20 = *((char **)t14);
    *((unsigned char *)t20) = t6;
    xsi_driver_first_trans_delta(t11, 3U, 1, 0LL);
    goto LAB9;

}

static void plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_17(char *t0)
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
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    xsi_set_current_line(587, ng3);
    t2 = (t0 + 3228U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 12816);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(588, ng3);
    t4 = (t0 + 6012U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 4356U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 3252U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(589, ng3);
    t4 = (t0 + 13528);
    t11 = (t4 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_delta(t4, 3U, 1, 0LL);
    goto LAB9;

LAB11:    xsi_set_current_line(591, ng3);
    t2 = (t0 + 5276U);
    t5 = *((char **)t2);
    t2 = (t0 + 8320U);
    t8 = *((char **)t2);
    t15 = *((int *)t8);
    t16 = (t15 - 0);
    t17 = (t16 * 1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t2 = (t5 + t19);
    t6 = *((unsigned char *)t2);
    t11 = (t0 + 13528);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t20 = *((char **)t14);
    *((unsigned char *)t20) = t6;
    xsi_driver_first_trans_delta(t11, 3U, 1, 0LL);
    goto LAB9;

}

static void plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_18(char *t0)
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
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    xsi_set_current_line(574, ng3);
    t2 = (t0 + 3228U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 12824);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(575, ng3);
    t4 = (t0 + 5920U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 4356U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 3252U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(576, ng3);
    t4 = (t0 + 13564);
    t11 = (t4 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_delta(t4, 4U, 1, 0LL);
    goto LAB9;

LAB11:    xsi_set_current_line(578, ng3);
    t2 = (t0 + 5276U);
    t5 = *((char **)t2);
    t2 = (t0 + 8388U);
    t8 = *((char **)t2);
    t15 = *((int *)t8);
    t16 = (t15 - 0);
    t17 = (t16 * 1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t2 = (t5 + t19);
    t6 = *((unsigned char *)t2);
    t11 = (t0 + 13564);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t20 = *((char **)t14);
    *((unsigned char *)t20) = t6;
    xsi_driver_first_trans_delta(t11, 4U, 1, 0LL);
    goto LAB9;

}

static void plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_19(char *t0)
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
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    xsi_set_current_line(587, ng3);
    t2 = (t0 + 3228U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 12832);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(588, ng3);
    t4 = (t0 + 6012U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 4356U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 3252U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(589, ng3);
    t4 = (t0 + 13600);
    t11 = (t4 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_delta(t4, 4U, 1, 0LL);
    goto LAB9;

LAB11:    xsi_set_current_line(591, ng3);
    t2 = (t0 + 5276U);
    t5 = *((char **)t2);
    t2 = (t0 + 8388U);
    t8 = *((char **)t2);
    t15 = *((int *)t8);
    t16 = (t15 - 0);
    t17 = (t16 * 1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t2 = (t5 + t19);
    t6 = *((unsigned char *)t2);
    t11 = (t0 + 13600);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t20 = *((char **)t14);
    *((unsigned char *)t20) = t6;
    xsi_driver_first_trans_delta(t11, 4U, 1, 0LL);
    goto LAB9;

}

static void plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_20(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(646, ng3);

LAB3:    t1 = (t0 + 5644U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 13636);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 12840);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_21(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(647, ng3);

LAB3:    t1 = (t0 + 5184U);
    t2 = *((char **)t1);
    t1 = (t0 + 13672);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 1U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 12848);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_22(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(648, ng3);

LAB3:    t1 = (t0 + 5368U);
    t2 = *((char **)t1);
    t1 = (t0 + 13708);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 5U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 12856);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_23(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(649, ng3);

LAB3:    t1 = (t0 + 5460U);
    t2 = *((char **)t1);
    t1 = (t0 + 13744);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 5U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 12864);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_24(char *t0)
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

LAB0:    xsi_set_current_line(654, ng3);

LAB3:    t1 = (t0 + 5552U);
    t2 = *((char **)t1);
    t3 = (0 - 0);
    t4 = (t3 * 1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 13780);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 12872);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void plbv46_slave_single_v1_01_a_a_1358028990_3306564128_init()
{
	static char *pe[] = {(void *)plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_0,(void *)plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_1,(void *)plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_2,(void *)plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_3,(void *)plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_4,(void *)plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_5,(void *)plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_6,(void *)plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_7,(void *)plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_8,(void *)plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_9,(void *)plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_10,(void *)plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_11,(void *)plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_12,(void *)plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_13,(void *)plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_14,(void *)plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_15,(void *)plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_16,(void *)plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_17,(void *)plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_18,(void *)plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_19,(void *)plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_20,(void *)plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_21,(void *)plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_22,(void *)plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_23,(void *)plbv46_slave_single_v1_01_a_a_1358028990_3306564128_p_24};
	static char *se[] = {(void *)plbv46_slave_single_v1_01_a_a_1358028990_3306564128_sub_221363100_229454594,(void *)plbv46_slave_single_v1_01_a_a_1358028990_3306564128_sub_4080491193_229454594,(void *)plbv46_slave_single_v1_01_a_a_1358028990_3306564128_sub_1573467964_229454594,(void *)plbv46_slave_single_v1_01_a_a_1358028990_3306564128_sub_3202688317_229454594};
	xsi_register_didat("plbv46_slave_single_v1_01_a_a_1358028990_3306564128", "isim/testbench_isim_beh.exe.sim/plbv46_slave_single_v1_01_a/a_1358028990_3306564128.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
