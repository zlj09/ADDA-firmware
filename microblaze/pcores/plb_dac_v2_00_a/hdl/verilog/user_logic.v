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
// Version:           2.00.a
// Description:       User logic module.
// Date:              Mon Aug 21 18:16:28 2017 (by Create and Import Peripheral Wizard)
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
  // -- ADD USER PORTS ABOVE THIS LINE ---------------
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
  // -- DO NOT EDIT BELOW THIS LINE ------------------
  // -- Bus protocol ports, do not add to or delete 
  Bus2IP_Clk,                     // Bus to IP clock
  Bus2IP_Reset,                   // Bus to IP reset
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
// -- ADD USER PARAMETERS ABOVE THIS LINE ------------

// -- DO NOT EDIT BELOW THIS LINE --------------------
// -- Bus protocol parameters, do not add to or delete
parameter C_SLV_DWIDTH                   = 32;
parameter C_NUM_REG                      = 5;
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
  wire       [1 : 0]                        i_waveform;
  wire       [1 : 0]                        q_waveform;
  wire       [3 : 0]                        step_ctl;
  reg        [7 : 0]                        wav_index;
  wire       [9 : 0]                        rect_data;
  wire       [9 : 0]                        saw_data;
  wire       [9 : 0]                        sine_data;
  // Nets for user logic slave model s/w accessible register example
  reg        [0 : C_SLV_DWIDTH-1]           slv_reg0;
  reg        [0 : C_SLV_DWIDTH-1]           slv_reg1;
  reg        [0 : C_SLV_DWIDTH-1]           slv_reg2;
  reg        [0 : C_SLV_DWIDTH-1]           slv_reg3;
  reg        [0 : C_SLV_DWIDTH-1]           slv_reg4;
  wire       [0 : 4]                        slv_reg_write_sel;
  wire       [0 : 4]                        slv_reg_read_sel;
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
    slv_reg_write_sel = Bus2IP_WrCE[0:4],
    slv_reg_read_sel  = Bus2IP_RdCE[0:4],
    slv_write_ack     = Bus2IP_WrCE[0] || Bus2IP_WrCE[1] || Bus2IP_WrCE[2] || Bus2IP_WrCE[3] || Bus2IP_WrCE[4],
    slv_read_ack      = Bus2IP_RdCE[0] || Bus2IP_RdCE[1] || Bus2IP_RdCE[2] || Bus2IP_RdCE[3] || Bus2IP_RdCE[4];

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
        end
      else begin
        case ( slv_reg_write_sel )
          5'b10000 :
            for ( byte_index = 0; byte_index <= (C_SLV_DWIDTH/8)-1; byte_index = byte_index+1 )
              if ( Bus2IP_BE[byte_index] == 1 )
                for ( bit_index = byte_index*8; bit_index <= byte_index*8+7; bit_index = bit_index+1 )
                  slv_reg0[bit_index] <= Bus2IP_Data[bit_index];
          5'b01000 :
            for ( byte_index = 0; byte_index <= (C_SLV_DWIDTH/8)-1; byte_index = byte_index+1 )
              if ( Bus2IP_BE[byte_index] == 1 )
                for ( bit_index = byte_index*8; bit_index <= byte_index*8+7; bit_index = bit_index+1 )
                  slv_reg1[bit_index] <= Bus2IP_Data[bit_index];
          5'b00100 :
            for ( byte_index = 0; byte_index <= (C_SLV_DWIDTH/8)-1; byte_index = byte_index+1 )
              if ( Bus2IP_BE[byte_index] == 1 )
                for ( bit_index = byte_index*8; bit_index <= byte_index*8+7; bit_index = bit_index+1 )
                  slv_reg2[bit_index] <= Bus2IP_Data[bit_index];
          5'b00010 :
            for ( byte_index = 0; byte_index <= (C_SLV_DWIDTH/8)-1; byte_index = byte_index+1 )
              if ( Bus2IP_BE[byte_index] == 1 )
                for ( bit_index = byte_index*8; bit_index <= byte_index*8+7; bit_index = bit_index+1 )
                  slv_reg3[bit_index] <= Bus2IP_Data[bit_index];
          5'b00001 :
            for ( byte_index = 0; byte_index <= (C_SLV_DWIDTH/8)-1; byte_index = byte_index+1 )
              if ( Bus2IP_BE[byte_index] == 1 )
                for ( bit_index = byte_index*8; bit_index <= byte_index*8+7; bit_index = bit_index+1 )
                  slv_reg4[bit_index] <= Bus2IP_Data[bit_index];
          default : ;
        endcase

        if (state_reg == 3'd3 && sclk_reg == 1'b0 && spi_cnt >= 5'd8)
          slv_reg3[16 + spi_cnt] <= IP2DAC_Format_I;

        slv_reg0[30] <= spi_state;
      end

    end // SLAVE_REG_WRITE_PROC

  // implement slave model register read mux
  always @( slv_reg_read_sel or slv_reg0 or slv_reg1 or slv_reg2 or slv_reg3 or slv_reg4 )
    begin: SLAVE_REG_READ_PROC

      case ( slv_reg_read_sel )
        5'b10000 : slv_ip2bus_data <= slv_reg0;
        5'b01000 : slv_ip2bus_data <= slv_reg1;
        5'b00100 : slv_ip2bus_data <= slv_reg2;
        5'b00010 : slv_ip2bus_data <= slv_reg3;
        5'b00001 : slv_ip2bus_data <= slv_reg4;
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
        wav_index <= 8'd0;
      end
      else begin
        if (dac_clk_reg == 1'b1) begin
          case (q_waveform)
          2'd0: dac_data_reg <= slv_reg2[22: 31];
          2'd1: dac_data_reg <= rect_data;
          2'd2: dac_data_reg <= saw_data;
          2'd3: dac_data_reg <= sine_data;
          default: dac_data_reg <= dac_data_reg;
          endcase
        end
        else begin
          case (i_waveform)
          2'd0: dac_data_reg <= slv_reg1[22: 31];
          2'd1: dac_data_reg <= rect_data;
          2'd2: dac_data_reg <= saw_data;
          2'd3: dac_data_reg <= sine_data;
          default: dac_data_reg <= dac_data_reg;
          endcase
          wav_index <= wav_index + step_ctl + 1'b1;
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
            if (slv_reg_write_sel == 5'b00010) begin
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

  rect_wave_gen rect_wave_gen_1(
    .index        (   wav_index   ),
    .duty_cycle   (   8'h80       ),
    .rect_data    (   rect_data   )
  );

  saw_wave_gen saw_wave_gen_1(
    .index        (   wav_index    ),
    .saw_data     (   saw_data     )
  );

  sine_wave_gen sine_wave_gen_1(
    .index        (   wav_index   ),
    .sine_data    (   sine_data   )
  );

  assign i_waveform = slv_reg0[26 : 27];
  assign q_waveform = slv_reg0[24 : 25];
  assign step_ctl = slv_reg0[20 : 23];

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


module rect_wave_gen(
  index,
  duty_cycle,
  rect_data
);

  input     [7 : 0]       index;
  input     [7 : 0]       duty_cycle;
  output    [9 : 0]       rect_data;

  assign rect_data = (index < duty_cycle) ? (10'h3ff) : (10'h0);

endmodule


module saw_wave_gen(
  index,
  saw_data
);
  
  input     [7 : 0]       index;
  output    [9 : 0]       saw_data;

  assign saw_data = {index, 2'b0};

endmodule

module sine_wave_gen(
  index,
  sine_data
);

  input     [7 : 0]       index;
  output    [9 : 0]       sine_data;

  reg       [9 : 0]       sine_data_reg;

  assign sine_data = sine_data_reg;

  always @(index) begin
    case (index)
    8'd0: sine_data_reg <= 10'd512;
    8'd1: sine_data_reg <= 10'd524;
    8'd2: sine_data_reg <= 10'd537;
    8'd3: sine_data_reg <= 10'd549;
    8'd4: sine_data_reg <= 10'd562;
    8'd5: sine_data_reg <= 10'd574;
    8'd6: sine_data_reg <= 10'd587;
    8'd7: sine_data_reg <= 10'd599;
    8'd8: sine_data_reg <= 10'd612;
    8'd9: sine_data_reg <= 10'd624;
    8'd10: sine_data_reg <= 10'd636;
    8'd11: sine_data_reg <= 10'd649;
    8'd12: sine_data_reg <= 10'd661;
    8'd13: sine_data_reg <= 10'd673;
    8'd14: sine_data_reg <= 10'd685;
    8'd15: sine_data_reg <= 10'd696;
    8'd16: sine_data_reg <= 10'd708;
    8'd17: sine_data_reg <= 10'd720;
    8'd18: sine_data_reg <= 10'd731;
    8'd19: sine_data_reg <= 10'd743;
    8'd20: sine_data_reg <= 10'd754;
    8'd21: sine_data_reg <= 10'd765;
    8'd22: sine_data_reg <= 10'd776;
    8'd23: sine_data_reg <= 10'd786;
    8'd24: sine_data_reg <= 10'd797;
    8'd25: sine_data_reg <= 10'd807;
    8'd26: sine_data_reg <= 10'd818;
    8'd27: sine_data_reg <= 10'd828;
    8'd28: sine_data_reg <= 10'd837;
    8'd29: sine_data_reg <= 10'd847;
    8'd30: sine_data_reg <= 10'd856;
    8'd31: sine_data_reg <= 10'd866;
    8'd32: sine_data_reg <= 10'd875;
    8'd33: sine_data_reg <= 10'd883;
    8'd34: sine_data_reg <= 10'd892;
    8'd35: sine_data_reg <= 10'd900;
    8'd36: sine_data_reg <= 10'd908;
    8'd37: sine_data_reg <= 10'd916;
    8'd38: sine_data_reg <= 10'd924;
    8'd39: sine_data_reg <= 10'd931;
    8'd40: sine_data_reg <= 10'd938;
    8'd41: sine_data_reg <= 10'd945;
    8'd42: sine_data_reg <= 10'd952;
    8'd43: sine_data_reg <= 10'd958;
    8'd44: sine_data_reg <= 10'd964;
    8'd45: sine_data_reg <= 10'd970;
    8'd46: sine_data_reg <= 10'd975;
    8'd47: sine_data_reg <= 10'd981;
    8'd48: sine_data_reg <= 10'd985;
    8'd49: sine_data_reg <= 10'd990;
    8'd50: sine_data_reg <= 10'd994;
    8'd51: sine_data_reg <= 10'd998;
    8'd52: sine_data_reg <= 10'd1002;
    8'd53: sine_data_reg <= 10'd1006;
    8'd54: sine_data_reg <= 10'd1009;
    8'd55: sine_data_reg <= 10'd1012;
    8'd56: sine_data_reg <= 10'd1014;
    8'd57: sine_data_reg <= 10'd1016;
    8'd58: sine_data_reg <= 10'd1018;
    8'd59: sine_data_reg <= 10'd1020;
    8'd60: sine_data_reg <= 10'd1021;
    8'd61: sine_data_reg <= 10'd1022;
    8'd62: sine_data_reg <= 10'd1023;
    8'd63: sine_data_reg <= 10'd1023;
    8'd64: sine_data_reg <= 10'd1023;
    8'd65: sine_data_reg <= 10'd1023;
    8'd66: sine_data_reg <= 10'd1023;
    8'd67: sine_data_reg <= 10'd1022;
    8'd68: sine_data_reg <= 10'd1021;
    8'd69: sine_data_reg <= 10'd1019;
    8'd70: sine_data_reg <= 10'd1017;
    8'd71: sine_data_reg <= 10'd1015;
    8'd72: sine_data_reg <= 10'd1013;
    8'd73: sine_data_reg <= 10'd1010;
    8'd74: sine_data_reg <= 10'd1007;
    8'd75: sine_data_reg <= 10'd1004;
    8'd76: sine_data_reg <= 10'd1000;
    8'd77: sine_data_reg <= 10'd996;
    8'd78: sine_data_reg <= 10'd992;
    8'd79: sine_data_reg <= 10'd988;
    8'd80: sine_data_reg <= 10'd983;
    8'd81: sine_data_reg <= 10'd978;
    8'd82: sine_data_reg <= 10'd973;
    8'd83: sine_data_reg <= 10'd967;
    8'd84: sine_data_reg <= 10'd961;
    8'd85: sine_data_reg <= 10'd955;
    8'd86: sine_data_reg <= 10'd948;
    8'd87: sine_data_reg <= 10'd942;
    8'd88: sine_data_reg <= 10'd935;
    8'd89: sine_data_reg <= 10'd928;
    8'd90: sine_data_reg <= 10'd920;
    8'd91: sine_data_reg <= 10'd912;
    8'd92: sine_data_reg <= 10'd904;
    8'd93: sine_data_reg <= 10'd896;
    8'd94: sine_data_reg <= 10'd888;
    8'd95: sine_data_reg <= 10'd879;
    8'd96: sine_data_reg <= 10'd870;
    8'd97: sine_data_reg <= 10'd861;
    8'd98: sine_data_reg <= 10'd852;
    8'd99: sine_data_reg <= 10'd842;
    8'd100: sine_data_reg <= 10'd832;
    8'd101: sine_data_reg <= 10'd823;
    8'd102: sine_data_reg <= 10'd812;
    8'd103: sine_data_reg <= 10'd802;
    8'd104: sine_data_reg <= 10'd792;
    8'd105: sine_data_reg <= 10'd781;
    8'd106: sine_data_reg <= 10'd770;
    8'd107: sine_data_reg <= 10'd759;
    8'd108: sine_data_reg <= 10'd748;
    8'd109: sine_data_reg <= 10'd737;
    8'd110: sine_data_reg <= 10'd725;
    8'd111: sine_data_reg <= 10'd714;
    8'd112: sine_data_reg <= 10'd702;
    8'd113: sine_data_reg <= 10'd691;
    8'd114: sine_data_reg <= 10'd679;
    8'd115: sine_data_reg <= 10'd667;
    8'd116: sine_data_reg <= 10'd655;
    8'd117: sine_data_reg <= 10'd642;
    8'd118: sine_data_reg <= 10'd630;
    8'd119: sine_data_reg <= 10'd618;
    8'd120: sine_data_reg <= 10'd606;
    8'd121: sine_data_reg <= 10'd593;
    8'd122: sine_data_reg <= 10'd581;
    8'd123: sine_data_reg <= 10'd568;
    8'd124: sine_data_reg <= 10'd556;
    8'd125: sine_data_reg <= 10'd543;
    8'd126: sine_data_reg <= 10'd530;
    8'd127: sine_data_reg <= 10'd518;
    8'd128: sine_data_reg <= 10'd505;
    8'd129: sine_data_reg <= 10'd493;
    8'd130: sine_data_reg <= 10'd480;
    8'd131: sine_data_reg <= 10'd467;
    8'd132: sine_data_reg <= 10'd455;
    8'd133: sine_data_reg <= 10'd442;
    8'd134: sine_data_reg <= 10'd430;
    8'd135: sine_data_reg <= 10'd417;
    8'd136: sine_data_reg <= 10'd405;
    8'd137: sine_data_reg <= 10'd393;
    8'd138: sine_data_reg <= 10'd381;
    8'd139: sine_data_reg <= 10'd368;
    8'd140: sine_data_reg <= 10'd356;
    8'd141: sine_data_reg <= 10'd344;
    8'd142: sine_data_reg <= 10'd332;
    8'd143: sine_data_reg <= 10'd321;
    8'd144: sine_data_reg <= 10'd309;
    8'd145: sine_data_reg <= 10'd298;
    8'd146: sine_data_reg <= 10'd286;
    8'd147: sine_data_reg <= 10'd275;
    8'd148: sine_data_reg <= 10'd264;
    8'd149: sine_data_reg <= 10'd253;
    8'd150: sine_data_reg <= 10'd242;
    8'd151: sine_data_reg <= 10'd231;
    8'd152: sine_data_reg <= 10'd221;
    8'd153: sine_data_reg <= 10'd211;
    8'd154: sine_data_reg <= 10'd200;
    8'd155: sine_data_reg <= 10'd191;
    8'd156: sine_data_reg <= 10'd181;
    8'd157: sine_data_reg <= 10'd171;
    8'd158: sine_data_reg <= 10'd162;
    8'd159: sine_data_reg <= 10'd153;
    8'd160: sine_data_reg <= 10'd144;
    8'd161: sine_data_reg <= 10'd135;
    8'd162: sine_data_reg <= 10'd127;
    8'd163: sine_data_reg <= 10'd119;
    8'd164: sine_data_reg <= 10'd111;
    8'd165: sine_data_reg <= 10'd103;
    8'd166: sine_data_reg <= 10'd95;
    8'd167: sine_data_reg <= 10'd88;
    8'd168: sine_data_reg <= 10'd81;
    8'd169: sine_data_reg <= 10'd75;
    8'd170: sine_data_reg <= 10'd68;
    8'd171: sine_data_reg <= 10'd62;
    8'd172: sine_data_reg <= 10'd56;
    8'd173: sine_data_reg <= 10'd50;
    8'd174: sine_data_reg <= 10'd45;
    8'd175: sine_data_reg <= 10'd40;
    8'd176: sine_data_reg <= 10'd35;
    8'd177: sine_data_reg <= 10'd31;
    8'd178: sine_data_reg <= 10'd27;
    8'd179: sine_data_reg <= 10'd23;
    8'd180: sine_data_reg <= 10'd19;
    8'd181: sine_data_reg <= 10'd16;
    8'd182: sine_data_reg <= 10'd13;
    8'd183: sine_data_reg <= 10'd10;
    8'd184: sine_data_reg <= 10'd8;
    8'd185: sine_data_reg <= 10'd6;
    8'd186: sine_data_reg <= 10'd4;
    8'd187: sine_data_reg <= 10'd2;
    8'd188: sine_data_reg <= 10'd1;
    8'd189: sine_data_reg <= 10'd0;
    8'd190: sine_data_reg <= 10'd0;
    8'd191: sine_data_reg <= 10'd0;
    8'd192: sine_data_reg <= 10'd0;
    8'd193: sine_data_reg <= 10'd0;
    8'd194: sine_data_reg <= 10'd1;
    8'd195: sine_data_reg <= 10'd2;
    8'd196: sine_data_reg <= 10'd3;
    8'd197: sine_data_reg <= 10'd5;
    8'd198: sine_data_reg <= 10'd7;
    8'd199: sine_data_reg <= 10'd9;
    8'd200: sine_data_reg <= 10'd11;
    8'd201: sine_data_reg <= 10'd14;
    8'd202: sine_data_reg <= 10'd17;
    8'd203: sine_data_reg <= 10'd21;
    8'd204: sine_data_reg <= 10'd25;
    8'd205: sine_data_reg <= 10'd29;
    8'd206: sine_data_reg <= 10'd33;
    8'd207: sine_data_reg <= 10'd38;
    8'd208: sine_data_reg <= 10'd42;
    8'd209: sine_data_reg <= 10'd48;
    8'd210: sine_data_reg <= 10'd53;
    8'd211: sine_data_reg <= 10'd59;
    8'd212: sine_data_reg <= 10'd65;
    8'd213: sine_data_reg <= 10'd71;
    8'd214: sine_data_reg <= 10'd78;
    8'd215: sine_data_reg <= 10'd85;
    8'd216: sine_data_reg <= 10'd92;
    8'd217: sine_data_reg <= 10'd99;
    8'd218: sine_data_reg <= 10'd107;
    8'd219: sine_data_reg <= 10'd115;
    8'd220: sine_data_reg <= 10'd123;
    8'd221: sine_data_reg <= 10'd131;
    8'd222: sine_data_reg <= 10'd140;
    8'd223: sine_data_reg <= 10'd148;
    8'd224: sine_data_reg <= 10'd157;
    8'd225: sine_data_reg <= 10'd167;
    8'd226: sine_data_reg <= 10'd176;
    8'd227: sine_data_reg <= 10'd186;
    8'd228: sine_data_reg <= 10'd195;
    8'd229: sine_data_reg <= 10'd205;
    8'd230: sine_data_reg <= 10'd216;
    8'd231: sine_data_reg <= 10'd226;
    8'd232: sine_data_reg <= 10'd237;
    8'd233: sine_data_reg <= 10'd247;
    8'd234: sine_data_reg <= 10'd258;
    8'd235: sine_data_reg <= 10'd269;
    8'd236: sine_data_reg <= 10'd280;
    8'd237: sine_data_reg <= 10'd292;
    8'd238: sine_data_reg <= 10'd303;
    8'd239: sine_data_reg <= 10'd315;
    8'd240: sine_data_reg <= 10'd327;
    8'd241: sine_data_reg <= 10'd338;
    8'd242: sine_data_reg <= 10'd350;
    8'd243: sine_data_reg <= 10'd362;
    8'd244: sine_data_reg <= 10'd374;
    8'd245: sine_data_reg <= 10'd387;
    8'd246: sine_data_reg <= 10'd399;
    8'd247: sine_data_reg <= 10'd411;
    8'd248: sine_data_reg <= 10'd424;
    8'd249: sine_data_reg <= 10'd436;
    8'd250: sine_data_reg <= 10'd449;
    8'd251: sine_data_reg <= 10'd461;
    8'd252: sine_data_reg <= 10'd474;
    8'd253: sine_data_reg <= 10'd486;
    8'd254: sine_data_reg <= 10'd499;
    8'd255: sine_data_reg <= 10'd511;
    default: sine_data_reg <= 10'd0;
    endcase
  end

endmodule