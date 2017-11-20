//-----------------------------------------------------------------------------
// microblaze_plb_dac_1_wrapper.v
//-----------------------------------------------------------------------------

module microblaze_plb_dac_1_wrapper
  (
    SPLB_Clk,
    SPLB_Rst,
    PLB_ABus,
    PLB_UABus,
    PLB_PAValid,
    PLB_SAValid,
    PLB_rdPrim,
    PLB_wrPrim,
    PLB_masterID,
    PLB_abort,
    PLB_busLock,
    PLB_RNW,
    PLB_BE,
    PLB_MSize,
    PLB_size,
    PLB_type,
    PLB_lockErr,
    PLB_wrDBus,
    PLB_wrBurst,
    PLB_rdBurst,
    PLB_wrPendReq,
    PLB_rdPendReq,
    PLB_wrPendPri,
    PLB_rdPendPri,
    PLB_reqPri,
    PLB_TAttribute,
    Sl_addrAck,
    Sl_SSize,
    Sl_wait,
    Sl_rearbitrate,
    Sl_wrDAck,
    Sl_wrComp,
    Sl_wrBTerm,
    Sl_rdDBus,
    Sl_rdWdAddr,
    Sl_rdDAck,
    Sl_rdComp,
    Sl_rdBTerm,
    Sl_MBusy,
    Sl_MWrErr,
    Sl_MRdErr,
    Sl_MIRQ,
    S_Data,
    S_DCLKIO,
    S_Clkout,
    S_PinMD,
    S_ClkMD,
    S_Format_I,
    S_Format_O,
    S_Format_T,
    S_PWRDN,
    S_OpEnI,
    S_OpEnQ,
    CLKGEN_Clk
  );
  input SPLB_Clk;
  input SPLB_Rst;
  input [0:31] PLB_ABus;
  input [0:31] PLB_UABus;
  input PLB_PAValid;
  input PLB_SAValid;
  input PLB_rdPrim;
  input PLB_wrPrim;
  input [0:0] PLB_masterID;
  input PLB_abort;
  input PLB_busLock;
  input PLB_RNW;
  input [0:3] PLB_BE;
  input [0:1] PLB_MSize;
  input [0:3] PLB_size;
  input [0:2] PLB_type;
  input PLB_lockErr;
  input [0:31] PLB_wrDBus;
  input PLB_wrBurst;
  input PLB_rdBurst;
  input PLB_wrPendReq;
  input PLB_rdPendReq;
  input [0:1] PLB_wrPendPri;
  input [0:1] PLB_rdPendPri;
  input [0:1] PLB_reqPri;
  input [0:15] PLB_TAttribute;
  output Sl_addrAck;
  output [0:1] Sl_SSize;
  output Sl_wait;
  output Sl_rearbitrate;
  output Sl_wrDAck;
  output Sl_wrComp;
  output Sl_wrBTerm;
  output [0:31] Sl_rdDBus;
  output [0:3] Sl_rdWdAddr;
  output Sl_rdDAck;
  output Sl_rdComp;
  output Sl_rdBTerm;
  output [0:1] Sl_MBusy;
  output [0:1] Sl_MWrErr;
  output [0:1] Sl_MRdErr;
  output [0:1] Sl_MIRQ;
  output [0:9] S_Data;
  output S_DCLKIO;
  output S_Clkout;
  output S_PinMD;
  output S_ClkMD;
  input S_Format_I;
  output S_Format_O;
  output S_Format_T;
  output S_PWRDN;
  output S_OpEnI;
  output S_OpEnQ;
  input CLKGEN_Clk;

  plb_dac
    #(
      .C_BASEADDR ( 32'hc9c00000 ),
      .C_HIGHADDR ( 32'hc9c0ffff ),
      .C_SPLB_AWIDTH ( 32 ),
      .C_SPLB_DWIDTH ( 32 ),
      .C_SPLB_NUM_MASTERS ( 2 ),
      .C_SPLB_MID_WIDTH ( 1 ),
      .C_SPLB_NATIVE_DWIDTH ( 32 ),
      .C_SPLB_P2P ( 0 ),
      .C_SPLB_SUPPORT_BURSTS ( 0 ),
      .C_SPLB_SMALLEST_MASTER ( 32 ),
      .C_SPLB_CLK_PERIOD_PS ( 10000 ),
      .C_INCLUDE_DPHASE_TIMER ( 1 ),
      .C_FAMILY ( "virtex4" ),
      .C_MEM0_BASEADDR ( 32'hcb600000 ),
      .C_MEM0_HIGHADDR ( 32'hcb60ffff ),
      .DAC_WIDTH ( 10 )
    )
    plb_dac_1 (
      .SPLB_Clk ( SPLB_Clk ),
      .SPLB_Rst ( SPLB_Rst ),
      .PLB_ABus ( PLB_ABus ),
      .PLB_UABus ( PLB_UABus ),
      .PLB_PAValid ( PLB_PAValid ),
      .PLB_SAValid ( PLB_SAValid ),
      .PLB_rdPrim ( PLB_rdPrim ),
      .PLB_wrPrim ( PLB_wrPrim ),
      .PLB_masterID ( PLB_masterID ),
      .PLB_abort ( PLB_abort ),
      .PLB_busLock ( PLB_busLock ),
      .PLB_RNW ( PLB_RNW ),
      .PLB_BE ( PLB_BE ),
      .PLB_MSize ( PLB_MSize ),
      .PLB_size ( PLB_size ),
      .PLB_type ( PLB_type ),
      .PLB_lockErr ( PLB_lockErr ),
      .PLB_wrDBus ( PLB_wrDBus ),
      .PLB_wrBurst ( PLB_wrBurst ),
      .PLB_rdBurst ( PLB_rdBurst ),
      .PLB_wrPendReq ( PLB_wrPendReq ),
      .PLB_rdPendReq ( PLB_rdPendReq ),
      .PLB_wrPendPri ( PLB_wrPendPri ),
      .PLB_rdPendPri ( PLB_rdPendPri ),
      .PLB_reqPri ( PLB_reqPri ),
      .PLB_TAttribute ( PLB_TAttribute ),
      .Sl_addrAck ( Sl_addrAck ),
      .Sl_SSize ( Sl_SSize ),
      .Sl_wait ( Sl_wait ),
      .Sl_rearbitrate ( Sl_rearbitrate ),
      .Sl_wrDAck ( Sl_wrDAck ),
      .Sl_wrComp ( Sl_wrComp ),
      .Sl_wrBTerm ( Sl_wrBTerm ),
      .Sl_rdDBus ( Sl_rdDBus ),
      .Sl_rdWdAddr ( Sl_rdWdAddr ),
      .Sl_rdDAck ( Sl_rdDAck ),
      .Sl_rdComp ( Sl_rdComp ),
      .Sl_rdBTerm ( Sl_rdBTerm ),
      .Sl_MBusy ( Sl_MBusy ),
      .Sl_MWrErr ( Sl_MWrErr ),
      .Sl_MRdErr ( Sl_MRdErr ),
      .Sl_MIRQ ( Sl_MIRQ ),
      .S_Data ( S_Data ),
      .S_DCLKIO ( S_DCLKIO ),
      .S_Clkout ( S_Clkout ),
      .S_PinMD ( S_PinMD ),
      .S_ClkMD ( S_ClkMD ),
      .S_Format_I ( S_Format_I ),
      .S_Format_O ( S_Format_O ),
      .S_Format_T ( S_Format_T ),
      .S_PWRDN ( S_PWRDN ),
      .S_OpEnI ( S_OpEnI ),
      .S_OpEnQ ( S_OpEnQ ),
      .CLKGEN_Clk ( CLKGEN_Clk )
    );

endmodule

