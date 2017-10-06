`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:53:19 10/06/2017
// Design Name:   ip_dds
// Module Name:   F:/Programs/Verilog/FPGA_Group/test_br0101/microblaze/pcores/plb_dac_v3_00_a/vsim/tb_ip_dds.v
// Project Name:  plb_dac
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ip_dds
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_ip_dds;

	// Inputs
	reg clk;
	reg we;
	reg [15:0] data;

	// Outputs
	wire [15:0] phase_out;
	wire [9:0] cosine;
	wire [9:0] sine;

	// Instantiate the Unit Under Test (UUT)
	ip_dds uut (
		.clk(clk), 
		.we(we), 
		.phase_out(phase_out), 
		.cosine(cosine), 
		.sine(sine), 
		.data(data)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		we = 0;
		data = 0;

		// Wait 100 ns for global reset to finish
		#100;
		we = 1;
		data = 16'h1;
        
		// Add stimulus here

	end

	always @(clk) #5 clk <= ~clk;
      
endmodule

