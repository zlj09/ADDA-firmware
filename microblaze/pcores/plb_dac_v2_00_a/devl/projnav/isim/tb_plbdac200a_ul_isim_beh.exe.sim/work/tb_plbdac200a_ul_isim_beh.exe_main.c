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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000000710765116_3716231424_init();
    work_m_00000000000612687740_0359768046_init();
    work_m_00000000001544785609_0115671765_init();
    work_m_00000000002612800258_3268654154_init();
    work_m_00000000003045124311_1285749795_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003045124311_1285749795");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
