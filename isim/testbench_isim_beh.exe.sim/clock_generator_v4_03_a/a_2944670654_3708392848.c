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
static const char *ng2 = "G:/Xilinx/14.7/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/clock_generator_v4_03_a/hdl/vhdl/dcm_module.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );


unsigned char clock_generator_v4_03_a_a_2944670654_3708392848_sub_3312994872_4252281916(char *t1, unsigned char t2)
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

char *clock_generator_v4_03_a_a_2944670654_3708392848_sub_2408593862_4252281916(char *t1, char *t2, char *t3, char *t4)
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
    t59 = clock_generator_v4_03_a_a_2944670654_3708392848_sub_3312994872_4252281916(t1, t58);
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

unsigned char clock_generator_v4_03_a_a_2944670654_3708392848_sub_1959083089_4252281916(char *t1, char *t2, char *t3, char *t4, char *t5)
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
    t34 = clock_generator_v4_03_a_a_2944670654_3708392848_sub_3312994872_4252281916(t1, t31);
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
    t42 = clock_generator_v4_03_a_a_2944670654_3708392848_sub_3312994872_4252281916(t1, t41);
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

char *clock_generator_v4_03_a_a_2944670654_3708392848_sub_3990837679_4252281916(char *t1, char *t2, char *t3, char *t4)
{
    char t5[312];
    char t6[16];
    char t10[8];
    char t16[8];
    char t21[16];
    char t44[16];
    char t175[16];
    char *t0;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    int t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned char t66;
    char *t67;
    char *t68;
    int t69;
    char *t70;
    int t71;
    char *t72;
    int t73;
    int t74;
    int t75;
    int t76;
    int t77;
    unsigned char t78;
    unsigned char t79;
    unsigned char t80;
    unsigned char t81;
    unsigned char t82;
    unsigned char t83;
    char *t84;
    int t85;
    char *t86;
    int t87;
    int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned char t93;
    unsigned char t94;
    unsigned char t95;
    char *t96;
    int t97;
    char *t98;
    int t99;
    int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    unsigned char t105;
    unsigned char t106;
    unsigned char t107;
    char *t108;
    int t109;
    char *t110;
    int t111;
    int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    unsigned char t117;
    unsigned char t118;
    unsigned char t119;
    char *t120;
    int t121;
    char *t122;
    int t123;
    int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    unsigned char t129;
    unsigned char t130;
    unsigned char t131;
    char *t132;
    int t133;
    char *t134;
    int t135;
    int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    unsigned char t141;
    unsigned char t142;
    unsigned char t143;
    char *t144;
    int t145;
    char *t146;
    int t147;
    int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    char *t152;
    unsigned char t153;
    unsigned char t154;
    unsigned char t155;
    char *t156;
    int t157;
    char *t158;
    int t159;
    int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    char *t164;
    unsigned char t165;
    unsigned char t166;
    char *t167;
    char *t168;
    int t169;
    int t170;
    char *t171;
    unsigned char t172;
    unsigned char t173;
    unsigned char t174;

LAB0:    t7 = (t5 + 4U);
    t8 = ((STD_STANDARD) + 240);
    t9 = (t7 + 52U);
    *((char **)t9) = t8;
    t11 = (t7 + 36U);
    *((char **)t11) = t10;
    *((int *)t10) = 0;
    t12 = (t7 + 48U);
    *((unsigned int *)t12) = 4U;
    t13 = (t5 + 72U);
    t14 = ((STD_STANDARD) + 240);
    t15 = (t13 + 52U);
    *((char **)t15) = t14;
    t17 = (t13 + 36U);
    *((char **)t17) = t16;
    *((int *)t16) = 0;
    t18 = (t13 + 48U);
    *((unsigned int *)t18) = 4U;
    t19 = (t1 + 24528);
    t22 = (t21 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 1;
    t23 = (t22 + 4U);
    *((int *)t23) = 8;
    t23 = (t22 + 8U);
    *((int *)t23) = 1;
    t24 = (8 - 1);
    t25 = (t24 * 1);
    t25 = (t25 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t25;
    t23 = (t5 + 140U);
    t26 = ((STD_STANDARD) + 664);
    t27 = (t23 + 52U);
    *((char **)t27) = t26;
    t28 = xsi_get_memory(8U);
    t29 = (t23 + 36U);
    *((char **)t29) = t28;
    memcpy(t28, t19, 8U);
    t30 = (t23 + 40U);
    *((char **)t30) = t21;
    t31 = (t23 + 48U);
    *((unsigned int *)t31) = 8U;
    t32 = (t23 + 80U);
    *((char **)t32) = t28;
    t33 = (t23 + 72U);
    *((int *)t33) = 0;
    t34 = (t23 + 76U);
    t35 = (t21 + 12U);
    t25 = *((unsigned int *)t35);
    t36 = (t25 - 1);
    *((int *)t34) = t36;
    t37 = (t23 + 68U);
    t39 = (8U > 2147483644);
    if (t39 == 1)
        goto LAB2;

LAB3:    t40 = (8U + 3);
    t41 = (t40 / 16);
    t38 = t41;

LAB4:    *((unsigned int *)t37) = t38;
    t42 = (t1 + 24536);
    t45 = (t44 + 0U);
    t46 = (t45 + 0U);
    *((int *)t46) = 1;
    t46 = (t45 + 4U);
    *((int *)t46) = 7;
    t46 = (t45 + 8U);
    *((int *)t46) = 1;
    t47 = (7 - 1);
    t48 = (t47 * 1);
    t48 = (t48 + 1);
    t46 = (t45 + 12U);
    *((unsigned int *)t46) = t48;
    t46 = (t5 + 224U);
    t49 = ((STD_STANDARD) + 664);
    t50 = (t46 + 52U);
    *((char **)t50) = t49;
    t51 = xsi_get_memory(7U);
    t52 = (t46 + 36U);
    *((char **)t52) = t51;
    memcpy(t51, t42, 7U);
    t53 = (t46 + 40U);
    *((char **)t53) = t44;
    t54 = (t46 + 48U);
    *((unsigned int *)t54) = 7U;
    t55 = (t46 + 80U);
    *((char **)t55) = t51;
    t56 = (t46 + 72U);
    *((int *)t56) = 0;
    t57 = (t46 + 76U);
    t58 = (t44 + 12U);
    t48 = *((unsigned int *)t58);
    t59 = (t48 - 1);
    *((int *)t57) = t59;
    t60 = (t46 + 68U);
    t62 = (7U > 2147483644);
    if (t62 == 1)
        goto LAB5;

LAB6:    t63 = (7U + 3);
    t64 = (t63 / 16);
    t61 = t64;

LAB7:    *((unsigned int *)t60) = t61;
    t65 = (t6 + 4U);
    t66 = (t3 != 0);
    if (t66 == 1)
        goto LAB9;

LAB8:    t67 = (t6 + 8U);
    *((char **)t67) = t4;
    t68 = (t4 + 8U);
    t69 = *((int *)t68);
    t70 = (t4 + 4U);
    t71 = *((int *)t70);
    t72 = (t4 + 0U);
    t73 = *((int *)t72);
    t74 = t73;
    t75 = t71;

LAB10:    t76 = (t75 * t69);
    t77 = (t74 * t69);
    if (t77 <= t76)
        goto LAB11;

LAB13:    t8 = (t7 + 36U);
    t9 = *((char **)t8);
    t24 = *((int *)t9);
    t66 = (t24 > 6);
    if (t66 != 0)
        goto LAB60;

LAB62:
LAB61:    t8 = (t13 + 36U);
    t9 = *((char **)t8);
    t24 = *((int *)t9);
    t66 = (t24 > 7);
    if (t66 != 0)
        goto LAB64;

LAB66:
LAB65:    t8 = clock_generator_v4_03_a_a_2944670654_3708392848_sub_2408593862_4252281916(t1, t175, t3, t4);
    t9 = (t175 + 12U);
    t25 = *((unsigned int *)t9);
    t25 = (t25 * 1U);
    t0 = xsi_get_transient_memory(t25);
    memcpy(t0, t8, t25);
    t11 = (t175 + 0U);
    t24 = *((int *)t11);
    t12 = (t175 + 4U);
    t36 = *((int *)t12);
    t14 = (t175 + 8U);
    t47 = *((int *)t14);
    t15 = (t2 + 0U);
    t17 = (t15 + 0U);
    *((int *)t17) = t24;
    t17 = (t15 + 4U);
    *((int *)t17) = t36;
    t17 = (t15 + 8U);
    *((int *)t17) = t47;
    t59 = (t36 - t24);
    t38 = (t59 * t47);
    t38 = (t38 + 1);
    t17 = (t15 + 12U);
    *((unsigned int *)t17) = t38;

LAB1:    t8 = (t46 + 48);
    t24 = *((int *)t8);
    t9 = (t46 + 80U);
    t11 = *((char **)t9);
    xsi_put_memory(t24, t11);
    t12 = (t23 + 48);
    t36 = *((int *)t12);
    t14 = (t23 + 80U);
    t15 = *((char **)t14);
    xsi_put_memory(t36, t15);
    return t0;
LAB2:    t38 = 2147483647;
    goto LAB4;

LAB5:    t61 = 2147483647;
    goto LAB7;

LAB9:    *((char **)t65) = t3;
    goto LAB8;

LAB11:    t84 = (t4 + 0U);
    t85 = *((int *)t84);
    t86 = (t4 + 8U);
    t87 = *((int *)t86);
    t88 = (t74 - t85);
    t89 = (t88 * t87);
    t90 = (1U * t89);
    t91 = (0 + t90);
    t92 = (t3 + t91);
    t93 = *((unsigned char *)t92);
    t94 = clock_generator_v4_03_a_a_2944670654_3708392848_sub_3312994872_4252281916(t1, t93);
    t95 = (t94 == (unsigned char)86);
    if (t95 == 1)
        goto LAB32;

LAB33:    t96 = (t4 + 0U);
    t97 = *((int *)t96);
    t98 = (t4 + 8U);
    t99 = *((int *)t98);
    t100 = (t74 - t97);
    t101 = (t100 * t99);
    t102 = (1U * t101);
    t103 = (0 + t102);
    t104 = (t3 + t103);
    t105 = *((unsigned char *)t104);
    t106 = clock_generator_v4_03_a_a_2944670654_3708392848_sub_3312994872_4252281916(t1, t105);
    t107 = (t106 == (unsigned char)73);
    t83 = t107;

LAB34:    if (t83 == 1)
        goto LAB29;

LAB30:    t108 = (t4 + 0U);
    t109 = *((int *)t108);
    t110 = (t4 + 8U);
    t111 = *((int *)t110);
    t112 = (t74 - t109);
    t113 = (t112 * t111);
    t114 = (1U * t113);
    t115 = (0 + t114);
    t116 = (t3 + t115);
    t117 = *((unsigned char *)t116);
    t118 = clock_generator_v4_03_a_a_2944670654_3708392848_sub_3312994872_4252281916(t1, t117);
    t119 = (t118 == (unsigned char)82);
    t82 = t119;

LAB31:    if (t82 == 1)
        goto LAB26;

LAB27:    t120 = (t4 + 0U);
    t121 = *((int *)t120);
    t122 = (t4 + 8U);
    t123 = *((int *)t122);
    t124 = (t74 - t121);
    t125 = (t124 * t123);
    t126 = (1U * t125);
    t127 = (0 + t126);
    t128 = (t3 + t127);
    t129 = *((unsigned char *)t128);
    t130 = clock_generator_v4_03_a_a_2944670654_3708392848_sub_3312994872_4252281916(t1, t129);
    t131 = (t130 == (unsigned char)84);
    t81 = t131;

LAB28:    if (t81 == 1)
        goto LAB23;

LAB24:    t132 = (t4 + 0U);
    t133 = *((int *)t132);
    t134 = (t4 + 8U);
    t135 = *((int *)t134);
    t136 = (t74 - t133);
    t137 = (t136 * t135);
    t138 = (1U * t137);
    t139 = (0 + t138);
    t140 = (t3 + t139);
    t141 = *((unsigned char *)t140);
    t142 = clock_generator_v4_03_a_a_2944670654_3708392848_sub_3312994872_4252281916(t1, t141);
    t143 = (t142 == (unsigned char)69);
    t80 = t143;

LAB25:    if (t80 == 1)
        goto LAB20;

LAB21:    t144 = (t4 + 0U);
    t145 = *((int *)t144);
    t146 = (t4 + 8U);
    t147 = *((int *)t146);
    t148 = (t74 - t145);
    t149 = (t148 * t147);
    t150 = (1U * t149);
    t151 = (0 + t150);
    t152 = (t3 + t151);
    t153 = *((unsigned char *)t152);
    t154 = clock_generator_v4_03_a_a_2944670654_3708392848_sub_3312994872_4252281916(t1, t153);
    t155 = (t154 == (unsigned char)88);
    t79 = t155;

LAB22:    if (t79 == 1)
        goto LAB17;

LAB18:    t156 = (t4 + 0U);
    t157 = *((int *)t156);
    t158 = (t4 + 8U);
    t159 = *((int *)t158);
    t160 = (t74 - t157);
    t161 = (t160 * t159);
    t162 = (1U * t161);
    t163 = (0 + t162);
    t164 = (t3 + t163);
    t165 = *((unsigned char *)t164);
    t166 = (t165 == (unsigned char)53);
    t78 = t166;

LAB19:    if (t78 != 0)
        goto LAB14;

LAB16:
LAB15:    t8 = (t4 + 0U);
    t24 = *((int *)t8);
    t9 = (t4 + 8U);
    t36 = *((int *)t9);
    t47 = (t74 - t24);
    t25 = (t47 * t36);
    t38 = (1U * t25);
    t39 = (0 + t38);
    t11 = (t3 + t39);
    t93 = *((unsigned char *)t11);
    t94 = clock_generator_v4_03_a_a_2944670654_3708392848_sub_3312994872_4252281916(t1, t93);
    t95 = (t94 == (unsigned char)83);
    if (t95 == 1)
        goto LAB56;

LAB57:    t12 = (t4 + 0U);
    t59 = *((int *)t12);
    t14 = (t4 + 8U);
    t71 = *((int *)t14);
    t73 = (t74 - t59);
    t40 = (t73 * t71);
    t41 = (1U * t40);
    t48 = (0 + t41);
    t15 = (t3 + t48);
    t105 = *((unsigned char *)t15);
    t106 = clock_generator_v4_03_a_a_2944670654_3708392848_sub_3312994872_4252281916(t1, t105);
    t107 = (t106 == (unsigned char)80);
    t83 = t107;

LAB58:    if (t83 == 1)
        goto LAB53;

LAB54:    t17 = (t4 + 0U);
    t76 = *((int *)t17);
    t18 = (t4 + 8U);
    t77 = *((int *)t18);
    t85 = (t74 - t76);
    t61 = (t85 * t77);
    t62 = (1U * t61);
    t63 = (0 + t62);
    t19 = (t3 + t63);
    t117 = *((unsigned char *)t19);
    t118 = clock_generator_v4_03_a_a_2944670654_3708392848_sub_3312994872_4252281916(t1, t117);
    t119 = (t118 == (unsigned char)65);
    t82 = t119;

LAB55:    if (t82 == 1)
        goto LAB50;

LAB51:    t20 = (t4 + 0U);
    t87 = *((int *)t20);
    t22 = (t4 + 8U);
    t88 = *((int *)t22);
    t97 = (t74 - t87);
    t64 = (t97 * t88);
    t89 = (1U * t64);
    t90 = (0 + t89);
    t26 = (t3 + t90);
    t129 = *((unsigned char *)t26);
    t130 = clock_generator_v4_03_a_a_2944670654_3708392848_sub_3312994872_4252281916(t1, t129);
    t131 = (t130 == (unsigned char)82);
    t81 = t131;

LAB52:    if (t81 == 1)
        goto LAB47;

LAB48:    t27 = (t4 + 0U);
    t99 = *((int *)t27);
    t28 = (t4 + 8U);
    t100 = *((int *)t28);
    t109 = (t74 - t99);
    t91 = (t109 * t100);
    t101 = (1U * t91);
    t102 = (0 + t101);
    t29 = (t3 + t102);
    t141 = *((unsigned char *)t29);
    t142 = clock_generator_v4_03_a_a_2944670654_3708392848_sub_3312994872_4252281916(t1, t141);
    t143 = (t142 == (unsigned char)84);
    t80 = t143;

LAB49:    if (t80 == 1)
        goto LAB44;

LAB45:    t30 = (t4 + 0U);
    t111 = *((int *)t30);
    t31 = (t4 + 8U);
    t112 = *((int *)t31);
    t121 = (t74 - t111);
    t103 = (t121 * t112);
    t113 = (1U * t103);
    t114 = (0 + t113);
    t32 = (t3 + t114);
    t153 = *((unsigned char *)t32);
    t154 = clock_generator_v4_03_a_a_2944670654_3708392848_sub_3312994872_4252281916(t1, t153);
    t155 = (t154 == (unsigned char)65);
    t79 = t155;

LAB46:    if (t79 == 1)
        goto LAB41;

LAB42:    t33 = (t4 + 0U);
    t123 = *((int *)t33);
    t34 = (t4 + 8U);
    t124 = *((int *)t34);
    t133 = (t74 - t123);
    t115 = (t133 * t124);
    t125 = (1U * t115);
    t126 = (0 + t125);
    t35 = (t3 + t126);
    t165 = *((unsigned char *)t35);
    t166 = clock_generator_v4_03_a_a_2944670654_3708392848_sub_3312994872_4252281916(t1, t165);
    t172 = (t166 == (unsigned char)78);
    t78 = t172;

LAB43:    if (t78 == 1)
        goto LAB38;

LAB39:    t37 = (t4 + 0U);
    t135 = *((int *)t37);
    t42 = (t4 + 8U);
    t136 = *((int *)t42);
    t145 = (t74 - t135);
    t127 = (t145 * t136);
    t137 = (1U * t127);
    t138 = (0 + t137);
    t43 = (t3 + t138);
    t173 = *((unsigned char *)t43);
    t174 = (t173 == (unsigned char)54);
    t66 = t174;

LAB40:    if (t66 != 0)
        goto LAB35;

LAB37:
LAB36:
LAB12:    if (t74 == t75)
        goto LAB13;

LAB59:    t24 = (t74 + t69);
    t74 = t24;
    goto LAB10;

LAB14:    t167 = (t7 + 36U);
    t168 = *((char **)t167);
    t169 = *((int *)t168);
    t170 = (t169 + 1);
    t167 = (t7 + 36U);
    t171 = *((char **)t167);
    t167 = (t171 + 0);
    *((int *)t167) = t170;
    goto LAB15;

LAB17:    t78 = (unsigned char)1;
    goto LAB19;

LAB20:    t79 = (unsigned char)1;
    goto LAB22;

LAB23:    t80 = (unsigned char)1;
    goto LAB25;

LAB26:    t81 = (unsigned char)1;
    goto LAB28;

LAB29:    t82 = (unsigned char)1;
    goto LAB31;

LAB32:    t83 = (unsigned char)1;
    goto LAB34;

LAB35:    t45 = (t13 + 36U);
    t49 = *((char **)t45);
    t147 = *((int *)t49);
    t148 = (t147 + 1);
    t45 = (t13 + 36U);
    t50 = *((char **)t45);
    t45 = (t50 + 0);
    *((int *)t45) = t148;
    goto LAB36;

LAB38:    t66 = (unsigned char)1;
    goto LAB40;

LAB41:    t78 = (unsigned char)1;
    goto LAB43;

LAB44:    t79 = (unsigned char)1;
    goto LAB46;

LAB47:    t80 = (unsigned char)1;
    goto LAB49;

LAB50:    t81 = (unsigned char)1;
    goto LAB52;

LAB53:    t82 = (unsigned char)1;
    goto LAB55;

LAB56:    t83 = (unsigned char)1;
    goto LAB58;

LAB60:    t8 = (t46 + 36U);
    t11 = *((char **)t8);
    t8 = (t44 + 12U);
    t25 = *((unsigned int *)t8);
    t25 = (t25 * 1U);
    t0 = xsi_get_transient_memory(t25);
    memcpy(t0, t11, t25);
    t12 = (t44 + 0U);
    t36 = *((int *)t12);
    t14 = (t44 + 4U);
    t47 = *((int *)t14);
    t15 = (t44 + 8U);
    t59 = *((int *)t15);
    t17 = (t2 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = t36;
    t18 = (t17 + 4U);
    *((int *)t18) = t47;
    t18 = (t17 + 8U);
    *((int *)t18) = t59;
    t69 = (t47 - t36);
    t38 = (t69 * t59);
    t38 = (t38 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t38;
    goto LAB1;

LAB63:    goto LAB61;

LAB64:    t8 = (t23 + 36U);
    t11 = *((char **)t8);
    t8 = (t21 + 12U);
    t25 = *((unsigned int *)t8);
    t25 = (t25 * 1U);
    t0 = xsi_get_transient_memory(t25);
    memcpy(t0, t11, t25);
    t12 = (t21 + 0U);
    t36 = *((int *)t12);
    t14 = (t21 + 4U);
    t47 = *((int *)t14);
    t15 = (t21 + 8U);
    t59 = *((int *)t15);
    t17 = (t2 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = t36;
    t18 = (t17 + 4U);
    *((int *)t18) = t47;
    t18 = (t17 + 8U);
    *((int *)t18) = t59;
    t69 = (t47 - t36);
    t38 = (t69 * t59);
    t38 = (t38 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t38;
    goto LAB1;

LAB67:    goto LAB65;

LAB68:;
}

static void clock_generator_v4_03_a_a_2944670654_3708392848_p_0(char *t0)
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

LAB0:    xsi_set_current_line(251, ng2);

LAB3:    t1 = (t0 + 2412U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 10948);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 10808);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_v4_03_a_a_2944670654_3708392848_p_1(char *t0)
{
    char t19[16];
    char t20[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t21;

LAB0:    xsi_set_current_line(262, ng2);
    t1 = (t0 + 5264U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 4228U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 10816);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(263, ng2);
    t1 = (t0 + 10984);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(264, ng2);
    t1 = xsi_get_transient_memory(3U);
    memset(t1, 0, 3U);
    t2 = t1;
    memset(t2, (unsigned char)3, 3U);
    t5 = (t0 + 7596U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    memcpy(t5, t1, 3U);
    goto LAB3;

LAB5:    xsi_set_current_line(266, ng2);
    t2 = (t0 + 7596U);
    t6 = *((char **)t2);
    t11 = (2 - 0);
    t12 = (t11 * 1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t6 + t14);
    t15 = *((unsigned char *)t2);
    t7 = (t0 + 10984);
    t8 = (t7 + 32U);
    t16 = *((char **)t8);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = t15;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(267, ng2);
    t1 = (t0 + 5264U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7596U);
    t5 = *((char **)t1);
    t12 = (0 - 0);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t5 + t14);
    t7 = ((IEEE_P_2592010699) + 2332);
    t8 = (t20 + 0U);
    t16 = (t8 + 0U);
    *((int *)t16) = 0;
    t16 = (t8 + 4U);
    *((int *)t16) = 1;
    t16 = (t8 + 8U);
    *((int *)t16) = 1;
    t11 = (1 - 0);
    t21 = (t11 * 1);
    t21 = (t21 + 1);
    t16 = (t8 + 12U);
    *((unsigned int *)t16) = t21;
    t6 = xsi_base_array_concat(t6, t19, t7, (char)99, t3, (char)97, t1, t20, (char)101);
    t16 = (t0 + 7596U);
    t17 = *((char **)t16);
    t16 = (t17 + 0);
    t21 = (1U + 2U);
    memcpy(t16, t6, t21);
    goto LAB3;

LAB7:    t2 = (t0 + 4252U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

}

static void clock_generator_v4_03_a_a_2944670654_3708392848_p_2(char *t0)
{
    char *t1;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(364, ng2);

LAB3:    t1 = (t0 + 24543);
    t3 = (t0 + 11020);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_v4_03_a_a_2944670654_3708392848_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(380, ng2);

LAB3:    t1 = (t0 + 2504U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 11056);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 10824);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_v4_03_a_a_2944670654_3708392848_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(395, ng2);

LAB3:    t1 = (t0 + 2596U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 11092);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 10832);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_v4_03_a_a_2944670654_3708392848_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(410, ng2);

LAB3:    t1 = (t0 + 4436U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 11128);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 10840);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_v4_03_a_a_2944670654_3708392848_p_6(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(425, ng2);

LAB3:    t1 = (t0 + 4528U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 11164);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 10848);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_v4_03_a_a_2944670654_3708392848_p_7(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(440, ng2);

LAB3:    t1 = (t0 + 4620U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 11200);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 10856);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_v4_03_a_a_2944670654_3708392848_p_8(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(455, ng2);

LAB3:    t1 = (t0 + 4712U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 11236);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 10864);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_v4_03_a_a_2944670654_3708392848_p_9(char *t0)
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

LAB3:    t1 = (t0 + 4804U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 11272);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 10872);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_v4_03_a_a_2944670654_3708392848_p_10(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(487, ng2);

LAB3:    t1 = (t0 + 4896U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 11308);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 10880);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_v4_03_a_a_2944670654_3708392848_p_11(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(503, ng2);

LAB3:    t1 = (t0 + 4988U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 11344);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 10888);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_v4_03_a_a_2944670654_3708392848_p_12(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(519, ng2);

LAB3:    t1 = (t0 + 5080U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 11380);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 10896);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void clock_generator_v4_03_a_a_2944670654_3708392848_p_13(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(535, ng2);

LAB3:    t1 = (t0 + 5172U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 11416);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 10904);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void clock_generator_v4_03_a_a_2944670654_3708392848_init()
{
	static char *pe[] = {(void *)clock_generator_v4_03_a_a_2944670654_3708392848_p_0,(void *)clock_generator_v4_03_a_a_2944670654_3708392848_p_1,(void *)clock_generator_v4_03_a_a_2944670654_3708392848_p_2,(void *)clock_generator_v4_03_a_a_2944670654_3708392848_p_3,(void *)clock_generator_v4_03_a_a_2944670654_3708392848_p_4,(void *)clock_generator_v4_03_a_a_2944670654_3708392848_p_5,(void *)clock_generator_v4_03_a_a_2944670654_3708392848_p_6,(void *)clock_generator_v4_03_a_a_2944670654_3708392848_p_7,(void *)clock_generator_v4_03_a_a_2944670654_3708392848_p_8,(void *)clock_generator_v4_03_a_a_2944670654_3708392848_p_9,(void *)clock_generator_v4_03_a_a_2944670654_3708392848_p_10,(void *)clock_generator_v4_03_a_a_2944670654_3708392848_p_11,(void *)clock_generator_v4_03_a_a_2944670654_3708392848_p_12,(void *)clock_generator_v4_03_a_a_2944670654_3708392848_p_13};
	static char *se[] = {(void *)clock_generator_v4_03_a_a_2944670654_3708392848_sub_3312994872_4252281916,(void *)clock_generator_v4_03_a_a_2944670654_3708392848_sub_2408593862_4252281916,(void *)clock_generator_v4_03_a_a_2944670654_3708392848_sub_1959083089_4252281916,(void *)clock_generator_v4_03_a_a_2944670654_3708392848_sub_3990837679_4252281916};
	xsi_register_didat("clock_generator_v4_03_a_a_2944670654_3708392848", "isim/testbench_isim_beh.exe.sim/clock_generator_v4_03_a/a_2944670654_3708392848.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
