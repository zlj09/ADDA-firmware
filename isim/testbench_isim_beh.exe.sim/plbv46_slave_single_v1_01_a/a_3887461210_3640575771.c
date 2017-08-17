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
static const char *ng1 = "G:/Xilinx/14.7/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/plbv46_slave_single_v1_01_a/hdl/vhdl/plbv46_slave_single.vhd";
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );


int plbv46_slave_single_v1_01_a_a_3887461210_3640575771_sub_1235313201_2560086426(char *t1, int t2)
{
    char t3[72];
    char t4[8];
    char t8[8];
    int t0;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;

LAB0:    t5 = (t3 + 4U);
    t6 = ((STD_STANDARD) + 240);
    t7 = (t5 + 52U);
    *((char **)t7) = t6;
    t9 = (t5 + 36U);
    *((char **)t9) = t8;
    *((int *)t8) = 0;
    t10 = (t5 + 48U);
    *((unsigned int *)t10) = 4U;
    t11 = (t4 + 4U);
    *((int *)t11) = t2;
    if (t2 == 32)
        goto LAB3;

LAB8:    if (t2 == 64)
        goto LAB4;

LAB9:    if (t2 == 128)
        goto LAB5;

LAB10:    if (t2 == 256)
        goto LAB6;

LAB11:
LAB7:    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = 0;

LAB2:    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t14 = *((int *)t7);
    t0 = t14;

LAB1:    return t0;
LAB3:    t12 = (t5 + 36U);
    t13 = *((char **)t12);
    t12 = (t13 + 0);
    *((int *)t12) = 0;
    goto LAB2;

LAB4:    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = 1;
    goto LAB2;

LAB5:    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = 2;
    goto LAB2;

LAB6:    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = 3;
    goto LAB2;

LAB12:;
LAB13:;
}

static void plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(474, ng1);

LAB3:    t1 = xsi_get_transient_memory(2U);
    memset(t1, 0, 2U);
    t2 = t1;
    memset(t2, (unsigned char)2, 2U);
    t3 = (t0 + 13388);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(596, ng1);

LAB3:    t1 = (t0 + 1836U);
    t2 = *((char **)t1);
    t1 = (t0 + 13424);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t7 = (t0 + 13176);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(597, ng1);

LAB3:    t1 = (t0 + 6160U);
    t2 = *((char **)t1);
    t1 = (t0 + 13460);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 13184);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(665, ng1);

LAB3:    t1 = (t0 + 5792U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 13496);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 13192);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(666, ng1);

LAB3:    t1 = (t0 + 5884U);
    t2 = *((char **)t1);
    t1 = (t0 + 13532);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 2U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 13200);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(667, ng1);

LAB3:    t1 = (t0 + 6528U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 13568);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 13208);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_6(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(668, ng1);

LAB3:    t1 = (t0 + 6436U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 13604);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 13216);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_7(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(669, ng1);

LAB3:    t1 = (t0 + 5976U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 13640);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 13224);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_8(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(670, ng1);

LAB3:    t1 = (t0 + 6068U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 13676);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 13232);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(671, ng1);

LAB3:    t1 = (t0 + 13712);
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

static void plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_10(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(672, ng1);

LAB3:    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t3 = (t0 + 13748);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_11(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(673, ng1);

LAB3:    t1 = (t0 + 6252U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 13784);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 13240);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_12(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(674, ng1);

LAB3:    t1 = (t0 + 6344U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 13820);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 13248);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_13(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(675, ng1);

LAB3:    t1 = (t0 + 13856);
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

static void plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_14(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(676, ng1);

LAB3:    t1 = (t0 + 6620U);
    t2 = *((char **)t1);
    t1 = (t0 + 13892);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 2U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 13256);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_15(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(677, ng1);

LAB3:    t1 = (t0 + 6712U);
    t2 = *((char **)t1);
    t1 = (t0 + 13928);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 2U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 13264);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_16(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(678, ng1);

LAB3:    t1 = (t0 + 6804U);
    t2 = *((char **)t1);
    t1 = (t0 + 13964);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 2U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 13272);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_17(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(679, ng1);

LAB3:    t2 = (t0 + 8392U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t1, t4, 2);
    t5 = (t0 + 14000);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 2U);
    xsi_driver_first_trans_fast(t5);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_18(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(681, ng1);

LAB3:    t1 = (t0 + 7172U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 14036);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 13280);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_19(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(682, ng1);

LAB3:    t1 = (t0 + 6896U);
    t2 = *((char **)t1);
    t1 = (t0 + 14072);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 13288);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_20(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(683, ng1);

LAB3:    t1 = (t0 + 7080U);
    t2 = *((char **)t1);
    t3 = (0 - 0);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 14108);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 13296);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_21(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(684, ng1);

LAB3:    t1 = (t0 + 6988U);
    t2 = *((char **)t1);
    t1 = (t0 + 14144);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 13304);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_22(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(685, ng1);

LAB3:    t1 = (t0 + 7264U);
    t2 = *((char **)t1);
    t1 = (t0 + 14180);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 1U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 13312);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_23(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(686, ng1);

LAB3:    t1 = (t0 + 7356U);
    t2 = *((char **)t1);
    t1 = (t0 + 14216);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 5U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 13320);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_24(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(687, ng1);

LAB3:    t1 = (t0 + 7448U);
    t2 = *((char **)t1);
    t1 = (t0 + 14252);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 5U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 13328);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_25(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(688, ng1);

LAB3:    t1 = (t0 + 732U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 14288);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 13336);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_26(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(689, ng1);

LAB3:    t1 = (t0 + 824U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 14324);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 13344);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void plbv46_slave_single_v1_01_a_a_3887461210_3640575771_init()
{
	static char *pe[] = {(void *)plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_0,(void *)plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_1,(void *)plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_2,(void *)plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_3,(void *)plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_4,(void *)plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_5,(void *)plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_6,(void *)plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_7,(void *)plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_8,(void *)plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_9,(void *)plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_10,(void *)plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_11,(void *)plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_12,(void *)plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_13,(void *)plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_14,(void *)plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_15,(void *)plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_16,(void *)plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_17,(void *)plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_18,(void *)plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_19,(void *)plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_20,(void *)plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_21,(void *)plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_22,(void *)plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_23,(void *)plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_24,(void *)plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_25,(void *)plbv46_slave_single_v1_01_a_a_3887461210_3640575771_p_26};
	static char *se[] = {(void *)plbv46_slave_single_v1_01_a_a_3887461210_3640575771_sub_1235313201_2560086426};
	xsi_register_didat("plbv46_slave_single_v1_01_a_a_3887461210_3640575771", "isim/testbench_isim_beh.exe.sim/plbv46_slave_single_v1_01_a/a_3887461210_3640575771.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
