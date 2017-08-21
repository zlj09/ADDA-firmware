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
    plb_dac_0_S_OpEnQ_pin,
    plb_dac_1_S_Data_pin,
    plb_dac_1_S_DCLKIO_pin,
    plb_dac_1_S_Clkout_pin,
    plb_dac_1_S_PinMD_pin,
    plb_dac_1_S_ClkMD_pin,
    plb_dac_1_S_Format_pin,
    plb_dac_1_S_PWRDN_pin,
    plb_dac_1_S_OpEnI_pin,
    plb_dac_1_S_OpEnQ_pin,

    sys_clk_50m,
    dac_0_pwrdn,
    dac_0_dclkio,
    dac_0_data_lsb
  );
  input fpga_0_RS232_RX_pin;
  output fpga_0_RS232_TX_pin;
  input fpga_0_clk_1_sys_clk_pin;
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
  output [0:9] plb_dac_1_S_Data_pin;
  output plb_dac_1_S_DCLKIO_pin;
  output plb_dac_1_S_Clkout_pin;
  output plb_dac_1_S_PinMD_pin;
  output plb_dac_1_S_ClkMD_pin;
  output plb_dac_1_S_Format_pin;
  output plb_dac_1_S_PWRDN_pin;
  output plb_dac_1_S_OpEnI_pin;
  output plb_dac_1_S_OpEnQ_pin;

  output sys_clk_50m;
  output dac_0_pwrdn;
  output dac_0_dclkio;
  output dac_0_data_lsb;

  (* BOX_TYPE = "user_black_box" *)
  microblaze
    microblaze_i (
      .fpga_0_RS232_RX_pin ( fpga_0_RS232_RX_pin ),
      .fpga_0_RS232_TX_pin ( fpga_0_RS232_TX_pin ),
      .fpga_0_clk_1_sys_clk_pin ( sys_clk_50m ),
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
  
  rst_generator
    rst_generator_0(
      .clk ( fpga_0_clk_1_sys_clk_pin ),
      .rst ( fpga_0_rst_1_sys_rst_pin )
    );
   
  clk_generator
   clk_generator_0(
     .clk_in ( fpga_0_clk_1_sys_clk_pin),
    .rst_in ( fpga_0_rst_1_sys_rst_pin),
    .clk_out ( sys_clk_50m )
  );

  assign dac_0_pwrdn = plb_dac_0_S_PWRDN_pin;
  assign dac_0_dclkio = plb_dac_0_S_DCLKIO_pin;
  assign dac_0_data_lsb = plb_dac_0_S_Data_pin[9];

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
    rst_reg = 1'b0;
    cnt_start = 1'b0;
  end

  always @(posedge clk)
  begin
    if (cnt_start != 1'b1)
    begin
      cnt_start <= 1'b1;
      rst_cnt <= 10'd0;
      rst_reg <= 1'b0;
    end
    if (rst_cnt >= 10'd100)
   begin
      rst_reg <= 1'b1;
    rst_cnt  <= rst_cnt;
   end
    else begin
      rst_cnt <= rst_cnt + 1'd1;
    end
  end

  assign rst = rst_reg;

endmodule

module clk_generator
(
  clk_in,
  rst_in,
  clk_out
);
  input clk_in;
  input rst_in;
  output clk_out;
  
  reg clk_reg;
  
  always @(posedge clk_in)
  //if (rst_in == 1'b0)
  // clk_reg <= 1'b0;
  //else
    clk_reg <= ~clk_reg;
   
 assign clk_out = clk_reg;
endmodule