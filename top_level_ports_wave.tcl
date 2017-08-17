#  Simulation Model Generator
#  Xilinx EDK 14.7 EDK_P.20131013
#  Copyright (c) 1995-2012 Xilinx, Inc.  All rights reserved.
#
#  File     top_level_ports_wave.tcl (Thu Aug 17 16:35:24 2017)
#
if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
if { ![info exists tbpath] } { set tbpath "microblaze_tb${ps}dut" }

wave add $tbpath${ps}fpga_0_RS232_RX_pin -into $id 
wave add $tbpath${ps}fpga_0_RS232_TX_pin -into $id 
wave add $tbpath${ps}fpga_0_clk_1_sys_clk_pin -into $id 
wave add $tbpath${ps}fpga_0_rst_1_sys_rst_pin -into $id 
wave add $tbpath${ps}plb_dac_0_S_Data_pin -into $id 
wave add $tbpath${ps}plb_dac_0_S_DCLKIO_pin -into $id 
wave add $tbpath${ps}plb_dac_0_S_Clkout_pin -into $id 
wave add $tbpath${ps}plb_dac_0_S_PinMD_pin -into $id 
wave add $tbpath${ps}plb_dac_0_S_ClkMD_pin -into $id 
wave add $tbpath${ps}plb_dac_0_S_Format_pin -into $id 
wave add $tbpath${ps}plb_dac_0_S_PWRDN_pin -into $id 
wave add $tbpath${ps}xps_gpio_0_GPIO_IO_pin -into $id 

