#  Simulation Model Generator
#  Xilinx EDK 14.7 EDK_P.20131013
#  Copyright (c) 1995-2012 Xilinx, Inc.  All rights reserved.
#
#  File     ilmb_wave.tcl (Wed Aug 16 13:16:04 2017)
#
#  Module   microblaze_ilmb_wrapper
#  Instance ilmb
if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
if { ![info exists tbpath] } { set tbpath "microblaze_tb${ps}dut" }

# wave add $tbpath${ps}ilmb${ps}LMB_Clk -into $id
# wave add $tbpath${ps}ilmb${ps}SYS_Rst -into $id
  wave add $tbpath${ps}ilmb${ps}LMB_Rst -into $id
# wave add $tbpath${ps}ilmb${ps}M_ABus -into $id
# wave add $tbpath${ps}ilmb${ps}M_ReadStrobe -into $id
# wave add $tbpath${ps}ilmb${ps}M_WriteStrobe -into $id
# wave add $tbpath${ps}ilmb${ps}M_AddrStrobe -into $id
# wave add $tbpath${ps}ilmb${ps}M_DBus -into $id
# wave add $tbpath${ps}ilmb${ps}M_BE -into $id
# wave add $tbpath${ps}ilmb${ps}Sl_DBus -into $id
# wave add $tbpath${ps}ilmb${ps}Sl_Ready -into $id
# wave add $tbpath${ps}ilmb${ps}Sl_Wait -into $id
# wave add $tbpath${ps}ilmb${ps}Sl_UE -into $id
# wave add $tbpath${ps}ilmb${ps}Sl_CE -into $id
  wave add $tbpath${ps}ilmb${ps}LMB_ABus -into $id
  wave add $tbpath${ps}ilmb${ps}LMB_ReadStrobe -into $id
  wave add $tbpath${ps}ilmb${ps}LMB_WriteStrobe -into $id
  wave add $tbpath${ps}ilmb${ps}LMB_AddrStrobe -into $id
  wave add $tbpath${ps}ilmb${ps}LMB_ReadDBus -into $id
  wave add $tbpath${ps}ilmb${ps}LMB_WriteDBus -into $id
  wave add $tbpath${ps}ilmb${ps}LMB_Ready -into $id
  wave add $tbpath${ps}ilmb${ps}LMB_Wait -into $id
  wave add $tbpath${ps}ilmb${ps}LMB_UE -into $id
  wave add $tbpath${ps}ilmb${ps}LMB_CE -into $id
  wave add $tbpath${ps}ilmb${ps}LMB_BE -into $id

