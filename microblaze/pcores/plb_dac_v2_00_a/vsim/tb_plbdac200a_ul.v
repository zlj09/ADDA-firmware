`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:14:09 08/27/2017
// Design Name:   user_logic
// Module Name:   F:/Programs/Verilog/FPGA_Group/test_br0101/microblaze/pcores/plb_dac_v2_00_a/vsim/tb_plbdac200a_ul.v
// Project Name:  plb_dac
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: user_logic
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_plbdac200a_ul;

	// Inputs
	reg IP2DAC_Format_I;
	reg Bus2IP_Clk;
	reg Bus2IP_Reset;
	reg [0:31] Bus2IP_Data;
	reg [0:3] Bus2IP_BE;
	reg [0:4] Bus2IP_RdCE;
	reg [0:4] Bus2IP_WrCE;

	// Outputs
	wire [0:9] IP2DAC_Data;
	wire IP2DAC_DCLKIO;
	wire IP2DAC_Clkout;
	wire IP2DAC_PinMD;
	wire IP2DAC_ClkMD;
	wire IP2DAC_Format_O;
	wire IP2DAC_Format_T;
	wire IP2DAC_PWRDN;
	wire IP2DAC_OpEnI;
	wire IP2DAC_OpEnQ;
	wire [0:31] IP2Bus_Data;
	wire IP2Bus_RdAck;
	wire IP2Bus_WrAck;
	wire IP2Bus_Error;

	// Instantiate the Unit Under Test (UUT)
	user_logic uut (
		.IP2DAC_Data(IP2DAC_Data), 
		.IP2DAC_DCLKIO(IP2DAC_DCLKIO), 
		.IP2DAC_Clkout(IP2DAC_Clkout), 
		.IP2DAC_PinMD(IP2DAC_PinMD), 
		.IP2DAC_ClkMD(IP2DAC_ClkMD), 
		.IP2DAC_Format_I(IP2DAC_Format_I), 
		.IP2DAC_Format_O(IP2DAC_Format_O), 
		.IP2DAC_Format_T(IP2DAC_Format_T), 
		.IP2DAC_PWRDN(IP2DAC_PWRDN), 
		.IP2DAC_OpEnI(IP2DAC_OpEnI), 
		.IP2DAC_OpEnQ(IP2DAC_OpEnQ), 
		.Bus2IP_Clk(Bus2IP_Clk), 
		.Bus2IP_Reset(Bus2IP_Reset), 
		.Bus2IP_Data(Bus2IP_Data), 
		.Bus2IP_BE(Bus2IP_BE), 
		.Bus2IP_RdCE(Bus2IP_RdCE), 
		.Bus2IP_WrCE(Bus2IP_WrCE), 
		.IP2Bus_Data(IP2Bus_Data), 
		.IP2Bus_RdAck(IP2Bus_RdAck), 
		.IP2Bus_WrAck(IP2Bus_WrAck), 
		.IP2Bus_Error(IP2Bus_Error)
	);

	initial begin
		// Initialize Inputs
		Bus2IP_Clk = 0;
		Bus2IP_Reset = 1;
		Bus2IP_Data = 0;
		Bus2IP_BE = 0;
		Bus2IP_RdCE = 0;
		Bus2IP_WrCE = 0;
		IP2DAC_Format_I = 0;

		// Wait 100 ns for global reset to finish
		#100;
		Bus2IP_Reset = 0;
        
		// Add stimulus here

		Bus2IP_BE = 4'b1111;

		#200;
		Bus2IP_WrCE = 5'b10000;
		Bus2IP_Data = 32'h0000_0001;

		#200;
		Bus2IP_WrCE = 5'b01000;
		Bus2IP_Data = 32'h0000_1234;

		#200;
		Bus2IP_WrCE = 5'b00100;
		Bus2IP_Data = 32'h0000_0123;

		#200;
		Bus2IP_WrCE = 5'b01000;
		Bus2IP_Data = 32'h0000_0000;

		#200;
		Bus2IP_WrCE = 5'b00100;
		Bus2IP_Data = 32'h0000_0000;

		#200;
		Bus2IP_WrCE = 5'b00010;
		Bus2IP_Data = 32'h0000_5cba;
		#20;
		Bus2IP_WrCE = 5'b00000;
		Bus2IP_Data = 32'h0000_0000;

		#350;
		Bus2IP_RdCE = 5'b10000;

		#350;
		Bus2IP_WrCE = 5'b00010;
		Bus2IP_Data = 32'h0000_abc5;
		#20;
		Bus2IP_WrCE = 5'b00000;
		Bus2IP_Data = 32'h0000_0000;

		#350;
		IP2DAC_Format_I = 1'b1;	

		#350;
		Bus2IP_RdCE = 5'b00010;

		#200;
		Bus2IP_WrCE = 5'b10000;
		Bus2IP_Data = 32'h0000_0000;

	end

	always @(Bus2IP_Clk)
		#10 Bus2IP_Clk <= ~Bus2IP_Clk;
      
endmodule

