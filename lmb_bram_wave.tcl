#  Simulation Model Generator
#  Xilinx EDK 14.7 EDK_P.20131013
#  Copyright (c) 1995-2012 Xilinx, Inc.  All rights reserved.
#
#  File     lmb_bram_wave.tcl (Sun Aug 27 10:07:55 2017)
#
#  Module   microblaze_lmb_bram_wrapper
#  Instance lmb_bram
if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
if { ![info exists tbpath] } { set tbpath "microblaze_tb${ps}dut" }

# wave add $tbpath${ps}lmb_bram${ps}BRAM_Rst_A -into $id
# wave add $tbpath${ps}lmb_bram${ps}BRAM_Clk_A -into $id
# wave add $tbpath${ps}lmb_bram${ps}BRAM_EN_A -into $id
# wave add $tbpath${ps}lmb_bram${ps}BRAM_WEN_A -into $id
# wave add $tbpath${ps}lmb_bram${ps}BRAM_Addr_A -into $id
  wave add $tbpath${ps}lmb_bram${ps}BRAM_Din_A -into $id
# wave add $tbpath${ps}lmb_bram${ps}BRAM_Dout_A -into $id
# wave add $tbpath${ps}lmb_bram${ps}BRAM_Rst_B -into $id
# wave add $tbpath${ps}lmb_bram${ps}BRAM_Clk_B -into $id
# wave add $tbpath${ps}lmb_bram${ps}BRAM_EN_B -into $id
# wave add $tbpath${ps}lmb_bram${ps}BRAM_WEN_B -into $id
# wave add $tbpath${ps}lmb_bram${ps}BRAM_Addr_B -into $id
  wave add $tbpath${ps}lmb_bram${ps}BRAM_Din_B -into $id
# wave add $tbpath${ps}lmb_bram${ps}BRAM_Dout_B -into $id

