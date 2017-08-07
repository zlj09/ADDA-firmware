`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:10:19 08/07/2017
// Design Name:   user_logic
// Module Name:   F:/Programs/Verilog/FPGA_Group/test_br0101/microblaze/pcores/axi_dac_v1_00_a/vsim/tb_user_logic.v
// Project Name:  axi_dac
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

module tb_user_logic;

	// Inputs
	reg Bus2IP_Clk;
	reg Bus2IP_Resetn;
	reg [31:0] Bus2IP_Data;
	reg [3:0] Bus2IP_BE;
	reg [1:0] Bus2IP_RdCE;
	reg [1:0] Bus2IP_WrCE;

	// Outputs
	wire [9:0] IP2DAC_Data;
	wire IP2DAC_DCLKIO;
	wire IP2DAC_Clkout;
	wire IP2DAC_PinMD;
	wire IP2DAC_ClkMD;
	wire IP2DAC_Format;
	wire IP2DAC_PWRDN;
	wire [31:0] IP2Bus_Data;
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
		.IP2DAC_Format(IP2DAC_Format), 
		.IP2DAC_PWRDN(IP2DAC_PWRDN), 
		.Bus2IP_Clk(Bus2IP_Clk), 
		.Bus2IP_Resetn(Bus2IP_Resetn), 
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
		Bus2IP_Resetn = 0;
		Bus2IP_Data = 0;
		Bus2IP_BE = 0;
		Bus2IP_RdCE = 0;
		Bus2IP_WrCE = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		Bus2IP_Resetn = 1'b1;

		Bus2IP_BE = 4'b1111;

		#20;
		Bus2IP_WrCE = 2'b10;
		Bus2IP_Data = 32'h0000_0001;

		#20;
		Bus2IP_WrCE = 2'b01;
		Bus2IP_Data = 32'h0000_0001;

		#20;
		Bus2IP_WrCE = 2'b01;
		Bus2IP_Data = 32'h0000_00ff;

		#20;
		Bus2IP_WrCE = 2'b01;
		Bus2IP_Data = 32'h0000_03ff;

		#20;
		Bus2IP_WrCE = 2'b10;
		Bus2IP_Data = 32'h0000_0002;

		#20;
		Bus2IP_WrCE = 2'b01;
		Bus2IP_Data = 32'h0000_0001;

		#20;
		Bus2IP_WrCE = 2'b01;
		Bus2IP_Data = 32'h0000_00ff;

		#20;
		Bus2IP_WrCE = 2'b01;
		Bus2IP_Data = 32'h0000_03ff;

		#20;
		Bus2IP_WrCE = 2'b10;
		Bus2IP_Data = 32'h0000_0000;

	end

	always @(Bus2IP_Clk)
		#10 Bus2IP_Clk <= ~Bus2IP_Clk;
      
endmodule

