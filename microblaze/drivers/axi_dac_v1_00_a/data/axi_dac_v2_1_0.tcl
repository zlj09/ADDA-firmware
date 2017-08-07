##############################################################################
## Filename:          F:\Programs\Verilog\FPGA_Group\test_br0101\microblaze/drivers/axi_dac_v1_00_a/data/axi_dac_v2_1_0.tcl
## Description:       Microprocess Driver Command (tcl)
## Date:              Sun Aug 06 14:50:48 2017 (by Create and Import Peripheral Wizard)
##############################################################################

#uses "xillib.tcl"

proc generate {drv_handle} {
  xdefine_include_file $drv_handle "xparameters.h" "axi_dac" "NUM_INSTANCES" "DEVICE_ID" "C_BASEADDR" "C_HIGHADDR" 
}
