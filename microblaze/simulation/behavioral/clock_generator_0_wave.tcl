#  Simulation Model Generator
#  Xilinx EDK 14.7 EDK_P.20131013
#  Copyright (c) 1995-2012 Xilinx, Inc.  All rights reserved.
#
#  File     clock_generator_0_wave.tcl (Thu Aug 17 19:28:12 2017)
#
#  Module   microblaze_clock_generator_0_wrapper
#  Instance clock_generator_0
if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
if { ![info exists tbpath] } { set tbpath "microblaze_tb${ps}dut" }

  wave add $tbpath${ps}clock_generator_0${ps}CLKIN -into $id
  wave add $tbpath${ps}clock_generator_0${ps}CLKOUT0 -into $id
# wave add $tbpath${ps}clock_generator_0${ps}CLKOUT1 -into $id
# wave add $tbpath${ps}clock_generator_0${ps}CLKOUT2 -into $id
# wave add $tbpath${ps}clock_generator_0${ps}CLKOUT3 -into $id
# wave add $tbpath${ps}clock_generator_0${ps}CLKOUT4 -into $id
# wave add $tbpath${ps}clock_generator_0${ps}CLKOUT5 -into $id
# wave add $tbpath${ps}clock_generator_0${ps}CLKOUT6 -into $id
# wave add $tbpath${ps}clock_generator_0${ps}CLKOUT7 -into $id
# wave add $tbpath${ps}clock_generator_0${ps}CLKOUT8 -into $id
# wave add $tbpath${ps}clock_generator_0${ps}CLKOUT9 -into $id
# wave add $tbpath${ps}clock_generator_0${ps}CLKOUT10 -into $id
# wave add $tbpath${ps}clock_generator_0${ps}CLKOUT11 -into $id
# wave add $tbpath${ps}clock_generator_0${ps}CLKOUT12 -into $id
# wave add $tbpath${ps}clock_generator_0${ps}CLKOUT13 -into $id
# wave add $tbpath${ps}clock_generator_0${ps}CLKOUT14 -into $id
# wave add $tbpath${ps}clock_generator_0${ps}CLKOUT15 -into $id
  wave add $tbpath${ps}clock_generator_0${ps}CLKFBIN -into $id
# wave add $tbpath${ps}clock_generator_0${ps}CLKFBOUT -into $id
  wave add $tbpath${ps}clock_generator_0${ps}PSCLK -into $id
  wave add $tbpath${ps}clock_generator_0${ps}PSEN -into $id
  wave add $tbpath${ps}clock_generator_0${ps}PSINCDEC -into $id
# wave add $tbpath${ps}clock_generator_0${ps}PSDONE -into $id
  wave add $tbpath${ps}clock_generator_0${ps}RST -into $id
  wave add $tbpath${ps}clock_generator_0${ps}LOCKED -into $id

