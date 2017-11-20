#  Simulation Model Generator
#  Xilinx EDK 14.7 EDK_P.20131013
#  Copyright (c) 1995-2012 Xilinx, Inc.  All rights reserved.
#
#  File     microblaze_wave.tcl (Sun Nov 19 14:43:04 2017)
#
#  ISE Simulator Trace Script File
#
#  Trace script files specify signals to save for later
#  display when viewing results of the simulation a graphic
#  format. Comment or uncomment commands to change the set of
#  signals viewed.
#
puts  "Setting up signal tracing ..."

if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
if { ![info exists tbpath] } { set tbpath "microblaze_tb${ps}dut" }

#
#  Trace top-level ports
#
set id [group add "Top level ports"]
source top_level_ports_wave.tcl


#
#  Trace Bus signal ports
#
set id [group add "Bus signal ports" ]
source mb_plb_wave.tcl

source ilmb_wave.tcl

source dlmb_wave.tcl

#
#  Trace Processor ports
#
set id [group add "Processor ports" ]
source microblaze_0_wave.tcl

#
#  Trace processor registers
#

set id [group add "Processor registers"]
#  Processor registers cannot be displayed for:
#  Module   microblaze_microblaze_0_wrapper
#  Instance microblaze_0
#  Register display support will be added in a future EDK release

#
#  Trace IP and peripheral ports
#
set id [group add "IP and peripheral ports" ]
source dlmb_cntlr_wave.tcl

source ilmb_cntlr_wave.tcl

source lmb_bram_wave.tcl

source RS232_wave.tcl

source clock_generator_0_wave.tcl

source mdm_0_wave.tcl

source proc_sys_reset_0_wave.tcl

source xps_intc_0_wave.tcl

source plb_dac_0_wave.tcl

source plb_dac_1_wave.tcl

#
#  Trace setup complete. Start tracing the signals.
#

puts  "Signal tracing setup completed."

puts  "Simulate the design with the 'run' command."
