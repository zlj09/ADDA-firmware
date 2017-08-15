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
static const char *ng0 = "G:/Xilinx/14.7/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/xps_iic_v2_03_a/hdl/vhdl/debounce.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
char *ieee_p_1242562249_sub_1919437128_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_1388759734_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void xps_iic_v2_03_a_a_2233925881_3306564128_p_0(char *t0)
{
    char t12[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned char t20;
    unsigned char t21;
    char *t22;

LAB0:    xsi_set_current_line(172, ng0);
    t1 = (t0 + 708U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 2580);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(173, ng0);
    t3 = (t0 + 824U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 1284U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 1100U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1388759734_503743352(IEEE_P_2592010699, t5);
    t11 = (t2 == t6);
    if (t11 != 0)
        goto LAB8;

LAB9:    xsi_set_current_line(180, ng0);
    t1 = (t0 + 1684U);
    t3 = *((char **)t1);
    t13 = (8 - 8);
    t14 = (t13 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t1 = (t3 + t16);
    t2 = *((unsigned char *)t1);
    t5 = (t2 == (unsigned char)2);
    if (t5 != 0)
        goto LAB10;

LAB12:
LAB11:    xsi_set_current_line(183, ng0);
    t1 = (t0 + 1684U);
    t3 = *((char **)t1);
    t13 = (8 - 8);
    t14 = (t13 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t1 = (t3 + t16);
    t5 = *((unsigned char *)t1);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB16;

LAB17:    t2 = (unsigned char)0;

LAB18:    if (t2 != 0)
        goto LAB13;

LAB15:
LAB14:    xsi_set_current_line(186, ng0);
    t1 = (t0 + 1684U);
    t3 = *((char **)t1);
    t13 = (8 - 8);
    t14 = (t13 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t1 = (t3 + t16);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 2668);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t2;
    xsi_driver_first_trans_fast_port(t4);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(174, ng0);
    t3 = (t0 + 2632);
    t7 = (t3 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t3);
    goto LAB6;

LAB8:    xsi_set_current_line(177, ng0);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t12, 5, 9);
    t7 = (t0 + 1684U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    memcpy(t7, t1, 9U);
    xsi_set_current_line(178, ng0);
    t1 = (t0 + 2668);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB6;

LAB10:    xsi_set_current_line(181, ng0);
    t4 = (t0 + 1684U);
    t7 = *((char **)t4);
    t4 = (t0 + 5260U);
    t8 = ieee_p_1242562249_sub_1919437128_1035706684(IEEE_P_1242562249, t12, t7, t4, 1);
    t9 = (t0 + 1684U);
    t10 = *((char **)t9);
    t9 = (t10 + 0);
    t17 = (t12 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (1U * t18);
    memcpy(t9, t8, t19);
    goto LAB11;

LAB13:    xsi_set_current_line(184, ng0);
    t4 = (t0 + 1100U);
    t8 = *((char **)t4);
    t21 = *((unsigned char *)t8);
    t4 = (t0 + 2632);
    t9 = (t4 + 32U);
    t10 = *((char **)t9);
    t17 = (t10 + 40U);
    t22 = *((char **)t17);
    *((unsigned char *)t22) = t21;
    xsi_driver_first_trans_fast(t4);
    goto LAB14;

LAB16:    t4 = (t0 + 916U);
    t7 = *((char **)t4);
    t11 = *((unsigned char *)t7);
    t20 = (t11 == (unsigned char)3);
    t2 = t20;
    goto LAB18;

}

static void xps_iic_v2_03_a_a_2233925881_3306564128_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(192, ng0);

LAB3:    t1 = (t0 + 1284U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 2704);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 2588);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void xps_iic_v2_03_a_a_2233925881_3306564128_init()
{
	static char *pe[] = {(void *)xps_iic_v2_03_a_a_2233925881_3306564128_p_0,(void *)xps_iic_v2_03_a_a_2233925881_3306564128_p_1};
	xsi_register_didat("xps_iic_v2_03_a_a_2233925881_3306564128", "isim/testbench_isim_beh.exe.sim/xps_iic_v2_03_a/a_2233925881_3306564128.didat");
	xsi_register_executes(pe);
}
