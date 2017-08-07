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
    xps_iic_0_Scl_pin
  );
  input fpga_0_RS232_RX_pin;
  output fpga_0_RS232_TX_pin;
  input fpga_0_clk_1_sys_clk_pin;
  input fpga_0_rst_1_sys_rst_pin;
  inout xps_iic_0_Sda_pin;
  inout xps_iic_0_Scl_pin;

  (* BOX_TYPE = "user_black_box" *)
  microblaze
    microblaze_i (
      .fpga_0_RS232_RX_pin ( fpga_0_RS232_RX_pin ),
      .fpga_0_RS232_TX_pin ( fpga_0_RS232_TX_pin ),
      .fpga_0_clk_1_sys_clk_pin ( fpga_0_clk_1_sys_clk_pin ),
      .fpga_0_rst_1_sys_rst_pin ( fpga_0_rst_1_sys_rst_pin ),
      .xps_iic_0_Sda_pin ( xps_iic_0_Sda_pin ),
      .xps_iic_0_Scl_pin ( xps_iic_0_Scl_pin )
    );

endmodule

