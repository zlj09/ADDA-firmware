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
static const char *ng0 = "Function lowercase_char ended without a return statement";
extern char *STD_STANDARD;
static const char *ng2 = "Function string_to_family ended without a return statement";



unsigned char lmb_bram_if_cntlr_v3_10_c_p_0910968225_sub_1393826549_3769646848(char *t1, unsigned char t2)
{
    char t4[8];
    unsigned char t0;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    static char *nl0[] = {&&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB10, &&LAB11, &&LAB12, &&LAB13, &&LAB14, &&LAB15, &&LAB16, &&LAB17, &&LAB18, &&LAB19, &&LAB20, &&LAB21, &&LAB22, &&LAB23, &&LAB24, &&LAB25, &&LAB26, &&LAB27, &&LAB28, &&LAB29, &&LAB30, &&LAB31, &&LAB32, &&LAB33, &&LAB34, &&LAB35, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36};

LAB0:    t5 = (t4 + 4U);
    *((unsigned char *)t5) = t2;
    t7 = (t2 < (unsigned char)65);
    if (t7 == 1)
        goto LAB5;

LAB6:    t8 = (t2 > (unsigned char)90);
    t6 = t8;

LAB7:    if (t6 != 0)
        goto LAB2;

LAB4:
LAB3:    t9 = (char *)((nl0) + t2);
    goto **((char **)t9);

LAB2:    t0 = t2;

LAB1:    return t0;
LAB5:    t6 = (unsigned char)1;
    goto LAB7;

LAB8:    goto LAB3;

LAB9:    xsi_error(ng0);
    t0 = 0;
    goto LAB1;

LAB10:    t0 = (unsigned char)97;
    goto LAB1;

LAB11:    t0 = (unsigned char)98;
    goto LAB1;

LAB12:    t0 = (unsigned char)99;
    goto LAB1;

LAB13:    t0 = (unsigned char)100;
    goto LAB1;

LAB14:    t0 = (unsigned char)101;
    goto LAB1;

LAB15:    t0 = (unsigned char)102;
    goto LAB1;

LAB16:    t0 = (unsigned char)103;
    goto LAB1;

LAB17:    t0 = (unsigned char)104;
    goto LAB1;

LAB18:    t0 = (unsigned char)105;
    goto LAB1;

LAB19:    t0 = (unsigned char)106;
    goto LAB1;

LAB20:    t0 = (unsigned char)107;
    goto LAB1;

LAB21:    t0 = (unsigned char)108;
    goto LAB1;

LAB22:    t0 = (unsigned char)109;
    goto LAB1;

LAB23:    t0 = (unsigned char)110;
    goto LAB1;

LAB24:    t0 = (unsigned char)111;
    goto LAB1;

LAB25:    t0 = (unsigned char)112;
    goto LAB1;

LAB26:    t0 = (unsigned char)113;
    goto LAB1;

LAB27:    t0 = (unsigned char)114;
    goto LAB1;

LAB28:    t0 = (unsigned char)115;
    goto LAB1;

LAB29:    t0 = (unsigned char)116;
    goto LAB1;

LAB30:    t0 = (unsigned char)117;
    goto LAB1;

LAB31:    t0 = (unsigned char)118;
    goto LAB1;

LAB32:    t0 = (unsigned char)119;
    goto LAB1;

LAB33:    t0 = (unsigned char)120;
    goto LAB1;

LAB34:    t0 = (unsigned char)121;
    goto LAB1;

LAB35:    t0 = (unsigned char)122;
    goto LAB1;

LAB36:    t0 = t2;
    goto LAB1;

LAB37:    goto LAB9;

LAB38:    goto LAB9;

LAB39:    goto LAB9;

LAB40:    goto LAB9;

LAB41:    goto LAB9;

LAB42:    goto LAB9;

LAB43:    goto LAB9;

LAB44:    goto LAB9;

LAB45:    goto LAB9;

LAB46:    goto LAB9;

LAB47:    goto LAB9;

LAB48:    goto LAB9;

LAB49:    goto LAB9;

LAB50:    goto LAB9;

LAB51:    goto LAB9;

LAB52:    goto LAB9;

LAB53:    goto LAB9;

LAB54:    goto LAB9;

LAB55:    goto LAB9;

LAB56:    goto LAB9;

LAB57:    goto LAB9;

LAB58:    goto LAB9;

LAB59:    goto LAB9;

LAB60:    goto LAB9;

LAB61:    goto LAB9;

LAB62:    goto LAB9;

LAB63:    goto LAB9;

}

unsigned char lmb_bram_if_cntlr_v3_10_c_p_0910968225_sub_3349994320_3769646848(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t6[208];
    char t7[24];
    char t13[8];
    char t21[8];
    char t27[8];
    unsigned char t0;
    char *t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    unsigned char t31;
    char *t32;
    char *t33;
    unsigned char t34;
    char *t35;
    char *t36;
    char *t37;
    int t38;
    char *t39;
    int t40;
    unsigned char t41;
    unsigned char t42;
    char *t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    unsigned int t52;
    int t53;
    int t54;
    int t55;
    unsigned int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned char t60;
    unsigned char t61;

LAB0:    t8 = (t3 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t6 + 4U);
    t11 = ((STD_STANDARD) + 240);
    t12 = (t10 + 52U);
    *((char **)t12) = t11;
    t14 = (t10 + 36U);
    *((char **)t14) = t13;
    *((unsigned int *)t13) = t9;
    t15 = (t10 + 48U);
    *((unsigned int *)t15) = 4U;
    t16 = (t5 + 12U);
    t17 = *((unsigned int *)t16);
    t18 = (t6 + 72U);
    t19 = ((STD_STANDARD) + 240);
    t20 = (t18 + 52U);
    *((char **)t20) = t19;
    t22 = (t18 + 36U);
    *((char **)t22) = t21;
    *((unsigned int *)t21) = t17;
    t23 = (t18 + 48U);
    *((unsigned int *)t23) = 4U;
    t24 = (t6 + 140U);
    t25 = ((STD_STANDARD) + 0);
    t26 = (t24 + 52U);
    *((char **)t26) = t25;
    t28 = (t24 + 36U);
    *((char **)t28) = t27;
    *((unsigned char *)t27) = (unsigned char)1;
    t29 = (t24 + 48U);
    *((unsigned int *)t29) = 1U;
    t30 = (t7 + 4U);
    t31 = (t2 != 0);
    if (t31 == 1)
        goto LAB3;

LAB2:    t32 = (t7 + 8U);
    *((char **)t32) = t3;
    t33 = (t7 + 12U);
    t34 = (t4 != 0);
    if (t34 == 1)
        goto LAB5;

LAB4:    t35 = (t7 + 16U);
    *((char **)t35) = t5;
    t36 = (t10 + 36U);
    t37 = *((char **)t36);
    t38 = *((int *)t37);
    t36 = (t18 + 36U);
    t39 = *((char **)t36);
    t40 = *((int *)t39);
    t41 = (t38 == t40);
    t42 = (!(t41));
    if (t42 != 0)
        goto LAB6;

LAB8:    t8 = (t3 + 8U);
    t38 = *((int *)t8);
    t11 = (t3 + 4U);
    t40 = *((int *)t11);
    t12 = (t3 + 0U);
    t44 = *((int *)t12);
    t45 = t44;
    t46 = t40;

LAB9:    t47 = (t46 * t38);
    t48 = (t45 * t38);
    if (t48 <= t47)
        goto LAB10;

LAB12:
LAB7:    t8 = (t24 + 36U);
    t11 = *((char **)t8);
    t31 = *((unsigned char *)t11);
    t0 = t31;

LAB1:    return t0;
LAB3:    *((char **)t30) = t2;
    goto LAB2;

LAB5:    *((char **)t33) = t4;
    goto LAB4;

LAB6:    t36 = (t24 + 36U);
    t43 = *((char **)t36);
    t36 = (t43 + 0);
    *((unsigned char *)t36) = (unsigned char)0;
    goto LAB7;

LAB10:    t14 = (t3 + 0U);
    t49 = *((int *)t14);
    t15 = (t3 + 8U);
    t50 = *((int *)t15);
    t51 = (t45 - t49);
    t9 = (t51 * t50);
    t17 = (1U * t9);
    t52 = (0 + t17);
    t16 = (t2 + t52);
    t31 = *((unsigned char *)t16);
    t34 = lmb_bram_if_cntlr_v3_10_c_p_0910968225_sub_1393826549_3769646848(t1, t31);
    t19 = (t5 + 0U);
    t53 = *((int *)t19);
    t20 = (t5 + 8U);
    t54 = *((int *)t20);
    t55 = (t45 - t53);
    t56 = (t55 * t54);
    t22 = (t5 + 4U);
    t57 = *((int *)t22);
    xsi_vhdl_check_range_of_index(t53, t57, t54, t45);
    t58 = (1U * t56);
    t59 = (0 + t58);
    t23 = (t4 + t59);
    t41 = *((unsigned char *)t23);
    t42 = lmb_bram_if_cntlr_v3_10_c_p_0910968225_sub_1393826549_3769646848(t1, t41);
    t60 = (t34 == t42);
    t61 = (!(t60));
    if (t61 != 0)
        goto LAB13;

LAB15:
LAB14:
LAB11:    if (t45 == t46)
        goto LAB12;

LAB16:    t40 = (t45 + t38);
    t45 = t40;
    goto LAB9;

LAB13:    t25 = (t24 + 36U);
    t26 = *((char **)t25);
    t25 = (t26 + 0);
    *((unsigned char *)t25) = (unsigned char)0;
    goto LAB14;

LAB17:;
}

unsigned char lmb_bram_if_cntlr_v3_10_c_p_0910968225_sub_3680791967_3769646848(char *t1, char *t2, char *t3, unsigned char t4)
{
    char t6[16];
    char t14[16];
    char t21[16];
    char t29[16];
    char t35[16];
    char t41[16];
    unsigned char t0;
    char *t7;
    unsigned char t8;
    char *t9;
    char *t10;
    unsigned char t11;
    char *t12;
    char *t15;
    char *t16;
    int t17;
    unsigned int t18;
    unsigned char t19;
    char *t22;
    char *t23;
    int t24;
    unsigned char t25;
    unsigned char t26;
    unsigned char t27;
    char *t30;
    char *t31;
    int t32;
    unsigned char t33;
    char *t36;
    char *t37;
    int t38;
    unsigned char t39;
    char *t42;
    char *t43;
    int t44;
    unsigned char t45;

LAB0:    t7 = (t6 + 4U);
    t8 = (t2 != 0);
    if (t8 == 1)
        goto LAB3;

LAB2:    t9 = (t6 + 8U);
    *((char **)t9) = t3;
    t10 = (t6 + 12U);
    *((unsigned char *)t10) = t4;
    if (t4 == 1)
        goto LAB7;

LAB8:    t12 = (t1 + 2440);
    t15 = (t14 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 1;
    t16 = (t15 + 4U);
    *((int *)t16) = 3;
    t16 = (t15 + 8U);
    *((int *)t16) = 1;
    t17 = (3 - 1);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t18;
    t19 = lmb_bram_if_cntlr_v3_10_c_p_0910968225_sub_3349994320_3769646848(t1, t2, t3, t12, t14);
    t11 = t19;

LAB9:    if (t11 != 0)
        goto LAB4;

LAB6:    t12 = (t1 + 2443);
    t15 = (t14 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 1;
    t16 = (t15 + 4U);
    *((int *)t16) = 8;
    t16 = (t15 + 8U);
    *((int *)t16) = 1;
    t17 = (8 - 1);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t18;
    t11 = lmb_bram_if_cntlr_v3_10_c_p_0910968225_sub_3349994320_3769646848(t1, t2, t3, t12, t14);
    if (t11 == 1)
        goto LAB13;

LAB14:    t16 = (t1 + 2451);
    t22 = (t21 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 1;
    t23 = (t22 + 4U);
    *((int *)t23) = 9;
    t23 = (t22 + 8U);
    *((int *)t23) = 1;
    t24 = (9 - 1);
    t18 = (t24 * 1);
    t18 = (t18 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t18;
    t19 = lmb_bram_if_cntlr_v3_10_c_p_0910968225_sub_3349994320_3769646848(t1, t2, t3, t16, t21);
    t8 = t19;

LAB15:    if (t8 != 0)
        goto LAB11;

LAB12:    t12 = (t1 + 2460);
    t15 = (t14 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 1;
    t16 = (t15 + 4U);
    *((int *)t16) = 9;
    t16 = (t15 + 8U);
    *((int *)t16) = 1;
    t17 = (9 - 1);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t18;
    t11 = lmb_bram_if_cntlr_v3_10_c_p_0910968225_sub_3349994320_3769646848(t1, t2, t3, t12, t14);
    if (t11 == 1)
        goto LAB19;

LAB20:    t16 = (t1 + 2469);
    t22 = (t21 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 1;
    t23 = (t22 + 4U);
    *((int *)t23) = 10;
    t23 = (t22 + 8U);
    *((int *)t23) = 1;
    t24 = (10 - 1);
    t18 = (t24 * 1);
    t18 = (t18 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t18;
    t19 = lmb_bram_if_cntlr_v3_10_c_p_0910968225_sub_3349994320_3769646848(t1, t2, t3, t16, t21);
    t8 = t19;

LAB21:    if (t8 != 0)
        goto LAB17;

LAB18:    t12 = (t1 + 2479);
    t15 = (t14 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 1;
    t16 = (t15 + 4U);
    *((int *)t16) = 9;
    t16 = (t15 + 8U);
    *((int *)t16) = 1;
    t17 = (9 - 1);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t18;
    t11 = lmb_bram_if_cntlr_v3_10_c_p_0910968225_sub_3349994320_3769646848(t1, t2, t3, t12, t14);
    if (t11 == 1)
        goto LAB25;

LAB26:    t16 = (t1 + 2488);
    t22 = (t21 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 1;
    t23 = (t22 + 4U);
    *((int *)t23) = 10;
    t23 = (t22 + 8U);
    *((int *)t23) = 1;
    t24 = (10 - 1);
    t18 = (t24 * 1);
    t18 = (t18 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t18;
    t19 = lmb_bram_if_cntlr_v3_10_c_p_0910968225_sub_3349994320_3769646848(t1, t2, t3, t16, t21);
    t8 = t19;

LAB27:    if (t8 != 0)
        goto LAB23;

LAB24:    t12 = (t1 + 2498);
    t15 = (t14 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 1;
    t16 = (t15 + 4U);
    *((int *)t16) = 10;
    t16 = (t15 + 8U);
    *((int *)t16) = 1;
    t17 = (10 - 1);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t18;
    t8 = lmb_bram_if_cntlr_v3_10_c_p_0910968225_sub_3349994320_3769646848(t1, t2, t3, t12, t14);
    if (t8 != 0)
        goto LAB29;

LAB30:    t12 = (t1 + 2508);
    t15 = (t14 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 1;
    t16 = (t15 + 4U);
    *((int *)t16) = 12;
    t16 = (t15 + 8U);
    *((int *)t16) = 1;
    t17 = (12 - 1);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t18;
    t11 = lmb_bram_if_cntlr_v3_10_c_p_0910968225_sub_3349994320_3769646848(t1, t2, t3, t12, t14);
    if (t11 == 1)
        goto LAB34;

LAB35:    t16 = (t1 + 2520);
    t22 = (t21 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 1;
    t23 = (t22 + 4U);
    *((int *)t23) = 13;
    t23 = (t22 + 8U);
    *((int *)t23) = 1;
    t24 = (13 - 1);
    t18 = (t24 * 1);
    t18 = (t18 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t18;
    t19 = lmb_bram_if_cntlr_v3_10_c_p_0910968225_sub_3349994320_3769646848(t1, t2, t3, t16, t21);
    t8 = t19;

LAB36:    if (t8 != 0)
        goto LAB32;

LAB33:    t12 = (t1 + 2533);
    t15 = (t14 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 1;
    t16 = (t15 + 4U);
    *((int *)t16) = 8;
    t16 = (t15 + 8U);
    *((int *)t16) = 1;
    t17 = (8 - 1);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t18;
    t26 = lmb_bram_if_cntlr_v3_10_c_p_0910968225_sub_3349994320_3769646848(t1, t2, t3, t12, t14);
    if (t26 == 1)
        goto LAB49;

LAB50:    t16 = (t1 + 2541);
    t22 = (t21 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 1;
    t23 = (t22 + 4U);
    *((int *)t23) = 9;
    t23 = (t22 + 8U);
    *((int *)t23) = 1;
    t24 = (9 - 1);
    t18 = (t24 * 1);
    t18 = (t18 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t18;
    t27 = lmb_bram_if_cntlr_v3_10_c_p_0910968225_sub_3349994320_3769646848(t1, t2, t3, t16, t21);
    t25 = t27;

LAB51:    if (t25 == 1)
        goto LAB46;

LAB47:    t23 = (t1 + 2550);
    t30 = (t29 + 0U);
    t31 = (t30 + 0U);
    *((int *)t31) = 1;
    t31 = (t30 + 4U);
    *((int *)t31) = 9;
    t31 = (t30 + 8U);
    *((int *)t31) = 1;
    t32 = (9 - 1);
    t18 = (t32 * 1);
    t18 = (t18 + 1);
    t31 = (t30 + 12U);
    *((unsigned int *)t31) = t18;
    t33 = lmb_bram_if_cntlr_v3_10_c_p_0910968225_sub_3349994320_3769646848(t1, t2, t3, t23, t29);
    t19 = t33;

LAB48:    if (t19 == 1)
        goto LAB43;

LAB44:    t31 = (t1 + 2559);
    t36 = (t35 + 0U);
    t37 = (t36 + 0U);
    *((int *)t37) = 1;
    t37 = (t36 + 4U);
    *((int *)t37) = 9;
    t37 = (t36 + 8U);
    *((int *)t37) = 1;
    t38 = (9 - 1);
    t18 = (t38 * 1);
    t18 = (t18 + 1);
    t37 = (t36 + 12U);
    *((unsigned int *)t37) = t18;
    t39 = lmb_bram_if_cntlr_v3_10_c_p_0910968225_sub_3349994320_3769646848(t1, t2, t3, t31, t35);
    t11 = t39;

LAB45:    if (t11 == 1)
        goto LAB40;

LAB41:    t37 = (t1 + 2568);
    t42 = (t41 + 0U);
    t43 = (t42 + 0U);
    *((int *)t43) = 1;
    t43 = (t42 + 4U);
    *((int *)t43) = 10;
    t43 = (t42 + 8U);
    *((int *)t43) = 1;
    t44 = (10 - 1);
    t18 = (t44 * 1);
    t18 = (t18 + 1);
    t43 = (t42 + 12U);
    *((unsigned int *)t43) = t18;
    t45 = lmb_bram_if_cntlr_v3_10_c_p_0910968225_sub_3349994320_3769646848(t1, t2, t3, t37, t41);
    t8 = t45;

LAB42:    if (t8 != 0)
        goto LAB38;

LAB39:    t12 = (t1 + 2578);
    t15 = (t14 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 1;
    t16 = (t15 + 4U);
    *((int *)t16) = 7;
    t16 = (t15 + 8U);
    *((int *)t16) = 1;
    t17 = (7 - 1);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t18;
    t19 = lmb_bram_if_cntlr_v3_10_c_p_0910968225_sub_3349994320_3769646848(t1, t2, t3, t12, t14);
    if (t19 == 1)
        goto LAB58;

LAB59:    t16 = (t1 + 2585);
    t22 = (t21 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 1;
    t23 = (t22 + 4U);
    *((int *)t23) = 8;
    t23 = (t22 + 8U);
    *((int *)t23) = 1;
    t24 = (8 - 1);
    t18 = (t24 * 1);
    t18 = (t18 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t18;
    t25 = lmb_bram_if_cntlr_v3_10_c_p_0910968225_sub_3349994320_3769646848(t1, t2, t3, t16, t21);
    t11 = t25;

LAB60:    if (t11 == 1)
        goto LAB55;

LAB56:    t23 = (t1 + 2593);
    t30 = (t29 + 0U);
    t31 = (t30 + 0U);
    *((int *)t31) = 1;
    t31 = (t30 + 4U);
    *((int *)t31) = 9;
    t31 = (t30 + 8U);
    *((int *)t31) = 1;
    t32 = (9 - 1);
    t18 = (t32 * 1);
    t18 = (t18 + 1);
    t31 = (t30 + 12U);
    *((unsigned int *)t31) = t18;
    t26 = lmb_bram_if_cntlr_v3_10_c_p_0910968225_sub_3349994320_3769646848(t1, t2, t3, t23, t29);
    t8 = t26;

LAB57:    if (t8 != 0)
        goto LAB53;

LAB54:    t12 = (t1 + 2602);
    t15 = (t14 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 1;
    t16 = (t15 + 4U);
    *((int *)t16) = 7;
    t16 = (t15 + 8U);
    *((int *)t16) = 1;
    t17 = (7 - 1);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t18;
    t11 = lmb_bram_if_cntlr_v3_10_c_p_0910968225_sub_3349994320_3769646848(t1, t2, t3, t12, t14);
    if (t11 == 1)
        goto LAB64;

LAB65:    t16 = (t1 + 2609);
    t22 = (t21 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 1;
    t23 = (t22 + 4U);
    *((int *)t23) = 9;
    t23 = (t22 + 8U);
    *((int *)t23) = 1;
    t24 = (9 - 1);
    t18 = (t24 * 1);
    t18 = (t18 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t18;
    t19 = lmb_bram_if_cntlr_v3_10_c_p_0910968225_sub_3349994320_3769646848(t1, t2, t3, t16, t21);
    t8 = t19;

LAB66:    if (t8 != 0)
        goto LAB62;

LAB63:    t12 = (t1 + 2618);
    t15 = (t14 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 1;
    t16 = (t15 + 4U);
    *((int *)t16) = 7;
    t16 = (t15 + 8U);
    *((int *)t16) = 1;
    t17 = (7 - 1);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t18;
    t19 = lmb_bram_if_cntlr_v3_10_c_p_0910968225_sub_3349994320_3769646848(t1, t2, t3, t12, t14);
    if (t19 == 1)
        goto LAB73;

LAB74:    t16 = (t1 + 2625);
    t22 = (t21 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 1;
    t23 = (t22 + 4U);
    *((int *)t23) = 8;
    t23 = (t22 + 8U);
    *((int *)t23) = 1;
    t24 = (8 - 1);
    t18 = (t24 * 1);
    t18 = (t18 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t18;
    t25 = lmb_bram_if_cntlr_v3_10_c_p_0910968225_sub_3349994320_3769646848(t1, t2, t3, t16, t21);
    t11 = t25;

LAB75:    if (t11 == 1)
        goto LAB70;

LAB71:    t23 = (t1 + 2633);
    t30 = (t29 + 0U);
    t31 = (t30 + 0U);
    *((int *)t31) = 1;
    t31 = (t30 + 4U);
    *((int *)t31) = 8;
    t31 = (t30 + 8U);
    *((int *)t31) = 1;
    t32 = (8 - 1);
    t18 = (t32 * 1);
    t18 = (t18 + 1);
    t31 = (t30 + 12U);
    *((unsigned int *)t31) = t18;
    t26 = lmb_bram_if_cntlr_v3_10_c_p_0910968225_sub_3349994320_3769646848(t1, t2, t3, t23, t29);
    t8 = t26;

LAB72:    if (t8 != 0)
        goto LAB68;

LAB69:    t12 = (t1 + 2641);
    t15 = (t14 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 1;
    t16 = (t15 + 4U);
    *((int *)t16) = 7;
    t16 = (t15 + 8U);
    *((int *)t16) = 1;
    t17 = (7 - 1);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t18;
    t8 = lmb_bram_if_cntlr_v3_10_c_p_0910968225_sub_3349994320_3769646848(t1, t2, t3, t12, t14);
    if (t8 != 0)
        goto LAB77;

LAB78:    t12 = (t1 + 2648);
    t15 = (t14 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 1;
    t16 = (t15 + 4U);
    *((int *)t16) = 7;
    t16 = (t15 + 8U);
    *((int *)t16) = 1;
    t17 = (7 - 1);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t18;
    t8 = lmb_bram_if_cntlr_v3_10_c_p_0910968225_sub_3349994320_3769646848(t1, t2, t3, t12, t14);
    if (t8 != 0)
        goto LAB80;

LAB81:    t0 = (unsigned char)11;

LAB1:    return t0;
LAB3:    *((char **)t7) = t2;
    goto LAB2;

LAB4:    t0 = (unsigned char)11;
    goto LAB1;

LAB5:    xsi_error(ng2);
    t0 = 0;
    goto LAB1;

LAB7:    t11 = (unsigned char)1;
    goto LAB9;

LAB10:    goto LAB5;

LAB11:    t0 = (unsigned char)0;
    goto LAB1;

LAB13:    t8 = (unsigned char)1;
    goto LAB15;

LAB16:    goto LAB5;

LAB17:    t0 = (unsigned char)3;
    goto LAB1;

LAB19:    t8 = (unsigned char)1;
    goto LAB21;

LAB22:    goto LAB5;

LAB23:    t0 = (unsigned char)4;
    goto LAB1;

LAB25:    t8 = (unsigned char)1;
    goto LAB27;

LAB28:    goto LAB5;

LAB29:    t0 = (unsigned char)5;
    goto LAB1;

LAB31:    goto LAB5;

LAB32:    t0 = (unsigned char)6;
    goto LAB1;

LAB34:    t8 = (unsigned char)1;
    goto LAB36;

LAB37:    goto LAB5;

LAB38:    t0 = (unsigned char)7;
    goto LAB1;

LAB40:    t8 = (unsigned char)1;
    goto LAB42;

LAB43:    t11 = (unsigned char)1;
    goto LAB45;

LAB46:    t19 = (unsigned char)1;
    goto LAB48;

LAB49:    t25 = (unsigned char)1;
    goto LAB51;

LAB52:    goto LAB5;

LAB53:    t0 = (unsigned char)1;
    goto LAB1;

LAB55:    t8 = (unsigned char)1;
    goto LAB57;

LAB58:    t11 = (unsigned char)1;
    goto LAB60;

LAB61:    goto LAB5;

LAB62:    t0 = (unsigned char)2;
    goto LAB1;

LAB64:    t8 = (unsigned char)1;
    goto LAB66;

LAB67:    goto LAB5;

LAB68:    t0 = (unsigned char)8;
    goto LAB1;

LAB70:    t8 = (unsigned char)1;
    goto LAB72;

LAB73:    t11 = (unsigned char)1;
    goto LAB75;

LAB76:    goto LAB5;

LAB77:    t0 = (unsigned char)9;
    goto LAB1;

LAB79:    goto LAB5;

LAB80:    t0 = (unsigned char)10;
    goto LAB1;

LAB82:    goto LAB5;

LAB83:    goto LAB5;

}

int lmb_bram_if_cntlr_v3_10_c_p_0910968225_sub_3440415768_3769646848(char *t1, unsigned char t2)
{
    char t4[8];
    int t0;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;

LAB0:    t5 = (t4 + 4U);
    *((unsigned char *)t5) = t2;
    t11 = (t2 == (unsigned char)0);
    if (t11 == 1)
        goto LAB17;

LAB18:    t12 = (t2 == (unsigned char)3);
    t10 = t12;

LAB19:    if (t10 == 1)
        goto LAB14;

LAB15:    t13 = (t2 == (unsigned char)4);
    t9 = t13;

LAB16:    if (t9 == 1)
        goto LAB11;

LAB12:    t14 = (t2 == (unsigned char)5);
    t8 = t14;

LAB13:    if (t8 == 1)
        goto LAB8;

LAB9:    t15 = (t2 == (unsigned char)6);
    t7 = t15;

LAB10:    if (t7 == 1)
        goto LAB5;

LAB6:    t16 = (t2 == (unsigned char)1);
    t6 = t16;

LAB7:    if (t6 != 0)
        goto LAB2;

LAB4:
LAB3:    t0 = 6;

LAB1:    return t0;
LAB2:    t0 = 4;
    goto LAB1;

LAB5:    t6 = (unsigned char)1;
    goto LAB7;

LAB8:    t7 = (unsigned char)1;
    goto LAB10;

LAB11:    t8 = (unsigned char)1;
    goto LAB13;

LAB14:    t9 = (unsigned char)1;
    goto LAB16;

LAB17:    t10 = (unsigned char)1;
    goto LAB19;

LAB20:    goto LAB3;

LAB21:;
}


extern void lmb_bram_if_cntlr_v3_10_c_p_0910968225_init()
{
	static char *se[] = {(void *)lmb_bram_if_cntlr_v3_10_c_p_0910968225_sub_1393826549_3769646848,(void *)lmb_bram_if_cntlr_v3_10_c_p_0910968225_sub_3349994320_3769646848,(void *)lmb_bram_if_cntlr_v3_10_c_p_0910968225_sub_3680791967_3769646848,(void *)lmb_bram_if_cntlr_v3_10_c_p_0910968225_sub_3440415768_3769646848};
	xsi_register_didat("lmb_bram_if_cntlr_v3_10_c_p_0910968225", "isim/testbench_isim_beh.exe.sim/lmb_bram_if_cntlr_v3_10_c/p_0910968225.didat");
	xsi_register_subprogram_executes(se);
}
