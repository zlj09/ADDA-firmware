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
    xilinxcorelib_ver_m_00000000001358910285_1553495686_init();
    xilinxcorelib_ver_m_00000000001687936702_1919104518_init();
    xilinxcorelib_ver_m_00000000000277421008_1818492484_init();
    xilinxcorelib_ver_m_00000000001603977570_3230960494_init();
    work_m_00000000000403262735_4229478289_init();
    work_m_00000000001016529530_2873161800_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001016529530_2873161800");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
