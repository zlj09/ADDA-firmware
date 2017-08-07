##############################################################################
## Filename:          F:\Programs\Verilog\FPGA_Group\test_br0101\microblaze/drivers/plb_dac_v1_00_a/data/plb_dac_v2_1_0.tcl
## Description:       Microprocess Driver Command (tcl)
## Date:              Mon Aug 07 11:50:44 2017 (by Create and Import Peripheral Wizard)
##############################################################################

#uses "xillib.tcl"

proc generate {drv_handle} {
  xdefine_include_file $drv_handle "xparameters.h" "plb_dac" "NUM_INSTANCES" "DEVICE_ID" "C_BASEADDR" "C_HIGHADDR" 
}
