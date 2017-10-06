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
    unisims_ver_m_00000000003317509437_1759035934_init();
    unisims_ver_m_00000000003927721830_1593237687_init();
    unisims_ver_m_00000000001508379050_3852734344_init();
    unisims_ver_m_00000000003405408344_3623931463_init();
    unisims_ver_m_00000000003405408344_3841093685_init();
    unisims_ver_m_00000000000909115699_2771340377_init();
    unisims_ver_m_00000000003848737514_1058825862_init();
    unisims_ver_m_00000000001773747898_2336946039_init();
    unisims_ver_m_00000000000236260522_2449448540_init();
    unisims_ver_m_00000000001037948890_0721693702_init();
    unisims_ver_m_00000000003550501074_1134479503_init();
    work_m_00000000001099973430_0341684077_init();
    xilinxcorelib_ver_m_00000000001358910285_1553495686_init();
    xilinxcorelib_ver_m_00000000001687936702_1919104518_init();
    xilinxcorelib_ver_m_00000000000277421008_1818492484_init();
    xilinxcorelib_ver_m_00000000001603977570_3230960494_init();
    work_m_00000000000403262735_4229478289_init();
    work_m_00000000001514243016_3268654154_init();
    work_m_00000000002303912585_1595589151_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002303912585_1595589151");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
