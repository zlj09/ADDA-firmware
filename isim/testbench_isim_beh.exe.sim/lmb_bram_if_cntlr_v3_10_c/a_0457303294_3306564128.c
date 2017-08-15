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
static const char *ng1 = "Function fix_ab ended without a return statement";
extern char *IEEE_P_3499444699;
extern char *IEEE_P_2592010699;
static const char *ng4 = "G:/Xilinx/14.7/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/lmb_bram_if_cntlr_v3_10_c/hdl/vhdl/pselect_mask.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_2592010699_sub_3293060193_503743352(char *, char *, char *, char *, unsigned char );
char *ieee_p_3499444699_sub_2213602152_3536714472(char *, char *, int , int );


int lmb_bram_if_cntlr_v3_10_c_a_0457303294_3306564128_sub_3545198804_229454594(char *t1, char *t2, char *t3)
{
    char t4[72];
    char t5[16];
    char t9[8];
    int t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    char *t14;
    char *t15;
    int t16;
    char *t17;
    int t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    char *t25;
    int t26;
    char *t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned char t34;
    unsigned char t35;
    char *t36;
    char *t37;
    int t38;
    int t39;
    char *t40;

LAB0:    t6 = (t4 + 4U);
    t7 = ((STD_STANDARD) + 552);
    t8 = (t6 + 52U);
    *((char **)t8) = t7;
    t10 = (t6 + 36U);
    *((char **)t10) = t9;
    *((int *)t9) = 0;
    t11 = (t6 + 48U);
    *((unsigned int *)t11) = 4U;
    t12 = (t5 + 4U);
    t13 = (t2 != 0);
    if (t13 == 1)
        goto LAB3;

LAB2:    t14 = (t5 + 8U);
    *((char **)t14) = t3;
    t15 = (t3 + 8U);
    t16 = *((int *)t15);
    t17 = (t3 + 4U);
    t18 = *((int *)t17);
    t19 = (t3 + 0U);
    t20 = *((int *)t19);
    t21 = t20;
    t22 = t18;

LAB4:    t23 = (t22 * t16);
    t24 = (t21 * t16);
    if (t24 <= t23)
        goto LAB5;

LAB7:    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t16 = *((int *)t8);
    t0 = t16;

LAB1:    return t0;
LAB3:    *((char **)t12) = t2;
    goto LAB2;

LAB5:    t25 = (t3 + 0U);
    t26 = *((int *)t25);
    t27 = (t3 + 8U);
    t28 = *((int *)t27);
    t29 = (t21 - t26);
    t30 = (t29 * t28);
    t31 = (1U * t30);
    t32 = (0 + t31);
    t33 = (t2 + t32);
    t34 = *((unsigned char *)t33);
    t35 = (t34 == (unsigned char)3);
    if (t35 != 0)
        goto LAB8;

LAB10:
LAB9:
LAB6:    if (t21 == t22)
        goto LAB7;

LAB11:    t18 = (t21 + t16);
    t21 = t18;
    goto LAB4;

LAB8:    t36 = (t6 + 36U);
    t37 = *((char **)t36);
    t38 = *((int *)t37);
    t39 = (t38 + 1);
    t36 = (t6 + 36U);
    t40 = *((char **)t36);
    t36 = (t40 + 0);
    *((int *)t36) = t39;
    goto LAB9;

LAB12:;
}

int lmb_bram_if_cntlr_v3_10_c_a_0457303294_3306564128_sub_174661808_229454594(char *t1, unsigned char t2, int t3)
{
    char t5[16];
    int t0;
    char *t6;
    char *t7;
    unsigned char t8;
    int t9;

LAB0:    t6 = (t5 + 4U);
    *((unsigned char *)t6) = t2;
    t7 = (t5 + 5U);
    *((int *)t7) = t3;
    t8 = (!(t2));
    if (t8 != 0)
        goto LAB2;

LAB4:    t0 = t3;

LAB1:    return t0;
LAB2:    t9 = (t3 + 1);
    t0 = t9;
    goto LAB1;

LAB3:    xsi_error(ng1);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

char *lmb_bram_if_cntlr_v3_10_c_a_0457303294_3306564128_sub_3865480495_229454594(char *t1, char *t2, int t3, int t4, int t5, int t6, char *t7)
{
    char t8[208];
    char t9[32];
    char t10[16];
    char t16[16];
    char t22[16];
    char t29[8];
    char t32[16];
    char t38[16];
    char t79[16];
    char t80[16];
    char *t0;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    char *t15;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    int t35;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned char t49;
    char *t50;
    int t51;
    int t52;
    unsigned char t53;
    int t54;
    unsigned char t55;
    int t56;
    int t57;
    unsigned char t58;
    int t59;
    int t60;
    char *t61;
    int t62;
    char *t63;
    int t64;
    int t65;
    char *t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    unsigned char t71;
    int t72;
    char *t73;
    char *t74;
    int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;

LAB0:    t11 = (t10 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 0;
    t12 = (t11 + 4U);
    *((int *)t12) = 31;
    t12 = (t11 + 8U);
    *((int *)t12) = 1;
    t13 = (31 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t14;
    t12 = (t1 + 5812);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 15;
    t18 = (t17 + 4U);
    *((int *)t18) = 0;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (0 - 15);
    t14 = (t19 * -1);
    t14 = (t14 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t14;
    t18 = (t8 + 4U);
    t20 = ((STD_STANDARD) + 720);
    t21 = (t18 + 52U);
    *((char **)t21) = t20;
    t23 = (t18 + 36U);
    *((char **)t23) = t22;
    memcpy(t22, t12, 16U);
    t24 = (t18 + 40U);
    *((char **)t24) = t16;
    t25 = (t18 + 48U);
    *((unsigned int *)t25) = 16U;
    t26 = (t8 + 72U);
    t27 = ((STD_STANDARD) + 240);
    t28 = (t26 + 52U);
    *((char **)t28) = t27;
    t30 = (t26 + 36U);
    *((char **)t30) = t29;
    *((int *)t29) = 0;
    t31 = (t26 + 48U);
    *((unsigned int *)t31) = 4U;
    t33 = (t32 + 0U);
    t34 = (t33 + 0U);
    *((int *)t34) = 3;
    t34 = (t33 + 4U);
    *((int *)t34) = 0;
    t34 = (t33 + 8U);
    *((int *)t34) = -1;
    t35 = (0 - 3);
    t14 = (t35 * -1);
    t14 = (t14 + 1);
    t34 = (t33 + 12U);
    *((unsigned int *)t34) = t14;
    t34 = (t8 + 140U);
    t36 = (t1 + 2844);
    t37 = (t34 + 52U);
    *((char **)t37) = t36;
    t39 = (t34 + 36U);
    *((char **)t39) = t38;
    xsi_type_set_default_value(t36, t38, 0);
    t40 = (t34 + 40U);
    t41 = (t36 + 44U);
    t42 = *((char **)t41);
    *((char **)t40) = t42;
    t43 = (t34 + 48U);
    *((unsigned int *)t43) = 16U;
    t44 = (t9 + 4U);
    *((int *)t44) = t3;
    t45 = (t9 + 8U);
    *((int *)t45) = t4;
    t46 = (t9 + 12U);
    *((int *)t46) = t5;
    t47 = (t9 + 16U);
    *((int *)t47) = t6;
    t48 = (t9 + 20U);
    t49 = (t7 != 0);
    if (t49 == 1)
        goto LAB3;

LAB2:    t50 = (t9 + 24U);
    *((char **)t50) = t10;
    t51 = 0;
    t52 = 3;

LAB4:    if (t51 <= t52)
        goto LAB5;

LAB7:    t11 = (t34 + 36U);
    t12 = *((char **)t11);
    t13 = (3 - 3);
    t14 = (t13 * -1);
    t68 = (4U * t14);
    t69 = (0 + t68);
    t11 = (t12 + t69);
    t19 = *((int *)t11);
    t35 = (t19 * 8);
    t15 = (t34 + 36U);
    t17 = *((char **)t15);
    t51 = (2 - 3);
    t76 = (t51 * -1);
    t77 = (4U * t76);
    t78 = (0 + t77);
    t15 = (t17 + t78);
    t52 = *((int *)t15);
    t54 = (t52 * 4);
    t56 = (t35 + t54);
    t20 = (t34 + 36U);
    t21 = *((char **)t20);
    t57 = (1 - 3);
    t81 = (t57 * -1);
    t82 = (4U * t81);
    t83 = (0 + t82);
    t20 = (t21 + t83);
    t59 = *((int *)t20);
    t60 = (t59 * 2);
    t62 = (t56 + t60);
    t23 = (t34 + 36U);
    t24 = *((char **)t23);
    t64 = (0 - 3);
    t84 = (t64 * -1);
    t85 = (4U * t84);
    t86 = (0 + t85);
    t23 = (t24 + t86);
    t65 = *((int *)t23);
    t67 = (t65 * 1);
    t72 = (t62 + t67);
    t75 = xsi_vhdl_pow(2, t72);
    t25 = ieee_p_3499444699_sub_2213602152_3536714472(IEEE_P_3499444699, t80, t75, 16);
    t27 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t79, t25, t80, (unsigned char)0);
    t28 = (t18 + 36U);
    t30 = *((char **)t28);
    t28 = (t30 + 0);
    t31 = (t79 + 12U);
    t87 = *((unsigned int *)t31);
    t87 = (t87 * 1U);
    memcpy(t28, t27, t87);
    t11 = (t18 + 36U);
    t12 = *((char **)t11);
    t11 = (t16 + 12U);
    t14 = *((unsigned int *)t11);
    t14 = (t14 * 1U);
    t0 = xsi_get_transient_memory(t14);
    memcpy(t0, t12, t14);
    t15 = (t16 + 0U);
    t13 = *((int *)t15);
    t17 = (t16 + 4U);
    t19 = *((int *)t17);
    t20 = (t16 + 8U);
    t35 = *((int *)t20);
    t21 = (t2 + 0U);
    t23 = (t21 + 0U);
    *((int *)t23) = t13;
    t23 = (t21 + 4U);
    *((int *)t23) = t19;
    t23 = (t21 + 8U);
    *((int *)t23) = t35;
    t51 = (t19 - t13);
    t68 = (t51 * t35);
    t68 = (t68 + 1);
    t23 = (t21 + 12U);
    *((unsigned int *)t23) = t68;

LAB1:    return t0;
LAB3:    *((char **)t48) = t7;
    goto LAB2;

LAB5:    t54 = (t5 - 1);
    t55 = (t3 < t54);
    if (t55 == 1)
        goto LAB11;

LAB12:    t56 = (t4 - 1);
    t57 = xsi_vhdl_mod(t56, 4);
    t58 = (t51 <= t57);
    t53 = t58;

LAB13:    if (t53 != 0)
        goto LAB8;

LAB10:    t11 = (t34 + 36U);
    t12 = *((char **)t11);
    t13 = (t51 - 3);
    t14 = (t13 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, t51);
    t68 = (4U * t14);
    t69 = (0 + t68);
    t11 = (t12 + t69);
    *((int *)t11) = 0;

LAB9:
LAB6:    if (t51 == t52)
        goto LAB7;

LAB14:    t13 = (t51 + 1);
    t51 = t13;
    goto LAB4;

LAB8:    t59 = (t3 * 4);
    t60 = (t59 + t51);
    t61 = (t10 + 0U);
    t62 = *((int *)t61);
    t63 = (t10 + 8U);
    t64 = *((int *)t63);
    t65 = (t60 - t62);
    t14 = (t65 * t64);
    t66 = (t10 + 4U);
    t67 = *((int *)t66);
    xsi_vhdl_check_range_of_index(t62, t67, t64, t60);
    t68 = (1U * t14);
    t69 = (0 + t68);
    t70 = (t7 + t69);
    t71 = *((unsigned char *)t70);
    t72 = ieee_std_logic_arith_conv_integer_ulogic(IEEE_P_3499444699, t71);
    t73 = (t34 + 36U);
    t74 = *((char **)t73);
    t75 = (t51 - 3);
    t76 = (t75 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, t51);
    t77 = (4U * t76);
    t78 = (0 + t77);
    t73 = (t74 + t78);
    *((int *)t73) = t72;
    goto LAB9;

LAB11:    t53 = (unsigned char)1;
    goto LAB13;

LAB15:;
}

static void lmb_bram_if_cntlr_v3_10_c_a_0457303294_3306564128_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    int t9;
    int t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned char t24;
    char *t25;
    char *t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    xsi_set_current_line(174, ng4);
    t1 = (t0 + 1608U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(175, ng4);
    t1 = xsi_get_transient_memory(3U);
    memset(t1, 0, 3U);
    t2 = t1;
    memset(t2, (unsigned char)2, 3U);
    t3 = (t0 + 2556);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 3U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(176, ng4);
    t1 = xsi_get_transient_memory(3U);
    memset(t1, 0, 3U);
    t2 = t1;
    memset(t2, (unsigned char)2, 3U);
    t3 = (t0 + 2592);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 3U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(177, ng4);
    t1 = (t0 + 5828);
    *((int *)t1) = 0;
    t2 = (t0 + 5832);
    *((int *)t2) = 31;
    t8 = 0;
    t9 = 31;

LAB2:    if (t8 <= t9)
        goto LAB3;

LAB5:    xsi_set_current_line(184, ng4);
    t1 = (t0 + 1404U);
    t2 = *((char **)t1);
    t15 = *((unsigned char *)t2);
    t16 = (!(t15));
    if (t16 != 0)
        goto LAB10;

LAB12:
LAB11:    t1 = (t0 + 2504);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(178, ng4);
    t3 = (t0 + 5836);
    t5 = (t0 + 5828);
    t10 = *((int *)t5);
    t11 = (t10 - 0);
    t12 = (t11 * 1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t6 = (t3 + t14);
    t15 = *((unsigned char *)t6);
    t16 = (t15 == (unsigned char)3);
    if (t16 != 0)
        goto LAB6;

LAB8:
LAB7:
LAB4:    t1 = (t0 + 5828);
    t8 = *((int *)t1);
    t2 = (t0 + 5832);
    t9 = *((int *)t2);
    if (t8 == t9)
        goto LAB5;

LAB9:    t10 = (t8 + 1);
    t8 = t10;
    t3 = (t0 + 5828);
    *((int *)t3) = t8;
    goto LAB2;

LAB6:    xsi_set_current_line(179, ng4);
    t7 = (t0 + 592U);
    t17 = *((char **)t7);
    t7 = (t0 + 5828);
    t18 = *((int *)t7);
    t19 = (t18 - 0);
    t20 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, *((int *)t7));
    t21 = (1U * t20);
    t22 = (0 + t21);
    t23 = (t17 + t22);
    t24 = *((unsigned char *)t23);
    t25 = (t0 + 1608U);
    t26 = *((char **)t25);
    t27 = *((int *)t26);
    t28 = (t27 - 0);
    t29 = (t28 * 1);
    t30 = (1 * t29);
    t31 = (0U + t30);
    t25 = (t0 + 2556);
    t32 = (t25 + 32U);
    t33 = *((char **)t32);
    t34 = (t33 + 40U);
    t35 = *((char **)t34);
    *((unsigned char *)t35) = t24;
    xsi_driver_first_trans_delta(t25, t31, 1, 0LL);
    xsi_set_current_line(180, ng4);
    t1 = (t0 + 5868);
    t3 = (t0 + 5828);
    t10 = *((int *)t3);
    t11 = (t10 - 0);
    t12 = (t11 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, *((int *)t3));
    t13 = (1U * t12);
    t14 = (0 + t13);
    t4 = (t1 + t14);
    t15 = *((unsigned char *)t4);
    t5 = (t0 + 1608U);
    t6 = *((char **)t5);
    t18 = *((int *)t6);
    t19 = (t18 - 0);
    t20 = (t19 * 1);
    t21 = (1 * t20);
    t22 = (0U + t21);
    t5 = (t0 + 2592);
    t7 = (t5 + 32U);
    t17 = *((char **)t7);
    t23 = (t17 + 40U);
    t25 = *((char **)t23);
    *((unsigned char *)t25) = t15;
    xsi_driver_first_trans_delta(t5, t22, 1, 0LL);
    xsi_set_current_line(181, ng4);
    t1 = (t0 + 1608U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t11 = (t10 + 1);
    t1 = (t0 + 1608U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = t11;
    goto LAB7;

LAB10:    xsi_set_current_line(185, ng4);
    t1 = (t0 + 1608U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t9 = (t8 - 0);
    t12 = (t9 * 1);
    t13 = (1 * t12);
    t14 = (0U + t13);
    t1 = (t0 + 2592);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, t14, 1, 0LL);
    xsi_set_current_line(186, ng4);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t15 = *((unsigned char *)t2);
    t1 = (t0 + 1608U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t9 = (t8 - 0);
    t12 = (t9 * 1);
    t13 = (1 * t12);
    t14 = (0U + t13);
    t1 = (t0 + 2556);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t15;
    xsi_driver_first_trans_delta(t1, t14, 1, 0LL);
    goto LAB11;

}

static void lmb_bram_if_cntlr_v3_10_c_a_0457303294_3306564128_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    unsigned char t8;
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

LAB0:    xsi_set_current_line(190, ng4);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t1 = (t0 + 5640U);
    t3 = (t0 + 960U);
    t4 = *((char **)t3);
    t3 = (t0 + 5656U);
    t5 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t4, t3);
    if (t5 != 0)
        goto LAB3;

LAB4:
LAB5:    t13 = (t0 + 2628);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t13);

LAB2:    t18 = (t0 + 2512);
    *((int *)t18) = 1;

LAB1:    return;
LAB3:    t6 = (t0 + 684U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t6 = (t0 + 2628);
    t9 = (t6 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t8;
    xsi_driver_first_trans_fast_port(t6);
    goto LAB2;

LAB6:    goto LAB2;

}


extern void lmb_bram_if_cntlr_v3_10_c_a_0457303294_3306564128_init()
{
	static char *pe[] = {(void *)lmb_bram_if_cntlr_v3_10_c_a_0457303294_3306564128_p_0,(void *)lmb_bram_if_cntlr_v3_10_c_a_0457303294_3306564128_p_1};
	static char *se[] = {(void *)lmb_bram_if_cntlr_v3_10_c_a_0457303294_3306564128_sub_3545198804_229454594,(void *)lmb_bram_if_cntlr_v3_10_c_a_0457303294_3306564128_sub_174661808_229454594,(void *)lmb_bram_if_cntlr_v3_10_c_a_0457303294_3306564128_sub_3865480495_229454594};
	xsi_register_didat("lmb_bram_if_cntlr_v3_10_c_a_0457303294_3306564128", "isim/testbench_isim_beh.exe.sim/lmb_bram_if_cntlr_v3_10_c/a_0457303294_3306564128.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
