#  Simulation Model Generator
#  Xilinx EDK 14.7 EDK_P.20131013
#  Copyright (c) 1995-2012 Xilinx, Inc.  All rights reserved.
#
#  File     mb_plb_wave.tcl (Fri Aug 18 10:26:58 2017)
#
#  Module   microblaze_mb_plb_wrapper
#  Instance mb_plb
if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
if { ![info exists tbpath] } { set tbpath "microblaze_tb${ps}dut" }

# wave add $tbpath${ps}mb_plb${ps}PLB_Clk -into $id
# wave add $tbpath${ps}mb_plb${ps}SYS_Rst -into $id
# wave add $tbpath${ps}mb_plb${ps}PLB_Rst -into $id
  wave add $tbpath${ps}mb_plb${ps}SPLB_Rst -into $id
# wave add $tbpath${ps}mb_plb${ps}MPLB_Rst -into $id
# wave add $tbpath${ps}mb_plb${ps}PLB_dcrAck -into $id
# wave add $tbpath${ps}mb_plb${ps}PLB_dcrDBus -into $id
# wave add $tbpath${ps}mb_plb${ps}DCR_ABus -into $id
# wave add $tbpath${ps}mb_plb${ps}DCR_DBus -into $id
# wave add $tbpath${ps}mb_plb${ps}DCR_Read -into $id
# wave add $tbpath${ps}mb_plb${ps}DCR_Write -into $id
# wave add $tbpath${ps}mb_plb${ps}M_ABus -into $id
# wave add $tbpath${ps}mb_plb${ps}M_UABus -into $id
# wave add $tbpath${ps}mb_plb${ps}M_BE -into $id
# wave add $tbpath${ps}mb_plb${ps}M_RNW -into $id
# wave add $tbpath${ps}mb_plb${ps}M_abort -into $id
# wave add $tbpath${ps}mb_plb${ps}M_busLock -into $id
# wave add $tbpath${ps}mb_plb${ps}M_TAttribute -into $id
# wave add $tbpath${ps}mb_plb${ps}M_lockErr -into $id
# wave add $tbpath${ps}mb_plb${ps}M_MSize -into $id
# wave add $tbpath${ps}mb_plb${ps}M_priority -into $id
# wave add $tbpath${ps}mb_plb${ps}M_rdBurst -into $id
# wave add $tbpath${ps}mb_plb${ps}M_request -into $id
# wave add $tbpath${ps}mb_plb${ps}M_size -into $id
# wave add $tbpath${ps}mb_plb${ps}M_type -into $id
# wave add $tbpath${ps}mb_plb${ps}M_wrBurst -into $id
# wave add $tbpath${ps}mb_plb${ps}M_wrDBus -into $id
# wave add $tbpath${ps}mb_plb${ps}Sl_addrAck -into $id
# wave add $tbpath${ps}mb_plb${ps}Sl_MRdErr -into $id
# wave add $tbpath${ps}mb_plb${ps}Sl_MWrErr -into $id
# wave add $tbpath${ps}mb_plb${ps}Sl_MBusy -into $id
# wave add $tbpath${ps}mb_plb${ps}Sl_rdBTerm -into $id
# wave add $tbpath${ps}mb_plb${ps}Sl_rdComp -into $id
# wave add $tbpath${ps}mb_plb${ps}Sl_rdDAck -into $id
# wave add $tbpath${ps}mb_plb${ps}Sl_rdDBus -into $id
# wave add $tbpath${ps}mb_plb${ps}Sl_rdWdAddr -into $id
# wave add $tbpath${ps}mb_plb${ps}Sl_rearbitrate -into $id
# wave add $tbpath${ps}mb_plb${ps}Sl_SSize -into $id
# wave add $tbpath${ps}mb_plb${ps}Sl_wait -into $id
# wave add $tbpath${ps}mb_plb${ps}Sl_wrBTerm -into $id
# wave add $tbpath${ps}mb_plb${ps}Sl_wrComp -into $id
# wave add $tbpath${ps}mb_plb${ps}Sl_wrDAck -into $id
# wave add $tbpath${ps}mb_plb${ps}Sl_MIRQ -into $id
  wave add $tbpath${ps}mb_plb${ps}PLB_MIRQ -into $id
  wave add $tbpath${ps}mb_plb${ps}PLB_ABus -into $id
  wave add $tbpath${ps}mb_plb${ps}PLB_UABus -into $id
  wave add $tbpath${ps}mb_plb${ps}PLB_BE -into $id
  wave add $tbpath${ps}mb_plb${ps}PLB_MAddrAck -into $id
  wave add $tbpath${ps}mb_plb${ps}PLB_MTimeout -into $id
  wave add $tbpath${ps}mb_plb${ps}PLB_MBusy -into $id
  wave add $tbpath${ps}mb_plb${ps}PLB_MRdErr -into $id
  wave add $tbpath${ps}mb_plb${ps}PLB_MWrErr -into $id
  wave add $tbpath${ps}mb_plb${ps}PLB_MRdBTerm -into $id
  wave add $tbpath${ps}mb_plb${ps}PLB_MRdDAck -into $id
  wave add $tbpath${ps}mb_plb${ps}PLB_MRdDBus -into $id
  wave add $tbpath${ps}mb_plb${ps}PLB_MRdWdAddr -into $id
  wave add $tbpath${ps}mb_plb${ps}PLB_MRearbitrate -into $id
  wave add $tbpath${ps}mb_plb${ps}PLB_MWrBTerm -into $id
  wave add $tbpath${ps}mb_plb${ps}PLB_MWrDAck -into $id
  wave add $tbpath${ps}mb_plb${ps}PLB_MSSize -into $id
  wave add $tbpath${ps}mb_plb${ps}PLB_PAValid -into $id
  wave add $tbpath${ps}mb_plb${ps}PLB_RNW -into $id
  wave add $tbpath${ps}mb_plb${ps}PLB_SAValid -into $id
  wave add $tbpath${ps}mb_plb${ps}PLB_abort -into $id
  wave add $tbpath${ps}mb_plb${ps}PLB_busLock -into $id
  wave add $tbpath${ps}mb_plb${ps}PLB_TAttribute -into $id
  wave add $tbpath${ps}mb_plb${ps}PLB_lockErr -into $id
  wave add $tbpath${ps}mb_plb${ps}PLB_masterID -into $id
  wave add $tbpath${ps}mb_plb${ps}PLB_MSize -into $id
  wave add $tbpath${ps}mb_plb${ps}PLB_rdPendPri -into $id
  wave add $tbpath${ps}mb_plb${ps}PLB_wrPendPri -into $id
  wave add $tbpath${ps}mb_plb${ps}PLB_rdPendReq -into $id
  wave add $tbpath${ps}mb_plb${ps}PLB_wrPendReq -into $id
  wave add $tbpath${ps}mb_plb${ps}PLB_rdBurst -into $id
  wave add $tbpath${ps}mb_plb${ps}PLB_rdPrim -into $id
  wave add $tbpath${ps}mb_plb${ps}PLB_reqPri -into $id
  wave add $tbpath${ps}mb_plb${ps}PLB_size -into $id
  wave add $tbpath${ps}mb_plb${ps}PLB_type -into $id
  wave add $tbpath${ps}mb_plb${ps}PLB_wrBurst -into $id
  wave add $tbpath${ps}mb_plb${ps}PLB_wrDBus -into $id
  wave add $tbpath${ps}mb_plb${ps}PLB_wrPrim -into $id
# wave add $tbpath${ps}mb_plb${ps}PLB_SaddrAck -into $id
# wave add $tbpath${ps}mb_plb${ps}PLB_SMRdErr -into $id
# wave add $tbpath${ps}mb_plb${ps}PLB_SMWrErr -into $id
# wave add $tbpath${ps}mb_plb${ps}PLB_SMBusy -into $id
# wave add $tbpath${ps}mb_plb${ps}PLB_SrdBTerm -into $id
# wave add $tbpath${ps}mb_plb${ps}PLB_SrdComp -into $id
# wave add $tbpath${ps}mb_plb${ps}PLB_SrdDAck -into $id
# wave add $tbpath${ps}mb_plb${ps}PLB_SrdDBus -into $id
# wave add $tbpath${ps}mb_plb${ps}PLB_SrdWdAddr -into $id
# wave add $tbpath${ps}mb_plb${ps}PLB_Srearbitrate -into $id
# wave add $tbpath${ps}mb_plb${ps}PLB_Sssize -into $id
# wave add $tbpath${ps}mb_plb${ps}PLB_Swait -into $id
# wave add $tbpath${ps}mb_plb${ps}PLB_SwrBTerm -into $id
# wave add $tbpath${ps}mb_plb${ps}PLB_SwrComp -into $id
# wave add $tbpath${ps}mb_plb${ps}PLB_SwrDAck -into $id
# wave add $tbpath${ps}mb_plb${ps}Bus_Error_Det -into $id

