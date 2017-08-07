//-----------------------------------------------------------------------------
// microblaze_top.v
//-----------------------------------------------------------------------------

module microblaze_top
  (
    fpga_0_RS232_RX_pin,
    fpga_0_RS232_TX_pin,
    fpga_0_clk_1_sys_clk_pin,
    fpga_0_rst_1_sys_rst_pin,
    xps_iic_0_Sda_pin,
    xps_iic_0_Scl_pin,
    plb_dac_0_S_Data_pin,
    plb_dac_0_S_DCLKIO_pin,
    plb_dac_0_S_Clkout_pin,
    plb_dac_0_S_PinMD_pin,
    plb_dac_0_S_ClkMD_pin,
    plb_dac_0_S_Format_pin,
    plb_dac_0_S_PWRDN_pin
  );
  input fpga_0_RS232_RX_pin;
  output fpga_0_RS232_TX_pin;
  input fpga_0_clk_1_sys_clk_pin;
  input fpga_0_rst_1_sys_rst_pin;
  inout xps_iic_0_Sda_pin;
  inout xps_iic_0_Scl_pin;
  output [0:9] plb_dac_0_S_Data_pin;
  output plb_dac_0_S_DCLKIO_pin;
  output plb_dac_0_S_Clkout_pin;
  output plb_dac_0_S_PinMD_pin;
  output plb_dac_0_S_ClkMD_pin;
  output plb_dac_0_S_Format_pin;
  output plb_dac_0_S_PWRDN_pin;

  (* BOX_TYPE = "user_black_box" *)
  microblaze
    microblaze_i (
      .fpga_0_RS232_RX_pin ( fpga_0_RS232_RX_pin ),
      .fpga_0_RS232_TX_pin ( fpga_0_RS232_TX_pin ),
      .fpga_0_clk_1_sys_clk_pin ( fpga_0_clk_1_sys_clk_pin ),
      .fpga_0_rst_1_sys_rst_pin ( fpga_0_rst_1_sys_rst_pin ),
      .xps_iic_0_Sda_pin ( xps_iic_0_Sda_pin ),
      .xps_iic_0_Scl_pin ( xps_iic_0_Scl_pin ),
      .plb_dac_0_S_Data_pin ( plb_dac_0_S_Data_pin ),
      .plb_dac_0_S_DCLKIO_pin ( plb_dac_0_S_DCLKIO_pin ),
      .plb_dac_0_S_Clkout_pin ( plb_dac_0_S_Clkout_pin ),
      .plb_dac_0_S_PinMD_pin ( plb_dac_0_S_PinMD_pin ),
      .plb_dac_0_S_ClkMD_pin ( plb_dac_0_S_ClkMD_pin ),
      .plb_dac_0_S_Format_pin ( plb_dac_0_S_Format_pin ),
      .plb_dac_0_S_PWRDN_pin ( plb_dac_0_S_PWRDN_pin )
    );

endmodule

