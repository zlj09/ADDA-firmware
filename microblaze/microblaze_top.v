//-----------------------------------------------------------------------------
// microblaze_top.v
//-----------------------------------------------------------------------------

module microblaze_top
  (
    fpga_0_RS232_RX_pin,
    fpga_0_RS232_TX_pin,
    fpga_0_clk_1_sys_clk_pin,
    fpga_0_rst_1_sys_rst_pin,
    plb_dac_0_S_Data_pin,
    plb_dac_0_S_DCLKIO_pin,
    plb_dac_0_S_Clkout_pin,
    plb_dac_0_S_PinMD_pin,
    plb_dac_0_S_ClkMD_pin,
    plb_dac_0_S_Format_pin,
    plb_dac_0_S_PWRDN_pin,
    plb_dac_0_S_OpEnI_pin,
    plb_dac_0_S_OpEnQ_pin
  );
  input fpga_0_RS232_RX_pin;
  output fpga_0_RS232_TX_pin;
  input fpga_0_clk_1_sys_clk_pin;
  //input fpga_0_rst_1_sys_rst_pin;
  output fpga_0_rst_1_sys_rst_pin;
  output [0:9] plb_dac_0_S_Data_pin;
  output plb_dac_0_S_DCLKIO_pin;
  output plb_dac_0_S_Clkout_pin;
  output plb_dac_0_S_PinMD_pin;
  output plb_dac_0_S_ClkMD_pin;
  output plb_dac_0_S_Format_pin;
  output plb_dac_0_S_PWRDN_pin;
  output plb_dac_0_S_OpEnI_pin;
  output plb_dac_0_S_OpEnQ_pin;

  (* BOX_TYPE = "user_black_box" *)
  microblaze
    microblaze_i (
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
      .plb_dac_0_S_OpEnQ_pin ( plb_dac_0_S_OpEnQ_pin )
    );

  rst_generator
    rst_generator_0(
      .clk ( fpga_0_clk_1_sys_clk_pin ),
      .rst ( fpga_0_rst_1_sys_rst_pin )
    );

endmodule

module rst_generator
(
  clk,
  rst
);
  input       clk;
  output      rst;

  reg         rst_reg;
  reg   [9:0] rst_cnt;
  reg         cnt_start;

  initial
  begin
    rst_cnt = 10'd0;
    rst_reg = 1'b1;
    cnt_start = 1'b0;
  end

  always @(posedge clk)
  begin
    if (cnt_start != 1'b1)
    begin
      cnt_start <= 1'b1;
      rst_cnt <= 10'd0;
      rst_reg <= 1'b1;
    end
    if (rst_cnt == 10'd100)
      rst_reg <= 1'b0;
    else begin
      rst_cnt <= rst_cnt + 1'd1;
    end
  end

  assign rst = rst_reg;

endmodule

