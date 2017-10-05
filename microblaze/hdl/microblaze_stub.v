//-----------------------------------------------------------------------------
// microblaze_stub.v
//-----------------------------------------------------------------------------

module microblaze_stub
  (
    fpga_0_RS232_RX_pin,
    fpga_0_RS232_TX_pin,
    fpga_0_clk_1_sys_clk_pin,
    fpga_0_rst_1_sys_rst_pin,
    plb_dac_1_S_Data_pin,
    plb_dac_1_S_DCLKIO_pin,
    plb_dac_1_S_Clkout_pin,
    plb_dac_1_S_PinMD_pin,
    plb_dac_1_S_ClkMD_pin,
    plb_dac_1_S_Format_pin,
    plb_dac_1_S_PWRDN_pin,
    plb_dac_1_S_OpEnI_pin,
    plb_dac_1_S_OpEnQ_pin,
    plb_dac_0_S_Data_pin,
    plb_dac_0_S_DCLKIO_pin,
    plb_dac_0_S_Clkout_pin,
    plb_dac_0_S_PinMD_pin,
    plb_dac_0_S_ClkMD_pin,
    plb_dac_0_S_Format_pin,
    plb_dac_0_S_PWRDN_pin,
    plb_dac_0_S_OpEnQ_pin,
    plb_dac_0_S_OpEnI_pin
  );
  input fpga_0_RS232_RX_pin;
  output fpga_0_RS232_TX_pin;
  input fpga_0_clk_1_sys_clk_pin;
  input fpga_0_rst_1_sys_rst_pin;
  output [0:9] plb_dac_1_S_Data_pin;
  output plb_dac_1_S_DCLKIO_pin;
  output plb_dac_1_S_Clkout_pin;
  output plb_dac_1_S_PinMD_pin;
  output plb_dac_1_S_ClkMD_pin;
  inout plb_dac_1_S_Format_pin;
  output plb_dac_1_S_PWRDN_pin;
  output plb_dac_1_S_OpEnI_pin;
  output plb_dac_1_S_OpEnQ_pin;
  output [0:9] plb_dac_0_S_Data_pin;
  output plb_dac_0_S_DCLKIO_pin;
  output plb_dac_0_S_Clkout_pin;
  output plb_dac_0_S_PinMD_pin;
  output plb_dac_0_S_ClkMD_pin;
  inout plb_dac_0_S_Format_pin;
  output plb_dac_0_S_PWRDN_pin;
  output plb_dac_0_S_OpEnQ_pin;
  output plb_dac_0_S_OpEnI_pin;

  (* BOX_TYPE = "user_black_box" *)
  microblaze
    microblaze_i (
      .fpga_0_RS232_RX_pin ( fpga_0_RS232_RX_pin ),
      .fpga_0_RS232_TX_pin ( fpga_0_RS232_TX_pin ),
      .fpga_0_clk_1_sys_clk_pin ( fpga_0_clk_1_sys_clk_pin ),
      .fpga_0_rst_1_sys_rst_pin ( fpga_0_rst_1_sys_rst_pin ),
      .plb_dac_1_S_Data_pin ( plb_dac_1_S_Data_pin ),
      .plb_dac_1_S_DCLKIO_pin ( plb_dac_1_S_DCLKIO_pin ),
      .plb_dac_1_S_Clkout_pin ( plb_dac_1_S_Clkout_pin ),
      .plb_dac_1_S_PinMD_pin ( plb_dac_1_S_PinMD_pin ),
      .plb_dac_1_S_ClkMD_pin ( plb_dac_1_S_ClkMD_pin ),
      .plb_dac_1_S_Format_pin ( plb_dac_1_S_Format_pin ),
      .plb_dac_1_S_PWRDN_pin ( plb_dac_1_S_PWRDN_pin ),
      .plb_dac_1_S_OpEnI_pin ( plb_dac_1_S_OpEnI_pin ),
      .plb_dac_1_S_OpEnQ_pin ( plb_dac_1_S_OpEnQ_pin ),
      .plb_dac_0_S_Data_pin ( plb_dac_0_S_Data_pin ),
      .plb_dac_0_S_DCLKIO_pin ( plb_dac_0_S_DCLKIO_pin ),
      .plb_dac_0_S_Clkout_pin ( plb_dac_0_S_Clkout_pin ),
      .plb_dac_0_S_PinMD_pin ( plb_dac_0_S_PinMD_pin ),
      .plb_dac_0_S_ClkMD_pin ( plb_dac_0_S_ClkMD_pin ),
      .plb_dac_0_S_Format_pin ( plb_dac_0_S_Format_pin ),
      .plb_dac_0_S_PWRDN_pin ( plb_dac_0_S_PWRDN_pin ),
      .plb_dac_0_S_OpEnQ_pin ( plb_dac_0_S_OpEnQ_pin ),
      .plb_dac_0_S_OpEnI_pin ( plb_dac_0_S_OpEnI_pin )
    );

endmodule

module microblaze
  (
    fpga_0_RS232_RX_pin,
    fpga_0_RS232_TX_pin,
    fpga_0_clk_1_sys_clk_pin,
    fpga_0_rst_1_sys_rst_pin,
    plb_dac_1_S_Data_pin,
    plb_dac_1_S_DCLKIO_pin,
    plb_dac_1_S_Clkout_pin,
    plb_dac_1_S_PinMD_pin,
    plb_dac_1_S_ClkMD_pin,
    plb_dac_1_S_Format_pin,
    plb_dac_1_S_PWRDN_pin,
    plb_dac_1_S_OpEnI_pin,
    plb_dac_1_S_OpEnQ_pin,
    plb_dac_0_S_Data_pin,
    plb_dac_0_S_DCLKIO_pin,
    plb_dac_0_S_Clkout_pin,
    plb_dac_0_S_PinMD_pin,
    plb_dac_0_S_ClkMD_pin,
    plb_dac_0_S_Format_pin,
    plb_dac_0_S_PWRDN_pin,
    plb_dac_0_S_OpEnQ_pin,
    plb_dac_0_S_OpEnI_pin
  );
  input fpga_0_RS232_RX_pin;
  output fpga_0_RS232_TX_pin;
  input fpga_0_clk_1_sys_clk_pin;
  input fpga_0_rst_1_sys_rst_pin;
  output [0:9] plb_dac_1_S_Data_pin;
  output plb_dac_1_S_DCLKIO_pin;
  output plb_dac_1_S_Clkout_pin;
  output plb_dac_1_S_PinMD_pin;
  output plb_dac_1_S_ClkMD_pin;
  inout plb_dac_1_S_Format_pin;
  output plb_dac_1_S_PWRDN_pin;
  output plb_dac_1_S_OpEnI_pin;
  output plb_dac_1_S_OpEnQ_pin;
  output [0:9] plb_dac_0_S_Data_pin;
  output plb_dac_0_S_DCLKIO_pin;
  output plb_dac_0_S_Clkout_pin;
  output plb_dac_0_S_PinMD_pin;
  output plb_dac_0_S_ClkMD_pin;
  inout plb_dac_0_S_Format_pin;
  output plb_dac_0_S_PWRDN_pin;
  output plb_dac_0_S_OpEnQ_pin;
  output plb_dac_0_S_OpEnI_pin;
endmodule

