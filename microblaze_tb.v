//-----------------------------------------------------------------------------
// microblaze_tb.v
//-----------------------------------------------------------------------------

`timescale 1 ps / 100 fs

`uselib lib=unisims_ver

// START USER CODE (Do not remove this line)

// User: Put your directives here. Code in this
//       section will not be overwritten.

// END USER CODE (Do not remove this line)

module microblaze_tb
  (
  );

  // START USER CODE (Do not remove this line)

  // User: Put your signals here. Code in this
  //       section will not be overwritten.

  // END USER CODE (Do not remove this line)

  real fpga_0_clk_1_sys_clk_pin_PERIOD = 20000.000000;
  real fpga_0_rst_1_sys_rst_pin_LENGTH = 320000;

  // Internal signals

  reg fpga_0_RS232_RX_pin;
  wire fpga_0_RS232_TX_pin;
  reg fpga_0_clk_1_sys_clk_pin;
  reg fpga_0_rst_1_sys_rst_pin;
  wire plb_dac_0_S_ClkMD_pin;
  wire plb_dac_0_S_Clkout_pin;
  wire plb_dac_0_S_DCLKIO_pin;
  wire [0:9] plb_dac_0_S_Data_pin;
  wire plb_dac_0_S_Format_pin;
  wire plb_dac_0_S_OpEnI_pin;
  wire plb_dac_0_S_OpEnQ_pin;
  wire plb_dac_0_S_PWRDN_pin;
  wire plb_dac_0_S_PinMD_pin;
  wire plb_dac_1_S_ClkMD_pin;
  wire plb_dac_1_S_Clkout_pin;
  wire plb_dac_1_S_DCLKIO_pin;
  wire [0:9] plb_dac_1_S_Data_pin;
  wire plb_dac_1_S_Format_pin;
  wire plb_dac_1_S_OpEnI_pin;
  wire plb_dac_1_S_OpEnQ_pin;
  wire plb_dac_1_S_PWRDN_pin;
  wire plb_dac_1_S_PinMD_pin;

  microblaze
    dut (
      .fpga_0_RS232_RX_pin ( fpga_0_RS232_RX_pin ),
      .fpga_0_RS232_TX_pin ( fpga_0_RS232_TX_pin ),
      .fpga_0_clk_1_sys_clk_pin ( fpga_0_clk_1_sys_clk_pin ),
      .fpga_0_rst_1_sys_rst_pin ( fpga_0_rst_1_sys_rst_pin ),
      .plb_dac_0_S_Data_pin ( plb_dac_0_S_Data_pin ),
      .plb_dac_0_S_DCLKIO_pin ( plb_dac_0_S_DCLKIO_pin ),
      .plb_dac_0_S_Clkout_pin ( plb_dac_0_S_Clkout_pin ),
      .plb_dac_0_S_PinMD_pin ( plb_dac_0_S_PinMD_pin ),
      .plb_dac_0_S_ClkMD_pin ( plb_dac_0_S_ClkMD_pin ),
      .plb_dac_0_S_Format_pin ( plb_dac_0_S_Format_pin ),
      .plb_dac_0_S_PWRDN_pin ( plb_dac_0_S_PWRDN_pin ),
      .plb_dac_0_S_OpEnI_pin ( plb_dac_0_S_OpEnI_pin ),
      .plb_dac_0_S_OpEnQ_pin ( plb_dac_0_S_OpEnQ_pin ),
      .plb_dac_1_S_Data_pin ( plb_dac_1_S_Data_pin ),
      .plb_dac_1_S_DCLKIO_pin ( plb_dac_1_S_DCLKIO_pin ),
      .plb_dac_1_S_Clkout_pin ( plb_dac_1_S_Clkout_pin ),
      .plb_dac_1_S_PinMD_pin ( plb_dac_1_S_PinMD_pin ),
      .plb_dac_1_S_ClkMD_pin ( plb_dac_1_S_ClkMD_pin ),
      .plb_dac_1_S_Format_pin ( plb_dac_1_S_Format_pin ),
      .plb_dac_1_S_PWRDN_pin ( plb_dac_1_S_PWRDN_pin ),
      .plb_dac_1_S_OpEnI_pin ( plb_dac_1_S_OpEnI_pin ),
      .plb_dac_1_S_OpEnQ_pin ( plb_dac_1_S_OpEnQ_pin )
    );

  // Clock generator for fpga_0_clk_1_sys_clk_pin

  initial
    begin
      fpga_0_clk_1_sys_clk_pin = 1'b0;
      forever #(fpga_0_clk_1_sys_clk_pin_PERIOD/2.00)
        fpga_0_clk_1_sys_clk_pin = ~fpga_0_clk_1_sys_clk_pin;
    end

  // Reset Generator for fpga_0_rst_1_sys_rst_pin

  initial
    begin
      fpga_0_rst_1_sys_rst_pin = 1'b0;
      #(fpga_0_rst_1_sys_rst_pin_LENGTH) fpga_0_rst_1_sys_rst_pin = ~fpga_0_rst_1_sys_rst_pin;
    end

  // START USER CODE (Do not remove this line)

  // User: Put your stimulus here. Code in this
  //       section will not be overwritten.

  // END USER CODE (Do not remove this line)

endmodule

