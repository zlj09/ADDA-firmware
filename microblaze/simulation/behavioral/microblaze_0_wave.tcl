#  Simulation Model Generator
#  Xilinx EDK 14.7 EDK_P.20131013
#  Copyright (c) 1995-2012 Xilinx, Inc.  All rights reserved.
#
#  File     microblaze_0_wave.tcl (Wed Aug 16 13:16:04 2017)
#
#  Module   microblaze_microblaze_0_wrapper
#  Instance microblaze_0
if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
if { ![info exists tbpath] } { set tbpath "microblaze_tb${ps}dut" }

  wave add $tbpath${ps}microblaze_0${ps}CLK -into $id
  wave add $tbpath${ps}microblaze_0${ps}RESET -into $id
  wave add $tbpath${ps}microblaze_0${ps}MB_RESET -into $id
  wave add $tbpath${ps}microblaze_0${ps}INTERRUPT -into $id
  wave add $tbpath${ps}microblaze_0${ps}INTERRUPT_ADDRESS -into $id
# wave add $tbpath${ps}microblaze_0${ps}INTERRUPT_ACK -into $id
  wave add $tbpath${ps}microblaze_0${ps}EXT_BRK -into $id
  wave add $tbpath${ps}microblaze_0${ps}EXT_NM_BRK -into $id
  wave add $tbpath${ps}microblaze_0${ps}DBG_STOP -into $id
# wave add $tbpath${ps}microblaze_0${ps}MB_Halted -into $id
# wave add $tbpath${ps}microblaze_0${ps}MB_Error -into $id
  wave add $tbpath${ps}microblaze_0${ps}WAKEUP -into $id
# wave add $tbpath${ps}microblaze_0${ps}SLEEP -into $id
# wave add $tbpath${ps}microblaze_0${ps}DBG_WAKEUP -into $id
# wave add $tbpath${ps}microblaze_0${ps}LOCKSTEP_MASTER_OUT -into $id
  wave add $tbpath${ps}microblaze_0${ps}LOCKSTEP_SLAVE_IN -into $id
# wave add $tbpath${ps}microblaze_0${ps}LOCKSTEP_OUT -into $id
  wave add $tbpath${ps}microblaze_0${ps}INSTR -into $id
  wave add $tbpath${ps}microblaze_0${ps}IREADY -into $id
  wave add $tbpath${ps}microblaze_0${ps}IWAIT -into $id
  wave add $tbpath${ps}microblaze_0${ps}ICE -into $id
  wave add $tbpath${ps}microblaze_0${ps}IUE -into $id
  wave add $tbpath${ps}microblaze_0${ps}INSTR_ADDR -into $id
  wave add $tbpath${ps}microblaze_0${ps}IFETCH -into $id
  wave add $tbpath${ps}microblaze_0${ps}I_AS -into $id
  wave add $tbpath${ps}microblaze_0${ps}IPLB_M_ABort -into $id
  wave add $tbpath${ps}microblaze_0${ps}IPLB_M_ABus -into $id
  wave add $tbpath${ps}microblaze_0${ps}IPLB_M_UABus -into $id
  wave add $tbpath${ps}microblaze_0${ps}IPLB_M_BE -into $id
  wave add $tbpath${ps}microblaze_0${ps}IPLB_M_busLock -into $id
  wave add $tbpath${ps}microblaze_0${ps}IPLB_M_lockErr -into $id
  wave add $tbpath${ps}microblaze_0${ps}IPLB_M_MSize -into $id
  wave add $tbpath${ps}microblaze_0${ps}IPLB_M_priority -into $id
  wave add $tbpath${ps}microblaze_0${ps}IPLB_M_rdBurst -into $id
  wave add $tbpath${ps}microblaze_0${ps}IPLB_M_request -into $id
  wave add $tbpath${ps}microblaze_0${ps}IPLB_M_RNW -into $id
  wave add $tbpath${ps}microblaze_0${ps}IPLB_M_size -into $id
  wave add $tbpath${ps}microblaze_0${ps}IPLB_M_TAttribute -into $id
  wave add $tbpath${ps}microblaze_0${ps}IPLB_M_type -into $id
  wave add $tbpath${ps}microblaze_0${ps}IPLB_M_wrBurst -into $id
  wave add $tbpath${ps}microblaze_0${ps}IPLB_M_wrDBus -into $id
  wave add $tbpath${ps}microblaze_0${ps}IPLB_MBusy -into $id
  wave add $tbpath${ps}microblaze_0${ps}IPLB_MRdErr -into $id
  wave add $tbpath${ps}microblaze_0${ps}IPLB_MWrErr -into $id
  wave add $tbpath${ps}microblaze_0${ps}IPLB_MIRQ -into $id
  wave add $tbpath${ps}microblaze_0${ps}IPLB_MWrBTerm -into $id
  wave add $tbpath${ps}microblaze_0${ps}IPLB_MWrDAck -into $id
  wave add $tbpath${ps}microblaze_0${ps}IPLB_MAddrAck -into $id
  wave add $tbpath${ps}microblaze_0${ps}IPLB_MRdBTerm -into $id
  wave add $tbpath${ps}microblaze_0${ps}IPLB_MRdDAck -into $id
  wave add $tbpath${ps}microblaze_0${ps}IPLB_MRdDBus -into $id
  wave add $tbpath${ps}microblaze_0${ps}IPLB_MRdWdAddr -into $id
  wave add $tbpath${ps}microblaze_0${ps}IPLB_MRearbitrate -into $id
  wave add $tbpath${ps}microblaze_0${ps}IPLB_MSSize -into $id
  wave add $tbpath${ps}microblaze_0${ps}IPLB_MTimeout -into $id
  wave add $tbpath${ps}microblaze_0${ps}DATA_READ -into $id
  wave add $tbpath${ps}microblaze_0${ps}DREADY -into $id
  wave add $tbpath${ps}microblaze_0${ps}DWAIT -into $id
  wave add $tbpath${ps}microblaze_0${ps}DCE -into $id
  wave add $tbpath${ps}microblaze_0${ps}DUE -into $id
  wave add $tbpath${ps}microblaze_0${ps}DATA_WRITE -into $id
  wave add $tbpath${ps}microblaze_0${ps}DATA_ADDR -into $id
  wave add $tbpath${ps}microblaze_0${ps}D_AS -into $id
  wave add $tbpath${ps}microblaze_0${ps}READ_STROBE -into $id
  wave add $tbpath${ps}microblaze_0${ps}WRITE_STROBE -into $id
  wave add $tbpath${ps}microblaze_0${ps}BYTE_ENABLE -into $id
  wave add $tbpath${ps}microblaze_0${ps}DPLB_M_ABort -into $id
  wave add $tbpath${ps}microblaze_0${ps}DPLB_M_ABus -into $id
  wave add $tbpath${ps}microblaze_0${ps}DPLB_M_UABus -into $id
  wave add $tbpath${ps}microblaze_0${ps}DPLB_M_BE -into $id
  wave add $tbpath${ps}microblaze_0${ps}DPLB_M_busLock -into $id
  wave add $tbpath${ps}microblaze_0${ps}DPLB_M_lockErr -into $id
  wave add $tbpath${ps}microblaze_0${ps}DPLB_M_MSize -into $id
  wave add $tbpath${ps}microblaze_0${ps}DPLB_M_priority -into $id
  wave add $tbpath${ps}microblaze_0${ps}DPLB_M_rdBurst -into $id
  wave add $tbpath${ps}microblaze_0${ps}DPLB_M_request -into $id
  wave add $tbpath${ps}microblaze_0${ps}DPLB_M_RNW -into $id
  wave add $tbpath${ps}microblaze_0${ps}DPLB_M_size -into $id
  wave add $tbpath${ps}microblaze_0${ps}DPLB_M_TAttribute -into $id
  wave add $tbpath${ps}microblaze_0${ps}DPLB_M_type -into $id
  wave add $tbpath${ps}microblaze_0${ps}DPLB_M_wrBurst -into $id
  wave add $tbpath${ps}microblaze_0${ps}DPLB_M_wrDBus -into $id
  wave add $tbpath${ps}microblaze_0${ps}DPLB_MBusy -into $id
  wave add $tbpath${ps}microblaze_0${ps}DPLB_MRdErr -into $id
  wave add $tbpath${ps}microblaze_0${ps}DPLB_MWrErr -into $id
  wave add $tbpath${ps}microblaze_0${ps}DPLB_MIRQ -into $id
  wave add $tbpath${ps}microblaze_0${ps}DPLB_MWrBTerm -into $id
  wave add $tbpath${ps}microblaze_0${ps}DPLB_MWrDAck -into $id
  wave add $tbpath${ps}microblaze_0${ps}DPLB_MAddrAck -into $id
  wave add $tbpath${ps}microblaze_0${ps}DPLB_MRdBTerm -into $id
  wave add $tbpath${ps}microblaze_0${ps}DPLB_MRdDAck -into $id
  wave add $tbpath${ps}microblaze_0${ps}DPLB_MRdDBus -into $id
  wave add $tbpath${ps}microblaze_0${ps}DPLB_MRdWdAddr -into $id
  wave add $tbpath${ps}microblaze_0${ps}DPLB_MRearbitrate -into $id
  wave add $tbpath${ps}microblaze_0${ps}DPLB_MSSize -into $id
  wave add $tbpath${ps}microblaze_0${ps}DPLB_MTimeout -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IP_AWID -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IP_AWADDR -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IP_AWLEN -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IP_AWSIZE -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IP_AWBURST -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IP_AWLOCK -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IP_AWCACHE -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IP_AWPROT -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IP_AWQOS -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IP_AWVALID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_IP_AWREADY -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IP_WDATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IP_WSTRB -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IP_WLAST -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IP_WVALID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_IP_WREADY -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_IP_BID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_IP_BRESP -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_IP_BVALID -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IP_BREADY -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IP_ARID -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IP_ARADDR -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IP_ARLEN -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IP_ARSIZE -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IP_ARBURST -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IP_ARLOCK -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IP_ARCACHE -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IP_ARPROT -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IP_ARQOS -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IP_ARVALID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_IP_ARREADY -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_IP_RID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_IP_RDATA -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_IP_RRESP -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_IP_RLAST -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_IP_RVALID -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IP_RREADY -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DP_AWID -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DP_AWADDR -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DP_AWLEN -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DP_AWSIZE -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DP_AWBURST -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DP_AWLOCK -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DP_AWCACHE -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DP_AWPROT -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DP_AWQOS -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DP_AWVALID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_DP_AWREADY -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DP_WDATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DP_WSTRB -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DP_WLAST -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DP_WVALID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_DP_WREADY -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_DP_BID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_DP_BRESP -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_DP_BVALID -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DP_BREADY -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DP_ARID -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DP_ARADDR -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DP_ARLEN -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DP_ARSIZE -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DP_ARBURST -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DP_ARLOCK -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DP_ARCACHE -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DP_ARPROT -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DP_ARQOS -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DP_ARVALID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_DP_ARREADY -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_DP_RID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_DP_RDATA -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_DP_RRESP -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_DP_RLAST -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_DP_RVALID -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DP_RREADY -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_AWID -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_AWADDR -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_AWLEN -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_AWSIZE -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_AWBURST -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_AWLOCK -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_AWCACHE -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_AWPROT -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_AWQOS -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_AWVALID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_AWREADY -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_AWUSER -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_AWDOMAIN -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_AWSNOOP -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_AWBAR -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_WDATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_WSTRB -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_WLAST -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_WVALID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_WREADY -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_WUSER -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_BID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_BRESP -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_BVALID -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_BREADY -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_BUSER -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_WACK -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_ARID -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_ARADDR -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_ARLEN -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_ARSIZE -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_ARBURST -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_ARLOCK -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_ARCACHE -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_ARPROT -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_ARQOS -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_ARVALID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_ARREADY -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_ARUSER -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_ARDOMAIN -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_ARSNOOP -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_ARBAR -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_RID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_RDATA -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_RRESP -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_RLAST -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_RVALID -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_RREADY -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_RUSER -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_RACK -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_ACVALID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_ACADDR -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_ACSNOOP -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_ACPROT -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_ACREADY -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_CRREADY -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_CRVALID -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_CRRESP -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_CDVALID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_CDREADY -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_CDDATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_IC_CDLAST -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_AWID -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_AWADDR -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_AWLEN -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_AWSIZE -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_AWBURST -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_AWLOCK -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_AWCACHE -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_AWPROT -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_AWQOS -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_AWVALID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_AWREADY -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_AWUSER -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_AWDOMAIN -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_AWSNOOP -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_AWBAR -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_WDATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_WSTRB -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_WLAST -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_WVALID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_WREADY -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_WUSER -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_BID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_BRESP -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_BVALID -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_BREADY -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_BUSER -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_WACK -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_ARID -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_ARADDR -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_ARLEN -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_ARSIZE -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_ARBURST -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_ARLOCK -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_ARCACHE -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_ARPROT -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_ARQOS -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_ARVALID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_ARREADY -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_ARUSER -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_ARDOMAIN -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_ARSNOOP -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_ARBAR -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_RID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_RDATA -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_RRESP -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_RLAST -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_RVALID -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_RREADY -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_RUSER -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_RACK -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_ACVALID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_ACADDR -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_ACSNOOP -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_ACPROT -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_ACREADY -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_CRREADY -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_CRVALID -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_CRRESP -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_CDVALID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_CDREADY -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_CDDATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}M_AXI_DC_CDLAST -into $id
  wave add $tbpath${ps}microblaze_0${ps}DBG_CLK -into $id
  wave add $tbpath${ps}microblaze_0${ps}DBG_TDI -into $id
  wave add $tbpath${ps}microblaze_0${ps}DBG_TDO -into $id
  wave add $tbpath${ps}microblaze_0${ps}DBG_REG_EN -into $id
  wave add $tbpath${ps}microblaze_0${ps}DBG_SHIFT -into $id
  wave add $tbpath${ps}microblaze_0${ps}DBG_CAPTURE -into $id
  wave add $tbpath${ps}microblaze_0${ps}DBG_UPDATE -into $id
  wave add $tbpath${ps}microblaze_0${ps}DEBUG_RST -into $id
# wave add $tbpath${ps}microblaze_0${ps}Trace_Instruction -into $id
# wave add $tbpath${ps}microblaze_0${ps}Trace_Valid_Instr -into $id
# wave add $tbpath${ps}microblaze_0${ps}Trace_PC -into $id
# wave add $tbpath${ps}microblaze_0${ps}Trace_Reg_Write -into $id
# wave add $tbpath${ps}microblaze_0${ps}Trace_Reg_Addr -into $id
# wave add $tbpath${ps}microblaze_0${ps}Trace_MSR_Reg -into $id
# wave add $tbpath${ps}microblaze_0${ps}Trace_PID_Reg -into $id
# wave add $tbpath${ps}microblaze_0${ps}Trace_New_Reg_Value -into $id
# wave add $tbpath${ps}microblaze_0${ps}Trace_Exception_Taken -into $id
# wave add $tbpath${ps}microblaze_0${ps}Trace_Exception_Kind -into $id
# wave add $tbpath${ps}microblaze_0${ps}Trace_Jump_Taken -into $id
# wave add $tbpath${ps}microblaze_0${ps}Trace_Delay_Slot -into $id
# wave add $tbpath${ps}microblaze_0${ps}Trace_Data_Address -into $id
# wave add $tbpath${ps}microblaze_0${ps}Trace_Data_Access -into $id
# wave add $tbpath${ps}microblaze_0${ps}Trace_Data_Read -into $id
# wave add $tbpath${ps}microblaze_0${ps}Trace_Data_Write -into $id
# wave add $tbpath${ps}microblaze_0${ps}Trace_Data_Write_Value -into $id
# wave add $tbpath${ps}microblaze_0${ps}Trace_Data_Byte_Enable -into $id
# wave add $tbpath${ps}microblaze_0${ps}Trace_DCache_Req -into $id
# wave add $tbpath${ps}microblaze_0${ps}Trace_DCache_Hit -into $id
# wave add $tbpath${ps}microblaze_0${ps}Trace_DCache_Rdy -into $id
# wave add $tbpath${ps}microblaze_0${ps}Trace_DCache_Read -into $id
# wave add $tbpath${ps}microblaze_0${ps}Trace_ICache_Req -into $id
# wave add $tbpath${ps}microblaze_0${ps}Trace_ICache_Hit -into $id
# wave add $tbpath${ps}microblaze_0${ps}Trace_ICache_Rdy -into $id
# wave add $tbpath${ps}microblaze_0${ps}Trace_OF_PipeRun -into $id
# wave add $tbpath${ps}microblaze_0${ps}Trace_EX_PipeRun -into $id
# wave add $tbpath${ps}microblaze_0${ps}Trace_MEM_PipeRun -into $id
# wave add $tbpath${ps}microblaze_0${ps}Trace_MB_Halted -into $id
# wave add $tbpath${ps}microblaze_0${ps}Trace_Jump_Hit -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL0_S_CLK -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL0_S_READ -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL0_S_DATA -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL0_S_CONTROL -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL0_S_EXISTS -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL0_M_CLK -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL0_M_WRITE -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL0_M_DATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL0_M_CONTROL -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL0_M_FULL -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL1_S_CLK -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL1_S_READ -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL1_S_DATA -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL1_S_CONTROL -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL1_S_EXISTS -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL1_M_CLK -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL1_M_WRITE -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL1_M_DATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL1_M_CONTROL -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL1_M_FULL -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL2_S_CLK -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL2_S_READ -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL2_S_DATA -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL2_S_CONTROL -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL2_S_EXISTS -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL2_M_CLK -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL2_M_WRITE -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL2_M_DATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL2_M_CONTROL -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL2_M_FULL -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL3_S_CLK -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL3_S_READ -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL3_S_DATA -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL3_S_CONTROL -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL3_S_EXISTS -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL3_M_CLK -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL3_M_WRITE -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL3_M_DATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL3_M_CONTROL -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL3_M_FULL -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL4_S_CLK -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL4_S_READ -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL4_S_DATA -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL4_S_CONTROL -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL4_S_EXISTS -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL4_M_CLK -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL4_M_WRITE -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL4_M_DATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL4_M_CONTROL -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL4_M_FULL -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL5_S_CLK -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL5_S_READ -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL5_S_DATA -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL5_S_CONTROL -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL5_S_EXISTS -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL5_M_CLK -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL5_M_WRITE -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL5_M_DATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL5_M_CONTROL -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL5_M_FULL -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL6_S_CLK -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL6_S_READ -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL6_S_DATA -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL6_S_CONTROL -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL6_S_EXISTS -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL6_M_CLK -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL6_M_WRITE -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL6_M_DATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL6_M_CONTROL -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL6_M_FULL -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL7_S_CLK -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL7_S_READ -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL7_S_DATA -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL7_S_CONTROL -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL7_S_EXISTS -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL7_M_CLK -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL7_M_WRITE -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL7_M_DATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL7_M_CONTROL -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL7_M_FULL -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL8_S_CLK -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL8_S_READ -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL8_S_DATA -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL8_S_CONTROL -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL8_S_EXISTS -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL8_M_CLK -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL8_M_WRITE -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL8_M_DATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL8_M_CONTROL -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL8_M_FULL -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL9_S_CLK -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL9_S_READ -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL9_S_DATA -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL9_S_CONTROL -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL9_S_EXISTS -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL9_M_CLK -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL9_M_WRITE -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL9_M_DATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL9_M_CONTROL -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL9_M_FULL -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL10_S_CLK -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL10_S_READ -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL10_S_DATA -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL10_S_CONTROL -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL10_S_EXISTS -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL10_M_CLK -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL10_M_WRITE -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL10_M_DATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL10_M_CONTROL -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL10_M_FULL -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL11_S_CLK -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL11_S_READ -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL11_S_DATA -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL11_S_CONTROL -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL11_S_EXISTS -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL11_M_CLK -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL11_M_WRITE -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL11_M_DATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL11_M_CONTROL -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL11_M_FULL -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL12_S_CLK -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL12_S_READ -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL12_S_DATA -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL12_S_CONTROL -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL12_S_EXISTS -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL12_M_CLK -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL12_M_WRITE -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL12_M_DATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL12_M_CONTROL -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL12_M_FULL -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL13_S_CLK -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL13_S_READ -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL13_S_DATA -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL13_S_CONTROL -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL13_S_EXISTS -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL13_M_CLK -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL13_M_WRITE -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL13_M_DATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL13_M_CONTROL -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL13_M_FULL -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL14_S_CLK -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL14_S_READ -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL14_S_DATA -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL14_S_CONTROL -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL14_S_EXISTS -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL14_M_CLK -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL14_M_WRITE -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL14_M_DATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL14_M_CONTROL -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL14_M_FULL -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL15_S_CLK -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL15_S_READ -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL15_S_DATA -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL15_S_CONTROL -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL15_S_EXISTS -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL15_M_CLK -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL15_M_WRITE -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL15_M_DATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}FSL15_M_CONTROL -into $id
  wave add $tbpath${ps}microblaze_0${ps}FSL15_M_FULL -into $id
# wave add $tbpath${ps}microblaze_0${ps}M0_AXIS_TLAST -into $id
# wave add $tbpath${ps}microblaze_0${ps}M0_AXIS_TDATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}M0_AXIS_TVALID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M0_AXIS_TREADY -into $id
  wave add $tbpath${ps}microblaze_0${ps}S0_AXIS_TLAST -into $id
  wave add $tbpath${ps}microblaze_0${ps}S0_AXIS_TDATA -into $id
  wave add $tbpath${ps}microblaze_0${ps}S0_AXIS_TVALID -into $id
# wave add $tbpath${ps}microblaze_0${ps}S0_AXIS_TREADY -into $id
# wave add $tbpath${ps}microblaze_0${ps}M1_AXIS_TLAST -into $id
# wave add $tbpath${ps}microblaze_0${ps}M1_AXIS_TDATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}M1_AXIS_TVALID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M1_AXIS_TREADY -into $id
  wave add $tbpath${ps}microblaze_0${ps}S1_AXIS_TLAST -into $id
  wave add $tbpath${ps}microblaze_0${ps}S1_AXIS_TDATA -into $id
  wave add $tbpath${ps}microblaze_0${ps}S1_AXIS_TVALID -into $id
# wave add $tbpath${ps}microblaze_0${ps}S1_AXIS_TREADY -into $id
# wave add $tbpath${ps}microblaze_0${ps}M2_AXIS_TLAST -into $id
# wave add $tbpath${ps}microblaze_0${ps}M2_AXIS_TDATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}M2_AXIS_TVALID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M2_AXIS_TREADY -into $id
  wave add $tbpath${ps}microblaze_0${ps}S2_AXIS_TLAST -into $id
  wave add $tbpath${ps}microblaze_0${ps}S2_AXIS_TDATA -into $id
  wave add $tbpath${ps}microblaze_0${ps}S2_AXIS_TVALID -into $id
# wave add $tbpath${ps}microblaze_0${ps}S2_AXIS_TREADY -into $id
# wave add $tbpath${ps}microblaze_0${ps}M3_AXIS_TLAST -into $id
# wave add $tbpath${ps}microblaze_0${ps}M3_AXIS_TDATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}M3_AXIS_TVALID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M3_AXIS_TREADY -into $id
  wave add $tbpath${ps}microblaze_0${ps}S3_AXIS_TLAST -into $id
  wave add $tbpath${ps}microblaze_0${ps}S3_AXIS_TDATA -into $id
  wave add $tbpath${ps}microblaze_0${ps}S3_AXIS_TVALID -into $id
# wave add $tbpath${ps}microblaze_0${ps}S3_AXIS_TREADY -into $id
# wave add $tbpath${ps}microblaze_0${ps}M4_AXIS_TLAST -into $id
# wave add $tbpath${ps}microblaze_0${ps}M4_AXIS_TDATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}M4_AXIS_TVALID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M4_AXIS_TREADY -into $id
  wave add $tbpath${ps}microblaze_0${ps}S4_AXIS_TLAST -into $id
  wave add $tbpath${ps}microblaze_0${ps}S4_AXIS_TDATA -into $id
  wave add $tbpath${ps}microblaze_0${ps}S4_AXIS_TVALID -into $id
# wave add $tbpath${ps}microblaze_0${ps}S4_AXIS_TREADY -into $id
# wave add $tbpath${ps}microblaze_0${ps}M5_AXIS_TLAST -into $id
# wave add $tbpath${ps}microblaze_0${ps}M5_AXIS_TDATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}M5_AXIS_TVALID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M5_AXIS_TREADY -into $id
  wave add $tbpath${ps}microblaze_0${ps}S5_AXIS_TLAST -into $id
  wave add $tbpath${ps}microblaze_0${ps}S5_AXIS_TDATA -into $id
  wave add $tbpath${ps}microblaze_0${ps}S5_AXIS_TVALID -into $id
# wave add $tbpath${ps}microblaze_0${ps}S5_AXIS_TREADY -into $id
# wave add $tbpath${ps}microblaze_0${ps}M6_AXIS_TLAST -into $id
# wave add $tbpath${ps}microblaze_0${ps}M6_AXIS_TDATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}M6_AXIS_TVALID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M6_AXIS_TREADY -into $id
  wave add $tbpath${ps}microblaze_0${ps}S6_AXIS_TLAST -into $id
  wave add $tbpath${ps}microblaze_0${ps}S6_AXIS_TDATA -into $id
  wave add $tbpath${ps}microblaze_0${ps}S6_AXIS_TVALID -into $id
# wave add $tbpath${ps}microblaze_0${ps}S6_AXIS_TREADY -into $id
# wave add $tbpath${ps}microblaze_0${ps}M7_AXIS_TLAST -into $id
# wave add $tbpath${ps}microblaze_0${ps}M7_AXIS_TDATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}M7_AXIS_TVALID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M7_AXIS_TREADY -into $id
  wave add $tbpath${ps}microblaze_0${ps}S7_AXIS_TLAST -into $id
  wave add $tbpath${ps}microblaze_0${ps}S7_AXIS_TDATA -into $id
  wave add $tbpath${ps}microblaze_0${ps}S7_AXIS_TVALID -into $id
# wave add $tbpath${ps}microblaze_0${ps}S7_AXIS_TREADY -into $id
# wave add $tbpath${ps}microblaze_0${ps}M8_AXIS_TLAST -into $id
# wave add $tbpath${ps}microblaze_0${ps}M8_AXIS_TDATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}M8_AXIS_TVALID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M8_AXIS_TREADY -into $id
  wave add $tbpath${ps}microblaze_0${ps}S8_AXIS_TLAST -into $id
  wave add $tbpath${ps}microblaze_0${ps}S8_AXIS_TDATA -into $id
  wave add $tbpath${ps}microblaze_0${ps}S8_AXIS_TVALID -into $id
# wave add $tbpath${ps}microblaze_0${ps}S8_AXIS_TREADY -into $id
# wave add $tbpath${ps}microblaze_0${ps}M9_AXIS_TLAST -into $id
# wave add $tbpath${ps}microblaze_0${ps}M9_AXIS_TDATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}M9_AXIS_TVALID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M9_AXIS_TREADY -into $id
  wave add $tbpath${ps}microblaze_0${ps}S9_AXIS_TLAST -into $id
  wave add $tbpath${ps}microblaze_0${ps}S9_AXIS_TDATA -into $id
  wave add $tbpath${ps}microblaze_0${ps}S9_AXIS_TVALID -into $id
# wave add $tbpath${ps}microblaze_0${ps}S9_AXIS_TREADY -into $id
# wave add $tbpath${ps}microblaze_0${ps}M10_AXIS_TLAST -into $id
# wave add $tbpath${ps}microblaze_0${ps}M10_AXIS_TDATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}M10_AXIS_TVALID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M10_AXIS_TREADY -into $id
  wave add $tbpath${ps}microblaze_0${ps}S10_AXIS_TLAST -into $id
  wave add $tbpath${ps}microblaze_0${ps}S10_AXIS_TDATA -into $id
  wave add $tbpath${ps}microblaze_0${ps}S10_AXIS_TVALID -into $id
# wave add $tbpath${ps}microblaze_0${ps}S10_AXIS_TREADY -into $id
# wave add $tbpath${ps}microblaze_0${ps}M11_AXIS_TLAST -into $id
# wave add $tbpath${ps}microblaze_0${ps}M11_AXIS_TDATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}M11_AXIS_TVALID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M11_AXIS_TREADY -into $id
  wave add $tbpath${ps}microblaze_0${ps}S11_AXIS_TLAST -into $id
  wave add $tbpath${ps}microblaze_0${ps}S11_AXIS_TDATA -into $id
  wave add $tbpath${ps}microblaze_0${ps}S11_AXIS_TVALID -into $id
# wave add $tbpath${ps}microblaze_0${ps}S11_AXIS_TREADY -into $id
# wave add $tbpath${ps}microblaze_0${ps}M12_AXIS_TLAST -into $id
# wave add $tbpath${ps}microblaze_0${ps}M12_AXIS_TDATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}M12_AXIS_TVALID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M12_AXIS_TREADY -into $id
  wave add $tbpath${ps}microblaze_0${ps}S12_AXIS_TLAST -into $id
  wave add $tbpath${ps}microblaze_0${ps}S12_AXIS_TDATA -into $id
  wave add $tbpath${ps}microblaze_0${ps}S12_AXIS_TVALID -into $id
# wave add $tbpath${ps}microblaze_0${ps}S12_AXIS_TREADY -into $id
# wave add $tbpath${ps}microblaze_0${ps}M13_AXIS_TLAST -into $id
# wave add $tbpath${ps}microblaze_0${ps}M13_AXIS_TDATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}M13_AXIS_TVALID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M13_AXIS_TREADY -into $id
  wave add $tbpath${ps}microblaze_0${ps}S13_AXIS_TLAST -into $id
  wave add $tbpath${ps}microblaze_0${ps}S13_AXIS_TDATA -into $id
  wave add $tbpath${ps}microblaze_0${ps}S13_AXIS_TVALID -into $id
# wave add $tbpath${ps}microblaze_0${ps}S13_AXIS_TREADY -into $id
# wave add $tbpath${ps}microblaze_0${ps}M14_AXIS_TLAST -into $id
# wave add $tbpath${ps}microblaze_0${ps}M14_AXIS_TDATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}M14_AXIS_TVALID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M14_AXIS_TREADY -into $id
  wave add $tbpath${ps}microblaze_0${ps}S14_AXIS_TLAST -into $id
  wave add $tbpath${ps}microblaze_0${ps}S14_AXIS_TDATA -into $id
  wave add $tbpath${ps}microblaze_0${ps}S14_AXIS_TVALID -into $id
# wave add $tbpath${ps}microblaze_0${ps}S14_AXIS_TREADY -into $id
# wave add $tbpath${ps}microblaze_0${ps}M15_AXIS_TLAST -into $id
# wave add $tbpath${ps}microblaze_0${ps}M15_AXIS_TDATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}M15_AXIS_TVALID -into $id
  wave add $tbpath${ps}microblaze_0${ps}M15_AXIS_TREADY -into $id
  wave add $tbpath${ps}microblaze_0${ps}S15_AXIS_TLAST -into $id
  wave add $tbpath${ps}microblaze_0${ps}S15_AXIS_TDATA -into $id
  wave add $tbpath${ps}microblaze_0${ps}S15_AXIS_TVALID -into $id
# wave add $tbpath${ps}microblaze_0${ps}S15_AXIS_TREADY -into $id
# wave add $tbpath${ps}microblaze_0${ps}ICACHE_FSL_IN_CLK -into $id
# wave add $tbpath${ps}microblaze_0${ps}ICACHE_FSL_IN_READ -into $id
  wave add $tbpath${ps}microblaze_0${ps}ICACHE_FSL_IN_DATA -into $id
  wave add $tbpath${ps}microblaze_0${ps}ICACHE_FSL_IN_CONTROL -into $id
  wave add $tbpath${ps}microblaze_0${ps}ICACHE_FSL_IN_EXISTS -into $id
# wave add $tbpath${ps}microblaze_0${ps}ICACHE_FSL_OUT_CLK -into $id
# wave add $tbpath${ps}microblaze_0${ps}ICACHE_FSL_OUT_WRITE -into $id
# wave add $tbpath${ps}microblaze_0${ps}ICACHE_FSL_OUT_DATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}ICACHE_FSL_OUT_CONTROL -into $id
  wave add $tbpath${ps}microblaze_0${ps}ICACHE_FSL_OUT_FULL -into $id
# wave add $tbpath${ps}microblaze_0${ps}DCACHE_FSL_IN_CLK -into $id
# wave add $tbpath${ps}microblaze_0${ps}DCACHE_FSL_IN_READ -into $id
  wave add $tbpath${ps}microblaze_0${ps}DCACHE_FSL_IN_DATA -into $id
  wave add $tbpath${ps}microblaze_0${ps}DCACHE_FSL_IN_CONTROL -into $id
  wave add $tbpath${ps}microblaze_0${ps}DCACHE_FSL_IN_EXISTS -into $id
# wave add $tbpath${ps}microblaze_0${ps}DCACHE_FSL_OUT_CLK -into $id
# wave add $tbpath${ps}microblaze_0${ps}DCACHE_FSL_OUT_WRITE -into $id
# wave add $tbpath${ps}microblaze_0${ps}DCACHE_FSL_OUT_DATA -into $id
# wave add $tbpath${ps}microblaze_0${ps}DCACHE_FSL_OUT_CONTROL -into $id
  wave add $tbpath${ps}microblaze_0${ps}DCACHE_FSL_OUT_FULL -into $id

