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
  IP2DAC_Format,             //IP to DAC SPI SDIO
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
inout                                     IP2DAC_Format;
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
  reg                                       sdio_reg;
  reg        [2 : 0]                        state_reg;
  reg        [1 : 0]                        spi_state;
  reg                                       spi_flag;
  // Nets for user logic slave model s/w accessible register example
  reg        [0 : C_SLV_DWIDTH-1]           slv_reg0;
  reg        [0 : C_SLV_DWIDTH-1]           slv_reg1;
  reg        [0 : C_SLV_DWIDTH-1]           slv_reg2;
  reg        [0 : C_SLV_DWIDTH-1]           slv_reg3;
  reg        [0 : C_SLV_DWIDTH-1]           sslv_reg4;
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
      else
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
      if (Bus2IP_Reset == 1)
        dac_data_reg <= 10'b0;
      else begin
        dac_data_reg <= (dac_clk_reg) ? (slv_reg2[22: 31]) : (slv_reg1[22 : 31]);
      end
    end

  always @(posedge Bus2IP_Clk)
    begin
      if (Bus2IP_Reset == 1)
        sclk_reg <= 1'b1;
      else 
        sclk_reg <= ~sclk_reg;
    end

  always @( posedge Bus2IP_Clk )
    if ( Bus2IP_Reset == 1 )
      spi_state <= 2'd0;
    else begin
      case ( spi_reg )
        2'd0 : begin
            if (slv_reg_write_sel == 5'b00010)
              
          end
        3'd1 : state_reg <= 3'd0;
        3'd2 : state_reg <= 3'd0;
        3'd3 : state_reg <= 3'd0;
        3'd4 : state_reg <= 3'd0;
        default : state_reg <= 3'd0;
      endcase
    end

  always @( posedge Bus2IP_Clk )
    if ( Bus2IP_Reset == 1 )
      state_reg <= 3'd0;
    else begin
      case ( state_reg )
        3'd0 : state_reg <= (slv_reg0[0]) ? (3'd1) : (3'd0);
        3'd1 : state_reg <= 3'd0;
        3'd2 : state_reg <= 3'd0;
        3'd3 : state_reg <= 3'd0;
        3'd4 : state_reg <= 3'd0;
        default : state_reg <= 3'd0;
      endcase
    end

  // ------------------------------------------------------------
  // Example code to drive IP to Bus signals
  // ------------------------------------------------------------

  assign IP2Bus_Data    = slv_ip2bus_data;
  assign IP2Bus_WrAck   = slv_write_ack;
  assign IP2Bus_RdAck   = slv_read_ack;
  assign IP2Bus_Error   = 0;


  assign IP2DAC_Data = (IP2DAC_PWRDN) ? (10'b0) : (dac_data_reg);
  assign IP2DAC_DCLKIO = (IP2DAC_PWRDN) ? (1'b0) : (dac_clk_reg);
  assign IP2DAC_Clkout = (IP2DAC_PWRDN) ? (1'b0) : (dac_clk_reg);


endmodule
