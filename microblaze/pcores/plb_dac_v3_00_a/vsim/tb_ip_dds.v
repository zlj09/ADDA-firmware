`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:31:41 10/27/2017
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
	reg sclr;
	reg [15:0] data;

	// Outputs
	wire [15:0] phase_out;
	wire [9:0] cosine;
	wire [9:0] sine;

	// Instantiate the Unit Under Test (UUT)
	ip_dds uut (
		.clk(clk), 
		.we(we), 
		.sclr(sclr), 
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
		sclr = 0;

		// Wait 100 ns for global reset to finish
		#100;
		we = 1;
		//data = 16'h028f;
		data = 16'h020a;
        
		// Add stimulus here

	end

	always @(phase_out)
		if (phase_out > 16'hffff - 3 * data + 1 && phase_out < 16'hffff - 2 * data + 1)
			sclr <= 1'b1;
		else begin
			sclr <= 1'b0;
		end

	always @(clk) #5 clk <= ~clk;
      
endmodule

