onerror {resume}
wave add /
#
# Set the tbpath (test bench path)
#
variable tbpath /testbench/dut
#
# Set the xcmdc/xcmds variables
#
variable xcmdc 1
variable xcmds 1
#
# Source the setup file
#
source microblaze_setup.tcl
w_top
run 1000 ns;
