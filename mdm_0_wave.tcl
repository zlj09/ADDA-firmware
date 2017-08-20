#  Simulation Model Generator
#  Xilinx EDK 14.7 EDK_P.20131013
#  Copyright (c) 1995-2012 Xilinx, Inc.  All rights reserved.
#
#  File     mdm_0_wave.tcl (Sun Aug 20 12:33:54 2017)
#
#  Module   microblaze_mdm_0_wrapper
#  Instance mdm_0
if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
if { ![info exists tbpath] } { set tbpath "microblaze_tb${ps}dut" }

# wave add $tbpath${ps}mdm_0${ps}Interrupt -into $id
  wave add $tbpath${ps}mdm_0${ps}Debug_SYS_Rst -into $id
  wave add $tbpath${ps}mdm_0${ps}Ext_BRK -into $id
  wave add $tbpath${ps}mdm_0${ps}Ext_NM_BRK -into $id
# wave add $tbpath${ps}mdm_0${ps}S_AXI_ACLK -into $id
# wave add $tbpath${ps}mdm_0${ps}S_AXI_ARESETN -into $id
# wave add $tbpath${ps}mdm_0${ps}S_AXI_AWADDR -into $id
# wave add $tbpath${ps}mdm_0${ps}S_AXI_AWVALID -into $id
# wave add $tbpath${ps}mdm_0${ps}S_AXI_AWREADY -into $id
# wave add $tbpath${ps}mdm_0${ps}S_AXI_WDATA -into $id
# wave add $tbpath${ps}mdm_0${ps}S_AXI_WSTRB -into $id
# wave add $tbpath${ps}mdm_0${ps}S_AXI_WVALID -into $id
# wave add $tbpath${ps}mdm_0${ps}S_AXI_WREADY -into $id
# wave add $tbpath${ps}mdm_0${ps}S_AXI_BRESP -into $id
# wave add $tbpath${ps}mdm_0${ps}S_AXI_BVALID -into $id
# wave add $tbpath${ps}mdm_0${ps}S_AXI_BREADY -into $id
# wave add $tbpath${ps}mdm_0${ps}S_AXI_ARADDR -into $id
# wave add $tbpath${ps}mdm_0${ps}S_AXI_ARVALID -into $id
# wave add $tbpath${ps}mdm_0${ps}S_AXI_ARREADY -into $id
# wave add $tbpath${ps}mdm_0${ps}S_AXI_RDATA -into $id
# wave add $tbpath${ps}mdm_0${ps}S_AXI_RRESP -into $id
# wave add $tbpath${ps}mdm_0${ps}S_AXI_RVALID -into $id
# wave add $tbpath${ps}mdm_0${ps}S_AXI_RREADY -into $id
# wave add $tbpath${ps}mdm_0${ps}SPLB_Clk -into $id
# wave add $tbpath${ps}mdm_0${ps}SPLB_Rst -into $id
# wave add $tbpath${ps}mdm_0${ps}PLB_ABus -into $id
# wave add $tbpath${ps}mdm_0${ps}PLB_UABus -into $id
# wave add $tbpath${ps}mdm_0${ps}PLB_PAValid -into $id
# wave add $tbpath${ps}mdm_0${ps}PLB_SAValid -into $id
# wave add $tbpath${ps}mdm_0${ps}PLB_rdPrim -into $id
# wave add $tbpath${ps}mdm_0${ps}PLB_wrPrim -into $id
# wave add $tbpath${ps}mdm_0${ps}PLB_masterID -into $id
# wave add $tbpath${ps}mdm_0${ps}PLB_abort -into $id
# wave add $tbpath${ps}mdm_0${ps}PLB_busLock -into $id
# wave add $tbpath${ps}mdm_0${ps}PLB_RNW -into $id
# wave add $tbpath${ps}mdm_0${ps}PLB_BE -into $id
# wave add $tbpath${ps}mdm_0${ps}PLB_MSize -into $id
# wave add $tbpath${ps}mdm_0${ps}PLB_size -into $id
# wave add $tbpath${ps}mdm_0${ps}PLB_type -into $id
# wave add $tbpath${ps}mdm_0${ps}PLB_lockErr -into $id
# wave add $tbpath${ps}mdm_0${ps}PLB_wrDBus -into $id
# wave add $tbpath${ps}mdm_0${ps}PLB_wrBurst -into $id
# wave add $tbpath${ps}mdm_0${ps}PLB_rdBurst -into $id
# wave add $tbpath${ps}mdm_0${ps}PLB_wrPendReq -into $id
# wave add $tbpath${ps}mdm_0${ps}PLB_rdPendReq -into $id
# wave add $tbpath${ps}mdm_0${ps}PLB_wrPendPri -into $id
# wave add $tbpath${ps}mdm_0${ps}PLB_rdPendPri -into $id
# wave add $tbpath${ps}mdm_0${ps}PLB_reqPri -into $id
# wave add $tbpath${ps}mdm_0${ps}PLB_TAttribute -into $id
  wave add $tbpath${ps}mdm_0${ps}Sl_addrAck -into $id
  wave add $tbpath${ps}mdm_0${ps}Sl_SSize -into $id
  wave add $tbpath${ps}mdm_0${ps}Sl_wait -into $id
  wave add $tbpath${ps}mdm_0${ps}Sl_rearbitrate -into $id
  wave add $tbpath${ps}mdm_0${ps}Sl_wrDAck -into $id
  wave add $tbpath${ps}mdm_0${ps}Sl_wrComp -into $id
  wave add $tbpath${ps}mdm_0${ps}Sl_wrBTerm -into $id
  wave add $tbpath${ps}mdm_0${ps}Sl_rdDBus -into $id
  wave add $tbpath${ps}mdm_0${ps}Sl_rdWdAddr -into $id
  wave add $tbpath${ps}mdm_0${ps}Sl_rdDAck -into $id
  wave add $tbpath${ps}mdm_0${ps}Sl_rdComp -into $id
  wave add $tbpath${ps}mdm_0${ps}Sl_rdBTerm -into $id
  wave add $tbpath${ps}mdm_0${ps}Sl_MBusy -into $id
  wave add $tbpath${ps}mdm_0${ps}Sl_MWrErr -into $id
  wave add $tbpath${ps}mdm_0${ps}Sl_MRdErr -into $id
  wave add $tbpath${ps}mdm_0${ps}Sl_MIRQ -into $id
  wave add $tbpath${ps}mdm_0${ps}Dbg_Clk_0 -into $id
  wave add $tbpath${ps}mdm_0${ps}Dbg_TDI_0 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDO_0 -into $id
  wave add $tbpath${ps}mdm_0${ps}Dbg_Reg_En_0 -into $id
  wave add $tbpath${ps}mdm_0${ps}Dbg_Capture_0 -into $id
  wave add $tbpath${ps}mdm_0${ps}Dbg_Shift_0 -into $id
  wave add $tbpath${ps}mdm_0${ps}Dbg_Update_0 -into $id
  wave add $tbpath${ps}mdm_0${ps}Dbg_Rst_0 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Clk_1 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDI_1 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDO_1 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Reg_En_1 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Capture_1 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Shift_1 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Update_1 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Rst_1 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Clk_2 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDI_2 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDO_2 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Reg_En_2 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Capture_2 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Shift_2 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Update_2 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Rst_2 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Clk_3 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDI_3 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDO_3 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Reg_En_3 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Capture_3 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Shift_3 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Update_3 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Rst_3 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Clk_4 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDI_4 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDO_4 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Reg_En_4 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Capture_4 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Shift_4 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Update_4 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Rst_4 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Clk_5 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDI_5 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDO_5 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Reg_En_5 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Capture_5 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Shift_5 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Update_5 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Rst_5 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Clk_6 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDI_6 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDO_6 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Reg_En_6 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Capture_6 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Shift_6 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Update_6 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Rst_6 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Clk_7 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDI_7 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDO_7 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Reg_En_7 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Capture_7 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Shift_7 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Update_7 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Rst_7 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Clk_8 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDI_8 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDO_8 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Reg_En_8 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Capture_8 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Shift_8 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Update_8 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Rst_8 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Clk_9 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDI_9 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDO_9 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Reg_En_9 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Capture_9 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Shift_9 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Update_9 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Rst_9 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Clk_10 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDI_10 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDO_10 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Reg_En_10 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Capture_10 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Shift_10 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Update_10 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Rst_10 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Clk_11 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDI_11 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDO_11 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Reg_En_11 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Capture_11 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Shift_11 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Update_11 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Rst_11 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Clk_12 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDI_12 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDO_12 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Reg_En_12 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Capture_12 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Shift_12 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Update_12 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Rst_12 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Clk_13 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDI_13 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDO_13 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Reg_En_13 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Capture_13 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Shift_13 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Update_13 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Rst_13 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Clk_14 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDI_14 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDO_14 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Reg_En_14 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Capture_14 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Shift_14 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Update_14 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Rst_14 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Clk_15 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDI_15 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDO_15 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Reg_En_15 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Capture_15 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Shift_15 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Update_15 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Rst_15 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Clk_16 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDI_16 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDO_16 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Reg_En_16 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Capture_16 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Shift_16 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Update_16 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Rst_16 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Clk_17 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDI_17 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDO_17 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Reg_En_17 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Capture_17 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Shift_17 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Update_17 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Rst_17 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Clk_18 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDI_18 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDO_18 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Reg_En_18 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Capture_18 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Shift_18 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Update_18 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Rst_18 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Clk_19 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDI_19 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDO_19 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Reg_En_19 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Capture_19 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Shift_19 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Update_19 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Rst_19 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Clk_20 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDI_20 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDO_20 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Reg_En_20 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Capture_20 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Shift_20 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Update_20 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Rst_20 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Clk_21 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDI_21 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDO_21 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Reg_En_21 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Capture_21 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Shift_21 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Update_21 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Rst_21 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Clk_22 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDI_22 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDO_22 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Reg_En_22 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Capture_22 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Shift_22 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Update_22 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Rst_22 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Clk_23 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDI_23 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDO_23 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Reg_En_23 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Capture_23 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Shift_23 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Update_23 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Rst_23 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Clk_24 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDI_24 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDO_24 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Reg_En_24 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Capture_24 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Shift_24 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Update_24 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Rst_24 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Clk_25 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDI_25 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDO_25 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Reg_En_25 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Capture_25 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Shift_25 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Update_25 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Rst_25 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Clk_26 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDI_26 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDO_26 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Reg_En_26 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Capture_26 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Shift_26 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Update_26 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Rst_26 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Clk_27 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDI_27 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDO_27 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Reg_En_27 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Capture_27 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Shift_27 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Update_27 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Rst_27 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Clk_28 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDI_28 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDO_28 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Reg_En_28 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Capture_28 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Shift_28 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Update_28 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Rst_28 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Clk_29 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDI_29 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDO_29 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Reg_En_29 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Capture_29 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Shift_29 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Update_29 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Rst_29 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Clk_30 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDI_30 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDO_30 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Reg_En_30 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Capture_30 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Shift_30 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Update_30 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Rst_30 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Clk_31 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDI_31 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_TDO_31 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Reg_En_31 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Capture_31 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Shift_31 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Update_31 -into $id
# wave add $tbpath${ps}mdm_0${ps}Dbg_Rst_31 -into $id
# wave add $tbpath${ps}mdm_0${ps}bscan_tdi -into $id
# wave add $tbpath${ps}mdm_0${ps}bscan_reset -into $id
# wave add $tbpath${ps}mdm_0${ps}bscan_shift -into $id
# wave add $tbpath${ps}mdm_0${ps}bscan_update -into $id
# wave add $tbpath${ps}mdm_0${ps}bscan_capture -into $id
# wave add $tbpath${ps}mdm_0${ps}bscan_sel1 -into $id
# wave add $tbpath${ps}mdm_0${ps}bscan_drck1 -into $id
  wave add $tbpath${ps}mdm_0${ps}bscan_tdo1 -into $id
  wave add $tbpath${ps}mdm_0${ps}bscan_ext_tdi -into $id
  wave add $tbpath${ps}mdm_0${ps}bscan_ext_reset -into $id
  wave add $tbpath${ps}mdm_0${ps}bscan_ext_shift -into $id
  wave add $tbpath${ps}mdm_0${ps}bscan_ext_update -into $id
  wave add $tbpath${ps}mdm_0${ps}bscan_ext_capture -into $id
  wave add $tbpath${ps}mdm_0${ps}bscan_ext_sel -into $id
  wave add $tbpath${ps}mdm_0${ps}bscan_ext_drck -into $id
# wave add $tbpath${ps}mdm_0${ps}bscan_ext_tdo -into $id
# wave add $tbpath${ps}mdm_0${ps}Ext_JTAG_DRCK -into $id
# wave add $tbpath${ps}mdm_0${ps}Ext_JTAG_RESET -into $id
# wave add $tbpath${ps}mdm_0${ps}Ext_JTAG_SEL -into $id
# wave add $tbpath${ps}mdm_0${ps}Ext_JTAG_CAPTURE -into $id
# wave add $tbpath${ps}mdm_0${ps}Ext_JTAG_SHIFT -into $id
# wave add $tbpath${ps}mdm_0${ps}Ext_JTAG_UPDATE -into $id
# wave add $tbpath${ps}mdm_0${ps}Ext_JTAG_TDI -into $id
# wave add $tbpath${ps}mdm_0${ps}Ext_JTAG_TDO -into $id

