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
static const char *ng0 = "F:/Programs/Verilog/FPGA_Group/test_br0101/microblaze/pcores/plb_dac_v3_00_a/vsim/tb_pdv3ul.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {15U, 0U};
static unsigned int ng4[] = {64U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {32U, 0U};
static unsigned int ng7[] = {4660U, 0U};
static unsigned int ng8[] = {16U, 0U};
static unsigned int ng9[] = {291U, 0U};
static unsigned int ng10[] = {0U, 0U};
static unsigned int ng11[] = {3276817U, 0U};
static unsigned int ng12[] = {3276833U, 0U};
static unsigned int ng13[] = {3276849U, 0U};
static unsigned int ng14[] = {3276865U, 0U};
static unsigned int ng15[] = {3276929U, 0U};
static unsigned int ng16[] = {3276993U, 0U};
static unsigned int ng17[] = {6553633U, 0U};
static unsigned int ng18[] = {13107233U, 0U};



static void Initial_83_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 3376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(83, ng0);

LAB4:    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2116);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2300);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2392);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2484);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2668);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2852);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 3276);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2668);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3276);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2852);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 3276);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2852);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 3276);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2852);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 3276);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2852);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 3276);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2852);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 3276);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2852);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 3276);
    xsi_process_wait(t2, 10240000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2852);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 3276);
    xsi_process_wait(t2, 10240000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2852);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 2576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 3276);
    xsi_process_wait(t2, 10240000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2852);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 2576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(140, ng0);
    t2 = (t0 + 3276);
    xsi_process_wait(t2, 10240000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2852);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 2576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 3276);
    xsi_process_wait(t2, 10240000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2852);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 2576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 3276);
    xsi_process_wait(t2, 10240000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2852);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 3276);
    xsi_process_wait(t2, 10240000LL);
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2852);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 2576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB1;

}

static void Always_158_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 3520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 3716);
    *((int *)t2) = 1;
    t3 = (t0 + 3548);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(159, ng0);
    t4 = (t0 + 3420);
    xsi_process_wait(t4, 5000LL);
    *((char **)t1) = &&LAB5;
    goto LAB1;

LAB5:    xsi_set_current_line(159, ng0);
    t6 = (t0 + 2116);
    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    memset(t5, 0, 8);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t9) == 0)
        goto LAB6;

LAB8:    t15 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t15) = 1;

LAB9:    t16 = (t5 + 4);
    t17 = (t8 + 4);
    t18 = *((unsigned int *)t8);
    t19 = (~(t18));
    *((unsigned int *)t5) = t19;
    *((unsigned int *)t16) = 0;
    if (*((unsigned int *)t17) != 0)
        goto LAB11;

LAB10:    t24 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t24 & 1U);
    t25 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t25 & 1U);
    t26 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t26, t5, 0, 0, 1, 0LL);
    goto LAB2;

LAB6:    *((unsigned int *)t5) = 1;
    goto LAB9;

LAB11:    t20 = *((unsigned int *)t5);
    t21 = *((unsigned int *)t17);
    *((unsigned int *)t5) = (t20 | t21);
    t22 = *((unsigned int *)t16);
    t23 = *((unsigned int *)t17);
    *((unsigned int *)t16) = (t22 | t23);
    goto LAB10;

}


extern void work_m_00000000002303912585_1595589151_init()
{
	static char *pe[] = {(void *)Initial_83_0,(void *)Always_158_1};
	xsi_register_didat("work_m_00000000002303912585_1595589151", "isim/tb_pdv3ul_isim_beh.exe.sim/work/m_00000000002303912585_1595589151.didat");
	xsi_register_executes(pe);
}