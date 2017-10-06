`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:58:00 10/05/2017
// Design Name:   bram_arb
// Module Name:   F:/Programs/Verilog/FPGA_Group/test_br0101/microblaze/pcores/plb_dac_v3_00_a/vsim/tb_bram.v
// Project Name:  plb_dac
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: bram_arb
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_bram;

	// Inputs
	reg clka;
	reg [0:0] wea;
	reg [15:0] addra;
	reg [9:0] dina;

	// Outputs
	wire [9:0] douta;

	// Instantiate the Unit Under Test (UUT)
	bram_arb uut (
		.clka(clka), 
		.wea(wea), 
		.addra(addra), 
		.dina(dina), 
		.douta(douta)
	);

	initial begin
		// Initialize Inputs
		clka = 0;
		wea = 0;
		addra = 0;
		dina = 0;

		// Wait 100 ns for global reset to finish
		#100;
		addra = 16'd23;

		#100;
		addra = 16'd33;

		#100;
		addra = 16'd39;

		#100
		addra = 16'd40;
		wea = 1'b1;
		dina = 10'd233;

		#100
		addra = 16'd40;
		wea = 1'b0;
        
		// Add stimulus here

	end

	always @(clka) #5 clka <= ~clka;
      
endmodule

