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
static const char *ng0 = "Function uppercase_char ended without a return statement";
extern char *STD_STANDARD;
static const char *ng2 = "F:/Programs/Verilog/FPGA_Group/test_br0101/elaborate/clock_generator_0_v4_03_a/hdl/vhdl/clock_generator.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );


unsigned char clock_generator_0_v4_03_a_a_1170842091_0632001823_sub_3312994872_3452641338(char *t1, unsigned char t2)
{
    char t4[8];
    unsigned char t0;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    static char *nl0[] = {&&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB10, &&LAB11, &&LAB12, &&LAB13, &&LAB14, &&LAB15, &&LAB16, &&LAB17, &&LAB18, &&LAB19, &&LAB20, &&LAB21, &&LAB22, &&LAB23, &&LAB24, &&LAB25, &&LAB26, &&LAB27, &&LAB28, &&LAB29, &&LAB30, &&LAB31, &&LAB32, &&LAB33, &&LAB34, &&LAB35, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36};

LAB0:    t5 = (t4 + 4U);
    *((unsigned char *)t5) = t2;
    t7 = (t2 < (unsigned char)97);
    if (t7 == 1)
        goto LAB5;

LAB6:    t8 = (t2 > (unsigned char)122);
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

LAB10:    t0 = (unsigned char)65;
    goto LAB1;

LAB11:    t0 = (unsigned char)66;
    goto LAB1;

LAB12:    t0 = (unsigned char)67;
    goto LAB1;

LAB13:    t0 = (unsigned char)68;
    goto LAB1;

LAB14:    t0 = (unsigned char)69;
    goto LAB1;

LAB15:    t0 = (unsigned char)70;
    goto LAB1;

LAB16:    t0 = (unsigned char)71;
    goto LAB1;

LAB17:    t0 = (unsigned char)72;
    goto LAB1;

LAB18:    t0 = (unsigned char)73;
    goto LAB1;

LAB19:    t0 = (unsigned char)74;
    goto LAB1;

LAB20:    t0 = (unsigned char)75;
    goto LAB1;

LAB21:    t0 = (unsigned char)76;
    goto LAB1;

LAB22:    t0 = (unsigned char)77;
    goto LAB1;

LAB23:    t0 = (unsigned char)78;
    goto LAB1;

LAB24:    t0 = (unsigned char)79;
    goto LAB1;

LAB25:    t0 = (unsigned char)80;
    goto LAB1;

LAB26:    t0 = (unsigned char)81;
    goto LAB1;

LAB27:    t0 = (unsigned char)82;
    goto LAB1;

LAB28:    t0 = (unsigned char)83;
    goto LAB1;

LAB29:    t0 = (unsigned char)84;
    goto LAB1;

LAB30:    t0 = (unsigned char)85;
    goto LAB1;

LAB31:    t0 = (unsigned char)86;
    goto LAB1;

LAB32:    t0 = (unsigned char)87;
    goto LAB1;

LAB33:    t0 = (unsigned char)88;
    goto LAB1;

LAB34:    t0 = (unsigned char)89;
    goto LAB1;

LAB35:    t0 = (unsigned char)90;
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

char *clock_generator_0_v4_03_a_a_1170842091_0632001823_sub_2408593862_3452641338(char *t1, char *t2, char *t3, char *t4)
{
    char t5[88];
    char t6[16];
    char t9[16];
    char *t0;
    char *t7;
    unsigned int t8;
    char *t10;
    int t11;
    char *t12;
    int t13;
    char *t14;
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
    char *t29;
    int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned char t37;
    char *t38;
    char *t39;
    int t40;
    char *t41;
    int t42;
    char *t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    char *t49;
    int t50;
    char *t51;
    int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned char t58;
    unsigned char t59;
    char *t60;
    char *t61;
    int t62;
    char *t63;
    int t64;
    int t65;
    unsigned int t66;
    char *t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;

LAB0:    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 1U);
    t10 = (t4 + 0U);
    t11 = *((int *)t10);
    t12 = (t4 + 4U);
    t13 = *((int *)t12);
    t14 = (t4 + 8U);
    t15 = *((int *)t14);
    t16 = (t9 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t13;
    t17 = (t16 + 8U);
    *((int *)t17) = t15;
    t18 = (t13 - t11);
    t19 = (t18 * t15);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t17 = (t5 + 4U);
    t20 = ((STD_STANDARD) + 664);
    t21 = (t17 + 52U);
    *((char **)t21) = t20;
    t22 = xsi_get_memory(t8);
    t23 = (t17 + 36U);
    *((char **)t23) = t22;
    xsi_type_set_default_value(t20, t22, t9);
    t24 = (t17 + 40U);
    *((char **)t24) = t9;
    t25 = (t17 + 48U);
    *((unsigned int *)t25) = t8;
    t26 = (t17 + 80U);
    *((char **)t26) = t22;
    t27 = (t17 + 72U);
    *((int *)t27) = 0;
    t28 = (t17 + 76U);
    t29 = (t9 + 12U);
    t19 = *((unsigned int *)t29);
    t30 = (t19 - 1);
    *((int *)t28) = t30;
    t31 = (t17 + 68U);
    t33 = (t8 > 2147483644);
    if (t33 == 1)
        goto LAB2;

LAB3:    t34 = (t8 + 3);
    t35 = (t34 / 16);
    t32 = t35;

LAB4:    *((unsigned int *)t31) = t32;
    t36 = (t6 + 4U);
    t37 = (t3 != 0);
    if (t37 == 1)
        goto LAB6;

LAB5:    t38 = (t6 + 8U);
    *((char **)t38) = t4;
    t39 = (t4 + 8U);
    t40 = *((int *)t39);
    t41 = (t4 + 4U);
    t42 = *((int *)t41);
    t43 = (t4 + 0U);
    t44 = *((int *)t43);
    t45 = t44;
    t46 = t42;

LAB7:    t47 = (t46 * t40);
    t48 = (t45 * t40);
    if (t48 <= t47)
        goto LAB8;

LAB10:    t7 = (t17 + 36U);
    t10 = *((char **)t7);
    t7 = (t9 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 1U);
    t0 = xsi_get_transient_memory(t8);
    memcpy(t0, t10, t8);
    t12 = (t9 + 0U);
    t11 = *((int *)t12);
    t14 = (t9 + 4U);
    t13 = *((int *)t14);
    t16 = (t9 + 8U);
    t15 = *((int *)t16);
    t20 = (t2 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = t11;
    t21 = (t20 + 4U);
    *((int *)t21) = t13;
    t21 = (t20 + 8U);
    *((int *)t21) = t15;
    t18 = (t13 - t11);
    t19 = (t18 * t15);
    t19 = (t19 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t19;

LAB1:    t7 = (t17 + 48);
    t11 = *((int *)t7);
    t10 = (t17 + 80U);
    t12 = *((char **)t10);
    xsi_put_memory(t11, t12);
    return t0;
LAB2:    t32 = 2147483647;
    goto LAB4;

LAB6:    *((char **)t36) = t3;
    goto LAB5;

LAB8:    t49 = (t4 + 0U);
    t50 = *((int *)t49);
    t51 = (t4 + 8U);
    t52 = *((int *)t51);
    t53 = (t45 - t50);
    t54 = (t53 * t52);
    t55 = (1U * t54);
    t56 = (0 + t55);
    t57 = (t3 + t56);
    t58 = *((unsigned char *)t57);
    t59 = clock_generator_0_v4_03_a_a_1170842091_0632001823_sub_3312994872_3452641338(t1, t58);
    t60 = (t17 + 36U);
    t61 = *((char **)t60);
    t60 = (t9 + 0U);
    t62 = *((int *)t60);
    t63 = (t9 + 8U);
    t64 = *((int *)t63);
    t65 = (t45 - t62);
    t66 = (t65 * t64);
    t67 = (t9 + 4U);
    t68 = *((int *)t67);
    xsi_vhdl_check_range_of_index(t62, t68, t64, t45);
    t69 = (1U * t66);
    t70 = (0 + t69);
    t71 = (t61 + t70);
    *((unsigned char *)t71) = t59;

LAB9:    if (t45 == t46)
        goto LAB10;

LAB11:    t11 = (t45 + t40);
    t45 = t11;
    goto LAB7;

LAB12:;
}

unsigned char clock_generator_0_v4_03_a_a_1170842091_0632001823_sub_1959083089_3452641338(char *t1, char *t2, char *t3, char *t4, char *t5)
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
    t34 = clock_generator_0_v4_03_a_a_1170842091_0632001823_sub_3312994872_3452641338(t1, t31);
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
    t42 = clock_generator_0_v4_03_a_a_1170842091_0632001823_sub_3312994872_3452641338(t1, t41);
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

static void clock_generator_0_v4_03_a_a_1170842091_0632001823_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(235, ng2);

LAB3:    t1 = (t0 + 12264);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_0_v4_03_a_a_1170842091_0632001823_p_1(char *t0)
{
    char *t1;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(236, ng2);

LAB3:    t1 = (t0 + 27311);
    t3 = (1U != 1U);
    if (t3 == 1)
        goto LAB5;

LAB6:    t4 = (t0 + 12300);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 1U);
    xsi_driver_first_trans_delta(t4, 0U, 1U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(1U, 1U, 0);
    goto LAB6;

}

static void clock_generator_0_v4_03_a_a_1170842091_0632001823_p_2(char *t0)
{
    char *t1;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(237, ng2);

LAB3:    t1 = (t0 + 27312);
    t3 = (16U != 16U);
    if (t3 == 1)
        goto LAB5;

LAB6:    t4 = (t0 + 12336);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 16U);
    xsi_driver_first_trans_delta(t4, 0U, 16U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB6;

}

static void clock_generator_0_v4_03_a_a_1170842091_0632001823_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(239, ng2);

LAB3:    t1 = (t0 + 12372);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_0_v4_03_a_a_1170842091_0632001823_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(312, ng2);

LAB3:    t1 = (t0 + 3904U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 12408);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 12100);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_0_v4_03_a_a_1170842091_0632001823_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(313, ng2);

LAB3:    t1 = (t0 + 5100U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 12444);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 12108);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_0_v4_03_a_a_1170842091_0632001823_p_6(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(319, ng2);

LAB3:    t1 = (t0 + 4456U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 12480);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 12116);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_0_v4_03_a_a_1170842091_0632001823_p_7(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(322, ng2);

LAB3:    t1 = (t0 + 4456U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 12516);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 12124);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_0_v4_03_a_a_1170842091_0632001823_p_8(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(323, ng2);

LAB3:    t1 = (t0 + 5652U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 12552);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 12132);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_0_v4_03_a_a_1170842091_0632001823_p_9(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(329, ng2);

LAB3:    t1 = (t0 + 4272U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 12588);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 12140);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_0_v4_03_a_a_1170842091_0632001823_p_10(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(332, ng2);

LAB3:    t1 = (t0 + 4272U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 12624);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 12148);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_0_v4_03_a_a_1170842091_0632001823_p_11(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(333, ng2);

LAB3:    t1 = (t0 + 5468U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 12660);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 12156);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_0_v4_03_a_a_1170842091_0632001823_p_12(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(339, ng2);

LAB3:    t1 = (t0 + 4640U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 12696);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 12164);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_0_v4_03_a_a_1170842091_0632001823_p_13(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(342, ng2);

LAB3:    t1 = (t0 + 4640U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 12732);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 12172);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_0_v4_03_a_a_1170842091_0632001823_p_14(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(343, ng2);

LAB3:    t1 = (t0 + 5836U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 12768);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 12180);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_0_v4_03_a_a_1170842091_0632001823_p_15(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(382, ng2);

LAB3:    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 12804);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 12188);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_0_v4_03_a_a_1170842091_0632001823_p_16(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(386, ng2);

LAB3:    t1 = (t0 + 5100U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 12840);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 12196);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_0_v4_03_a_a_1170842091_0632001823_p_17(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(390, ng2);

LAB3:    t1 = (t0 + 2708U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 12876);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 12204);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_0_v4_03_a_a_1170842091_0632001823_p_18(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(417, ng2);

LAB3:    t1 = (t0 + 5100U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 12912);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 12212);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_0_v4_03_a_a_1170842091_0632001823_p_19(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(420, ng2);

LAB3:    t1 = (t0 + 12948);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_0_v4_03_a_a_1170842091_0632001823_p_20(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(423, ng2);

LAB3:    t1 = (t0 + 12984);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_0_v4_03_a_a_1170842091_0632001823_p_21(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(426, ng2);

LAB3:    t1 = (t0 + 13020);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_0_v4_03_a_a_1170842091_0632001823_p_22(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(429, ng2);

LAB3:    t1 = (t0 + 13056);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_0_v4_03_a_a_1170842091_0632001823_p_23(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(432, ng2);

LAB3:    t1 = (t0 + 13092);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_0_v4_03_a_a_1170842091_0632001823_p_24(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(435, ng2);

LAB3:    t1 = (t0 + 13128);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_0_v4_03_a_a_1170842091_0632001823_p_25(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(438, ng2);

LAB3:    t1 = (t0 + 13164);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_0_v4_03_a_a_1170842091_0632001823_p_26(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(441, ng2);

LAB3:    t1 = (t0 + 13200);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_0_v4_03_a_a_1170842091_0632001823_p_27(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(444, ng2);

LAB3:    t1 = (t0 + 13236);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_0_v4_03_a_a_1170842091_0632001823_p_28(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(447, ng2);

LAB3:    t1 = (t0 + 13272);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_0_v4_03_a_a_1170842091_0632001823_p_29(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(450, ng2);

LAB3:    t1 = (t0 + 13308);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_0_v4_03_a_a_1170842091_0632001823_p_30(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(453, ng2);

LAB3:    t1 = (t0 + 13344);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_0_v4_03_a_a_1170842091_0632001823_p_31(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(456, ng2);

LAB3:    t1 = (t0 + 13380);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_0_v4_03_a_a_1170842091_0632001823_p_32(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(459, ng2);

LAB3:    t1 = (t0 + 13416);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_0_v4_03_a_a_1170842091_0632001823_p_33(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(462, ng2);

LAB3:    t1 = (t0 + 13452);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_0_v4_03_a_a_1170842091_0632001823_p_34(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(471, ng2);

LAB3:    t1 = (t0 + 4916U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 13488);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 12220);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void clock_generator_0_v4_03_a_a_1170842091_0632001823_init()
{
	static char *pe[] = {(void *)clock_generator_0_v4_03_a_a_1170842091_0632001823_p_0,(void *)clock_generator_0_v4_03_a_a_1170842091_0632001823_p_1,(void *)clock_generator_0_v4_03_a_a_1170842091_0632001823_p_2,(void *)clock_generator_0_v4_03_a_a_1170842091_0632001823_p_3,(void *)clock_generator_0_v4_03_a_a_1170842091_0632001823_p_4,(void *)clock_generator_0_v4_03_a_a_1170842091_0632001823_p_5,(void *)clock_generator_0_v4_03_a_a_1170842091_0632001823_p_6,(void *)clock_generator_0_v4_03_a_a_1170842091_0632001823_p_7,(void *)clock_generator_0_v4_03_a_a_1170842091_0632001823_p_8,(void *)clock_generator_0_v4_03_a_a_1170842091_0632001823_p_9,(void *)clock_generator_0_v4_03_a_a_1170842091_0632001823_p_10,(void *)clock_generator_0_v4_03_a_a_1170842091_0632001823_p_11,(void *)clock_generator_0_v4_03_a_a_1170842091_0632001823_p_12,(void *)clock_generator_0_v4_03_a_a_1170842091_0632001823_p_13,(void *)clock_generator_0_v4_03_a_a_1170842091_0632001823_p_14,(void *)clock_generator_0_v4_03_a_a_1170842091_0632001823_p_15,(void *)clock_generator_0_v4_03_a_a_1170842091_0632001823_p_16,(void *)clock_generator_0_v4_03_a_a_1170842091_0632001823_p_17,(void *)clock_generator_0_v4_03_a_a_1170842091_0632001823_p_18,(void *)clock_generator_0_v4_03_a_a_1170842091_0632001823_p_19,(void *)clock_generator_0_v4_03_a_a_1170842091_0632001823_p_20,(void *)clock_generator_0_v4_03_a_a_1170842091_0632001823_p_21,(void *)clock_generator_0_v4_03_a_a_1170842091_0632001823_p_22,(void *)clock_generator_0_v4_03_a_a_1170842091_0632001823_p_23,(void *)clock_generator_0_v4_03_a_a_1170842091_0632001823_p_24,(void *)clock_generator_0_v4_03_a_a_1170842091_0632001823_p_25,(void *)clock_generator_0_v4_03_a_a_1170842091_0632001823_p_26,(void *)clock_generator_0_v4_03_a_a_1170842091_0632001823_p_27,(void *)clock_generator_0_v4_03_a_a_1170842091_0632001823_p_28,(void *)clock_generator_0_v4_03_a_a_1170842091_0632001823_p_29,(void *)clock_generator_0_v4_03_a_a_1170842091_0632001823_p_30,(void *)clock_generator_0_v4_03_a_a_1170842091_0632001823_p_31,(void *)clock_generator_0_v4_03_a_a_1170842091_0632001823_p_32,(void *)clock_generator_0_v4_03_a_a_1170842091_0632001823_p_33,(void *)clock_generator_0_v4_03_a_a_1170842091_0632001823_p_34};
	static char *se[] = {(void *)clock_generator_0_v4_03_a_a_1170842091_0632001823_sub_3312994872_3452641338,(void *)clock_generator_0_v4_03_a_a_1170842091_0632001823_sub_2408593862_3452641338,(void *)clock_generator_0_v4_03_a_a_1170842091_0632001823_sub_1959083089_3452641338};
	xsi_register_didat("clock_generator_0_v4_03_a_a_1170842091_0632001823", "isim/testbench_isim_beh.exe.sim/clock_generator_0_v4_03_a/a_1170842091_0632001823.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
