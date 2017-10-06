//----------------------------------------------------------------------------
// user_logic.vhd - module
//----------------------------------------------------------------------------
//
// ***************************************************************************
// ** Copyright (c) 1995-2012 Xilinx, Inc.  All rights reserved.            **
// **                                                                       **
// ** Xilinx, Inc.                                                          **
// ** XILINX IS PROVIDING THIS DESIGN, CODE, OR INFORMATION "AS IS"         **
// ** AS A COURTESY TO YOU, SOLELY FOR USE IN DEVELOPING PROGRAMS AND       **
// ** SOLUTIONS FOR XILINX DEVICES.  BY PROVIDING THIS DESIGN, CODE,        **
// ** OR INFORMATION AS ONE POSSIBLE IMPLEMENTATION OF THIS FEATURE,        **
// ** APPLICATION OR STANDARD, XILINX IS MAKING NO REPRESENTATION           **
// ** THAT THIS IMPLEMENTATION IS FREE FROM ANY CLAIMS OF INFRINGEMENT,     **
// ** AND YOU ARE RESPONSIBLE FOR OBTAINING ANY RIGHTS YOU MAY REQUIRE      **
// ** FOR YOUR IMPLEMENTATION.  XILINX EXPRESSLY DISCLAIMS ANY              **
// ** WARRANTY WHATSOEVER WITH RESPECT TO THE ADEQUACY OF THE               **
// ** IMPLEMENTATION, INCLUDING BUT NOT LIMITED TO ANY WARRANTIES OR        **
// ** REPRESENTATIONS THAT THIS IMPLEMENTATION IS FREE FROM CLAIMS OF       **
// ** INFRINGEMENT, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS       **
// ** FOR A PARTICULAR PURPOSE.                                             **
// **                                                                       **
// ***************************************************************************
//
//----------------------------------------------------------------------------
// Filename:          user_logic.vhd
// Version:           3.00.a
// Description:       User logic module.
// Date:              Sun Oct 01 10:28:15 2017 (by Create and Import Peripheral Wizard)
// Verilog Standard:  Verilog-2001
//----------------------------------------------------------------------------
// Naming Conventions:
//   active low signals:                    "*_n"
//   clock signals:                         "clk", "clk_div#", "clk_#x"
//   reset signals:                         "rst", "rst_n"
//   generics:                              "C_*"
//   user defined types:                    "*_TYPE"
//   state machine next state:              "*_ns"
//   state machine current state:           "*_cs"
//   combinatorial signals:                 "*_com"
//   pipelined or register delay signals:   "*_d#"
//   counter signals:                       "*cnt*"
//   clock enable signals:                  "*_ce"
//   internal version of output port:       "*_i"
//   device pins:                           "*_pin"
//   ports:                                 "- Names begin with Uppercase"
//   processes:                             "*_PROCESS"
//   component instantiations:              "<ENTITY_>I_<#|FUNC>"
//----------------------------------------------------------------------------

module user_logic
(
  // -- ADD USER PORTS BELOW THIS LINE ---------------
  // --USER ports added here 
  IP2DAC_Data,               //IP to DAC data bus
  IP2DAC_DCLKIO,             //IP to DAC digital clock
  IP2DAC_Clkout,             //IP to DAC analog clock
  IP2DAC_PinMD,              //IP to DAC SPI reset
  IP2DAC_ClkMD,              //IP to DAC SPI SCLK
  //IP2DAC_Format,             //IP to DAC SPI SDIO
  IP2DAC_Format_I,
  IP2DAC_Format_O,
  IP2DAC_Format_T,
  IP2DAC_PWRDN,              //IP to DAC SPI CS
  IP2DAC_OpEnI,              //IP to DAC output op amp I enable
  IP2DAC_OpEnQ,              //IP to DAC output op amp Q enable
  // -- ADD USER PORTS ABOVE THIS LINE ---------------

  // -- DO NOT EDIT BELOW THIS LINE ------------------
  // -- Bus protocol ports, do not add to or delete 
  Bus2IP_Clk,                     // Bus to IP clock
  Bus2IP_Reset,                   // Bus to IP reset
  Bus2IP_Addr,                    // Bus to IP address bus
  Bus2IP_CS,                      // Bus to IP chip select for user logic memory selection
  Bus2IP_RNW,                     // Bus to IP read/not write
  Bus2IP_Data,                    // Bus to IP data bus
  Bus2IP_BE,                      // Bus to IP byte enables
  Bus2IP_RdCE,                    // Bus to IP read chip enable
  Bus2IP_WrCE,                    // Bus to IP write chip enable
  IP2Bus_Data,                    // IP to Bus data bus
  IP2Bus_RdAck,                   // IP to Bus read transfer acknowledgement
  IP2Bus_WrAck,                   // IP to Bus write transfer acknowledgement
  IP2Bus_Error                    // IP to Bus error response
  // -- DO NOT EDIT ABOVE THIS LINE ------------------
); // user_logic

// -- ADD USER PARAMETERS BELOW THIS LINE ------------
// --USER parameters added here 
parameter DAC_WIDTH                     = 10;
parameter PHASE_WIDTH                   = 16;
// -- ADD USER PARAMETERS ABOVE THIS LINE ------------

// -- DO NOT EDIT BELOW THIS LINE --------------------
// -- Bus protocol parameters, do not add to or delete
parameter C_SLV_AWIDTH                   = 32;
parameter C_SLV_DWIDTH                   = 32;
parameter C_NUM_REG                      = 7;
parameter C_NUM_MEM                      = 1;
// -- DO NOT EDIT ABOVE THIS LINE --------------------

// -- ADD USER PORTS BELOW THIS LINE -----------------
// --USER ports added here 
output     [0 : DAC_WIDTH-1]              IP2DAC_Data;
output                                    IP2DAC_DCLKIO;
output                                    IP2DAC_Clkout;
output                                    IP2DAC_PinMD;
output                                    IP2DAC_ClkMD;
input                                     IP2DAC_Format_I;
output                                    IP2DAC_Format_O;
output                                    IP2DAC_Format_T;
output                                    IP2DAC_PWRDN;
output                                    IP2DAC_OpEnI;
output                                    IP2DAC_OpEnQ;
// -- ADD USER PORTS ABOVE THIS LINE -----------------

// -- DO NOT EDIT BELOW THIS LINE --------------------
// -- Bus protocol ports, do not add to or delete
input                                     Bus2IP_Clk;
input                                     Bus2IP_Reset;
input      [0 : C_SLV_AWIDTH-1]           Bus2IP_Addr;
input      [0 : C_NUM_MEM-1]              Bus2IP_CS;
input                                     Bus2IP_RNW;
input      [0 : C_SLV_DWIDTH-1]           Bus2IP_Data;
input      [0 : C_SLV_DWIDTH/8-1]         Bus2IP_BE;
input      [0 : C_NUM_REG-1]              Bus2IP_RdCE;
input      [0 : C_NUM_REG-1]              Bus2IP_WrCE;
output     [0 : C_SLV_DWIDTH-1]           IP2Bus_Data;
output                                    IP2Bus_RdAck;
output                                    IP2Bus_WrAck;
output                                    IP2Bus_Error;
// -- DO NOT EDIT ABOVE THIS LINE --------------------

//----------------------------------------------------------------------------
// Implementation
//----------------------------------------------------------------------------

  // --USER nets declarations added here, as needed for user logic
  reg                                       dac_clk_reg;
  reg        [0 : DAC_WIDTH-1]              dac_data_reg;
  reg                                       reset_reg;
  reg                                       sclk_reg;
  reg                                       cs_reg;
  reg                                       sdio_reg_o;
  reg                                       sdio_reg_t;
  reg        [2 : 0]                        state_reg;
  reg                                       dac_en;
  reg                                       spi_state;
  reg                                       spi_start_flag;
  reg        [4 : 0]                        spi_cnt;
  wire       [3 : 0]                        i_waveform;
  wire       [3 : 0]                        q_waveform;
  wire       [9 : 0]                        rect_data;
  wire       [9 : 0]                        saw_data;
  wire       [9 : 0]                        sine_data;
  wire       [9 : 0]                        unsigned_sine_data;
  wire       [9 : 0]                        arb_data;
  wire       [PHASE_WIDTH-1 : 0]            phase_out;
  wire       [PHASE_WIDTH-1 : 0]            step_ctl;
  wire       [15 : 0]                       bram_addr;
  wire                                      bram_wea;

  // Nets for user logic slave model s/w accessible register example
  reg        [0 : C_SLV_DWIDTH-1]           slv_reg0;
  reg        [0 : C_SLV_DWIDTH-1]           slv_reg1;
  reg        [0 : C_SLV_DWIDTH-1]           slv_reg2;
  reg        [0 : C_SLV_DWIDTH-1]           slv_reg3;
  reg        [0 : C_SLV_DWIDTH-1]           slv_reg4;
  reg        [0 : C_SLV_DWIDTH-1]           slv_reg5;
  reg        [0 : C_SLV_DWIDTH-1]           slv_reg6;
  wire       [0 : 6]                        slv_reg_write_sel;
  wire       [0 : 6]                        slv_reg_read_sel;
  reg        [0 : C_SLV_DWIDTH-1]           slv_ip2bus_data;
  wire                                      slv_read_ack;
  wire                                      slv_write_ack;
  integer                                   byte_index, bit_index;

  // --USER logic implementation added here

  // ------------------------------------------------------
  // Example code to read/write user logic slave model s/w accessible registers
  // 
  // Note:
  // The example code presented here is to show you one way of reading/writing
  // software accessible registers implemented in the user logic slave model.
  // Each bit of the Bus2IP_WrCE/Bus2IP_RdCE signals is configured to correspond
  // to one software accessible register by the top level template. For example,
  // if you have four 32 bit software accessible registers in the user logic,
  // you are basically operating on the following memory mapped registers:
  // 
  //    Bus2IP_WrCE/Bus2IP_RdCE   Memory Mapped Register
  //                     "1000"   C_BASEADDR + 0x0
  //                     "0100"   C_BASEADDR + 0x4
  //                     "0010"   C_BASEADDR + 0x8
  //                     "0001"   C_BASEADDR + 0xC
  // 
  // ------------------------------------------------------

  assign
    slv_reg_write_sel = Bus2IP_WrCE[0:6],
    slv_reg_read_sel  = Bus2IP_RdCE[0:6],
    slv_write_ack     = Bus2IP_WrCE[0] || Bus2IP_WrCE[1] || Bus2IP_WrCE[2] || Bus2IP_WrCE[3] || Bus2IP_WrCE[4] || Bus2IP_WrCE[5] || Bus2IP_WrCE[6],
    slv_read_ack      = Bus2IP_RdCE[0] || Bus2IP_RdCE[1] || Bus2IP_RdCE[2] || Bus2IP_RdCE[3] || Bus2IP_RdCE[4] || Bus2IP_RdCE[5] || Bus2IP_RdCE[6];

  // implement slave model register(s)
  always @( posedge Bus2IP_Clk )
    begin: SLAVE_REG_WRITE_PROC

      if ( Bus2IP_Reset == 1 )
        begin
          slv_reg0 <= 0;
          slv_reg1 <= 0;
          slv_reg2 <= 0;
          slv_reg3 <= 0;
          slv_reg4 <= 0;
          slv_reg5 <= 0;
          slv_reg6 <= 0;
        end
      else
        case ( slv_reg_write_sel )
          7'b1000000 :
            for ( byte_index = 0; byte_index <= (C_SLV_DWIDTH/8)-1; byte_index = byte_index+1 )
              if ( Bus2IP_BE[byte_index] == 1 )
                for ( bit_index = byte_index*8; bit_index <= byte_index*8+7; bit_index = bit_index+1 )
                  slv_reg0[bit_index] <= Bus2IP_Data[bit_index];
          7'b0100000 :
            for ( byte_index = 0; byte_index <= (C_SLV_DWIDTH/8)-1; byte_index = byte_index+1 )
              if ( Bus2IP_BE[byte_index] == 1 )
                for ( bit_index = byte_index*8; bit_index <= byte_index*8+7; bit_index = bit_index+1 )
                  slv_reg1[bit_index] <= Bus2IP_Data[bit_index];
          7'b0010000 :
            for ( byte_index = 0; byte_index <= (C_SLV_DWIDTH/8)-1; byte_index = byte_index+1 )
              if ( Bus2IP_BE[byte_index] == 1 )
                for ( bit_index = byte_index*8; bit_index <= byte_index*8+7; bit_index = bit_index+1 )
                  slv_reg2[bit_index] <= Bus2IP_Data[bit_index];
          7'b0001000 :
            for ( byte_index = 0; byte_index <= (C_SLV_DWIDTH/8)-1; byte_index = byte_index+1 )
              if ( Bus2IP_BE[byte_index] == 1 )
                for ( bit_index = byte_index*8; bit_index <= byte_index*8+7; bit_index = bit_index+1 )
                  slv_reg3[bit_index] <= Bus2IP_Data[bit_index];
          7'b0000100 :
            for ( byte_index = 0; byte_index <= (C_SLV_DWIDTH/8)-1; byte_index = byte_index+1 )
              if ( Bus2IP_BE[byte_index] == 1 )
                for ( bit_index = byte_index*8; bit_index <= byte_index*8+7; bit_index = bit_index+1 )
                  slv_reg4[bit_index] <= Bus2IP_Data[bit_index];
          7'b0000010 :
            for ( byte_index = 0; byte_index <= (C_SLV_DWIDTH/8)-1; byte_index = byte_index+1 )
              if ( Bus2IP_BE[byte_index] == 1 )
                for ( bit_index = byte_index*8; bit_index <= byte_index*8+7; bit_index = bit_index+1 )
                  slv_reg5[bit_index] <= Bus2IP_Data[bit_index];
          7'b0000001 :
            for ( byte_index = 0; byte_index <= (C_SLV_DWIDTH/8)-1; byte_index = byte_index+1 )
              if ( Bus2IP_BE[byte_index] == 1 )
                for ( bit_index = byte_index*8; bit_index <= byte_index*8+7; bit_index = bit_index+1 )
                  slv_reg6[bit_index] <= Bus2IP_Data[bit_index];
          default : ;
        endcase

        if (state_reg == 3'd3 && sclk_reg == 1'b0 && spi_cnt >= 5'd8)
          slv_reg3[16 + spi_cnt] <= IP2DAC_Format_I;

        slv_reg0[30] <= spi_state;

    end // SLAVE_REG_WRITE_PROC

  // implement slave model register read mux
  always @( slv_reg_read_sel or slv_reg0 or slv_reg1 or slv_reg2 or slv_reg3 or slv_reg4 or slv_reg5 or slv_reg6 )
    begin: SLAVE_REG_READ_PROC

      case ( slv_reg_read_sel )
        7'b1000000 : slv_ip2bus_data <= slv_reg0;
        7'b0100000 : slv_ip2bus_data <= slv_reg1;
        7'b0010000 : slv_ip2bus_data <= slv_reg2;
        7'b0001000 : slv_ip2bus_data <= slv_reg3;
        7'b0000100 : slv_ip2bus_data <= slv_reg4;
        7'b0000010 : slv_ip2bus_data <= slv_reg5;
        7'b0000001 : slv_ip2bus_data <= slv_reg6;
        default : slv_ip2bus_data <= 0;
      endcase

    end // SLAVE_REG_READ_PROC


    // generate DAC clock here, with a frequency divider imposed on the bus clock
  always @(posedge Bus2IP_Clk)
    begin
      if (Bus2IP_Reset == 1)
        dac_clk_reg <= 1'b0;
      else 
        dac_clk_reg <= ~dac_clk_reg;
    end

  //Get DAC data from slv_reg1. slv_reg1[0] is MSB. slv_reg1[31] is LSB.
  //slv_reg2[22 : 31] is for Q DAC, output when DCLKIO is at high voltage, latched at the negative edge.
  //slv_reg1[22 : 31] is for I DAC, output when DCLKIO is at low voltage, latched at the positive edge.
  always @(negedge Bus2IP_Clk)
    begin
      if (Bus2IP_Reset == 1) begin
        dac_data_reg <= 10'b0;
      end
      else begin
        if (dac_clk_reg == 1'b1) begin
          case (q_waveform)
          4'd0: dac_data_reg <= slv_reg2[22: 31];
          4'd1: dac_data_reg <= rect_data;
          4'd2: dac_data_reg <= saw_data;
          4'd3: dac_data_reg <= sine_data;
          4'd4: dac_data_reg <= arb_data;
          default: dac_data_reg <= dac_data_reg;
          endcase
        end
        else begin
          case (i_waveform)
          4'd0: dac_data_reg <= slv_reg1[22: 31];
          4'd1: dac_data_reg <= rect_data;
          4'd2: dac_data_reg <= saw_data;
          4'd3: dac_data_reg <= sine_data;
          4'd4: dac_data_reg <= arb_data;
          default: dac_data_reg <= dac_data_reg;
          endcase
        end
      end
    end

  always @( posedge Bus2IP_Clk )
    if ( Bus2IP_Reset == 1 ) begin
      state_reg <= 3'd0;
      dac_en <= 1'b0;
      reset_reg <= 1'b0;
      sclk_reg <= 1'b1;
      sdio_reg_o <= 1'b0;
      sdio_reg_t <= 1'b0;
      cs_reg <= 1'b1;
      spi_cnt <= 5'd0;
      spi_state <= 1'b0;
    end
    else begin
      case ( state_reg )
        3'd0 : begin    //Idle State
          if (slv_reg0[31] == 1'b1) begin
            state_reg <= 3'd1;
            dac_en <= 1'b1;
            reset_reg <= 1'b1;
          end
          else begin
            state_reg <= state_reg;
            dac_en <= dac_en;
            reset_reg <= reset_reg;
          end
        end
        3'd1 : begin    //Ready State
          reset_reg <= 1'b0;
          sclk_reg <= 1'b1;
          cs_reg <= 1'b1;
          sdio_reg_o <= 1'b0;
          sdio_reg_t <= 1'b0;
          spi_cnt <= 5'd0;
          spi_state <= 1'b0;
          if (slv_reg0[31] == 1'b0) begin
            state_reg <= 3'd0;
            dac_en <= 1'b0;
          end
          else begin
            if (slv_reg_write_sel == 7'b0001000) begin
              state_reg <= 3'd2;
              dac_en <= dac_en;
            end
            else begin
              state_reg <= state_reg;
              dac_en <= dac_en;
            end
          end
        end
        3'd2 : begin    //Judge State
          spi_state <= 1'b1;
          if (slv_reg3[16] == 1'b1) begin
            state_reg <= 3'd3;
            cs_reg <= 1'b0;
          end
          else begin
            state_reg <= 3'd4;
            cs_reg <= 1'b0;
          end
        end
        3'd3 : begin    //Read State
          if (sclk_reg == 1'b1) begin
            if (spi_cnt == 5'd16) begin
              state_reg <= 3'd1;
            end
            else begin
              sclk_reg <= ~sclk_reg;
              if (spi_cnt < 5'd8) begin
                sdio_reg_o <= slv_reg3[16 + spi_cnt];
                sdio_reg_t <= 1'b0;
              end
              else begin
                sdio_reg_o <= 1'dz;
                sdio_reg_t <= 1'b1;
              end
            end
          end
          else begin
            state_reg <= state_reg;
            sclk_reg <= ~sclk_reg;
            sdio_reg_o <= sdio_reg_o;
            sdio_reg_t <= sdio_reg_t;
            spi_cnt <= spi_cnt + 1'b1;
          end
        end
        3'd4 : begin    //Write State
          if (sclk_reg == 1'b1) begin
            if (spi_cnt == 5'd16) begin
              state_reg <= 3'd1;
            end
            else begin
              sclk_reg <= ~sclk_reg;
              sdio_reg_o <= slv_reg3[16 + spi_cnt];
              sdio_reg_t <= 1'b0;
            end
          end
          else begin
            state_reg <= state_reg;
            sclk_reg <= ~sclk_reg;
            sdio_reg_o <= sdio_reg_o;
            sdio_reg_t <= sdio_reg_t;
            spi_cnt <= spi_cnt + 1'b1;
          end
        end
        default : state_reg <= 3'd0;
      endcase
    end


  ip_dds ip_dds_q (
    .clk(Bus2IP_Clk), 
    .we(1'b1), 
    .phase_out(phase_out), 
    .cosine(), 
    .sine(sine_data), 
    .data(step_ctl)
  );

  /*bram_arb bram_arb_1 (
    .clka(Bus2IP_Clk), 
    .wea(bram_wea), 
    .addra(bram_addr), 
    .dina(Bus2IP_Data[22 : 31]), 
    .douta(arb_data)
  );*/

  bram_arb bram_arb_1 (
    .clka(Bus2IP_Clk), 
    .wea(1'b0), 
    .addra(phase_out), 
    .dina(Bus2IP_Data[22 : 31]), 
    .douta(arb_data)
  );


  // ------------------------------------------------------------
  // Example code to drive IP to Bus signals
  // ------------------------------------------------------------

  //assign bram_wea = Bus2IP_CS[0] & Bus2IP_RNW;
  //assign bram_addr = (bram_wea) ? (Bus2IP_Addr[16: 31]) : (phase_out);

  assign i_waveform = slv_reg0[20 : 23];
  assign q_waveform = slv_reg0[16 : 19];
  assign step_ctl = slv_reg0[0 : 15] + 1'b1;

  assign rect_data = (phase_out < 16'h8000) ? (10'h3ff) : (10'h0);
  assign saw_data = phase_out[15 : 6];
  assign unsigned_sine_data = (sine_data[9]) ? (sine_data - 10'd512) : (sine_data + 10'd512);

  // ------------------------------------------------------------
  // Example code to drive IP to Bus signals
  // ------------------------------------------------------------

  assign IP2Bus_Data    = slv_ip2bus_data;
  assign IP2Bus_WrAck   = slv_write_ack;
  assign IP2Bus_RdAck   = slv_read_ack;
  assign IP2Bus_Error   = 0; 

  assign IP2DAC_Data =  (dac_en) ? (dac_data_reg) : (10'b0);
  assign IP2DAC_DCLKIO = (dac_en) ? (dac_clk_reg) : (1'b0);
  assign IP2DAC_Clkout = (dac_en) ? (dac_clk_reg) : (1'b0);

  assign IP2DAC_PinMD = reset_reg;
  assign IP2DAC_ClkMD = sclk_reg;
  assign IP2DAC_Format_O = sdio_reg_o;
  assign IP2DAC_Format_T = sdio_reg_t;
  assign IP2DAC_PWRDN = cs_reg;
  assign IP2DAC_OpEnI = slv_reg0[29];
  assign IP2DAC_OpEnQ = slv_reg0[28]; 

endmodule
