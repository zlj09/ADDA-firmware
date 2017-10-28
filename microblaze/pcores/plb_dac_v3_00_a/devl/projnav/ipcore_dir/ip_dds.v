////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: P.20131013
//  \   \         Application: netgen
//  /   /         Filename: ip_dds.v
// /___/   /\     Timestamp: Fri Oct 27 09:29:18 2017
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -w -sim -ofmt verilog F:/Programs/Verilog/FPGA_Group/test_br0101/microblaze/pcores/plb_dac_v3_00_a/devl/projnav/ipcore_dir/tmp/_cg/ip_dds.ngc F:/Programs/Verilog/FPGA_Group/test_br0101/microblaze/pcores/plb_dac_v3_00_a/devl/projnav/ipcore_dir/tmp/_cg/ip_dds.v 
// Device	: 4vsx55ff1148-10
// Input file	: F:/Programs/Verilog/FPGA_Group/test_br0101/microblaze/pcores/plb_dac_v3_00_a/devl/projnav/ipcore_dir/tmp/_cg/ip_dds.ngc
// Output file	: F:/Programs/Verilog/FPGA_Group/test_br0101/microblaze/pcores/plb_dac_v3_00_a/devl/projnav/ipcore_dir/tmp/_cg/ip_dds.v
// # of Modules	: 1
// Design Name	: ip_dds
// Xilinx        : G:\Xilinx\14.7\ISE_DS\ISE\
//             
// Purpose:    
//     This verilog netlist is a verification model and uses simulation 
//     primitives which may not represent the true implementation of the 
//     device, however the netlist is functionally correct and should not 
//     be modified. This file cannot be synthesized and should only be used 
//     with supported simulation tools.
//             
// Reference:  
//     Command Line Tools User Guide, Chapter 23 and Synthesis and Simulation Design Guide, Chapter 6
//             
////////////////////////////////////////////////////////////////////////////////

`timescale 1 ns/1 ps

module ip_dds (
  clk, we, sclr, phase_out, cosine, sine, data
)/* synthesis syn_black_box syn_noprune=1 */;
  input clk;
  input we;
  input sclr;
  output [15 : 0] phase_out;
  output [9 : 0] cosine;
  output [9 : 0] sine;
  input [15 : 0] data;
  
  // synthesis translate_off
  
  wire sig00000001;
  wire sig00000002;
  wire sig00000003;
  wire sig00000004;
  wire sig00000005;
  wire sig00000006;
  wire sig00000007;
  wire sig00000008;
  wire sig00000009;
  wire sig0000000a;
  wire sig0000000b;
  wire sig0000000c;
  wire sig0000000d;
  wire sig0000000e;
  wire sig0000000f;
  wire sig00000010;
  wire sig00000011;
  wire sig00000012;
  wire sig00000013;
  wire sig00000014;
  wire sig00000015;
  wire sig00000016;
  wire sig00000017;
  wire sig00000018;
  wire sig00000019;
  wire sig0000001a;
  wire sig0000001b;
  wire sig0000001c;
  wire sig0000001d;
  wire sig0000001e;
  wire sig0000001f;
  wire sig00000020;
  wire sig00000021;
  wire sig00000022;
  wire sig00000023;
  wire sig00000024;
  wire sig00000025;
  wire sig00000026;
  wire sig00000027;
  wire sig00000028;
  wire sig00000029;
  wire sig0000002a;
  wire sig0000002b;
  wire sig0000002c;
  wire sig0000002d;
  wire sig0000002e;
  wire sig0000002f;
  wire sig00000030;
  wire sig00000031;
  wire sig00000032;
  wire sig00000033;
  wire sig00000034;
  wire sig00000035;
  wire sig00000036;
  wire sig00000037;
  wire sig00000038;
  wire sig00000039;
  wire sig0000003a;
  wire sig0000003b;
  wire sig0000003c;
  wire sig0000003d;
  wire sig0000003e;
  wire sig0000003f;
  wire sig00000040;
  wire sig00000041;
  wire sig00000042;
  wire sig00000043;
  wire sig00000044;
  wire sig00000045;
  wire sig00000046;
  wire sig00000047;
  wire sig00000048;
  wire sig00000049;
  wire sig0000004a;
  wire sig0000004b;
  wire sig0000004c;
  wire sig0000004d;
  wire sig0000004e;
  wire sig0000004f;
  wire sig00000050;
  wire sig00000051;
  wire sig00000052;
  wire sig00000053;
  wire sig00000054;
  wire sig00000055;
  wire sig00000056;
  wire sig00000057;
  wire sig00000058;
  wire sig00000059;
  wire sig0000005a;
  wire sig0000005b;
  wire sig0000005c;
  wire sig0000005d;
  wire sig0000005e;
  wire sig0000005f;
  wire sig00000060;
  wire sig00000061;
  wire sig00000062;
  wire sig00000063;
  wire sig00000064;
  wire sig00000065;
  wire \U0/i_synth/i_phase_out.del/pipe_2_0 ;
  wire \U0/i_synth/i_phase_out.del/pipe_2_1 ;
  wire \U0/i_synth/i_phase_out.del/pipe_2_10 ;
  wire \U0/i_synth/i_phase_out.del/pipe_2_11 ;
  wire \U0/i_synth/i_phase_out.del/pipe_2_12 ;
  wire \U0/i_synth/i_phase_out.del/pipe_2_13 ;
  wire \U0/i_synth/i_phase_out.del/pipe_2_14 ;
  wire \U0/i_synth/i_phase_out.del/pipe_2_15 ;
  wire \U0/i_synth/i_phase_out.del/pipe_2_2 ;
  wire \U0/i_synth/i_phase_out.del/pipe_2_3 ;
  wire \U0/i_synth/i_phase_out.del/pipe_2_4 ;
  wire \U0/i_synth/i_phase_out.del/pipe_2_5 ;
  wire \U0/i_synth/i_phase_out.del/pipe_2_6 ;
  wire \U0/i_synth/i_phase_out.del/pipe_2_7 ;
  wire \U0/i_synth/i_phase_out.del/pipe_2_8 ;
  wire \U0/i_synth/i_phase_out.del/pipe_2_9 ;
  wire NLW_blk00000076_CASCADEINA_UNCONNECTED;
  wire NLW_blk00000076_CASCADEINB_UNCONNECTED;
  wire NLW_blk00000076_CASCADEOUTA_UNCONNECTED;
  wire NLW_blk00000076_CASCADEOUTB_UNCONNECTED;
  wire \NLW_blk00000076_ADDRA<3>_UNCONNECTED ;
  wire \NLW_blk00000076_ADDRA<2>_UNCONNECTED ;
  wire \NLW_blk00000076_ADDRA<1>_UNCONNECTED ;
  wire \NLW_blk00000076_ADDRA<0>_UNCONNECTED ;
  wire \NLW_blk00000076_ADDRB<3>_UNCONNECTED ;
  wire \NLW_blk00000076_ADDRB<2>_UNCONNECTED ;
  wire \NLW_blk00000076_ADDRB<1>_UNCONNECTED ;
  wire \NLW_blk00000076_ADDRB<0>_UNCONNECTED ;
  wire \NLW_blk00000076_DIA<31>_UNCONNECTED ;
  wire \NLW_blk00000076_DIA<30>_UNCONNECTED ;
  wire \NLW_blk00000076_DIA<29>_UNCONNECTED ;
  wire \NLW_blk00000076_DIA<28>_UNCONNECTED ;
  wire \NLW_blk00000076_DIA<27>_UNCONNECTED ;
  wire \NLW_blk00000076_DIA<26>_UNCONNECTED ;
  wire \NLW_blk00000076_DIA<25>_UNCONNECTED ;
  wire \NLW_blk00000076_DIA<24>_UNCONNECTED ;
  wire \NLW_blk00000076_DIA<23>_UNCONNECTED ;
  wire \NLW_blk00000076_DIA<22>_UNCONNECTED ;
  wire \NLW_blk00000076_DIA<21>_UNCONNECTED ;
  wire \NLW_blk00000076_DIA<20>_UNCONNECTED ;
  wire \NLW_blk00000076_DIA<19>_UNCONNECTED ;
  wire \NLW_blk00000076_DIA<18>_UNCONNECTED ;
  wire \NLW_blk00000076_DIA<17>_UNCONNECTED ;
  wire \NLW_blk00000076_DIA<16>_UNCONNECTED ;
  wire \NLW_blk00000076_DIB<31>_UNCONNECTED ;
  wire \NLW_blk00000076_DIB<30>_UNCONNECTED ;
  wire \NLW_blk00000076_DIB<29>_UNCONNECTED ;
  wire \NLW_blk00000076_DIB<28>_UNCONNECTED ;
  wire \NLW_blk00000076_DIB<27>_UNCONNECTED ;
  wire \NLW_blk00000076_DIB<26>_UNCONNECTED ;
  wire \NLW_blk00000076_DIB<25>_UNCONNECTED ;
  wire \NLW_blk00000076_DIB<24>_UNCONNECTED ;
  wire \NLW_blk00000076_DIB<23>_UNCONNECTED ;
  wire \NLW_blk00000076_DIB<22>_UNCONNECTED ;
  wire \NLW_blk00000076_DIB<21>_UNCONNECTED ;
  wire \NLW_blk00000076_DIB<20>_UNCONNECTED ;
  wire \NLW_blk00000076_DIB<19>_UNCONNECTED ;
  wire \NLW_blk00000076_DIB<18>_UNCONNECTED ;
  wire \NLW_blk00000076_DIB<17>_UNCONNECTED ;
  wire \NLW_blk00000076_DIB<16>_UNCONNECTED ;
  wire \NLW_blk00000076_DIB<15>_UNCONNECTED ;
  wire \NLW_blk00000076_DIB<14>_UNCONNECTED ;
  wire \NLW_blk00000076_DIB<13>_UNCONNECTED ;
  wire \NLW_blk00000076_DIB<12>_UNCONNECTED ;
  wire \NLW_blk00000076_DIB<11>_UNCONNECTED ;
  wire \NLW_blk00000076_DIB<10>_UNCONNECTED ;
  wire \NLW_blk00000076_DIB<9>_UNCONNECTED ;
  wire \NLW_blk00000076_DIB<8>_UNCONNECTED ;
  wire \NLW_blk00000076_DIB<7>_UNCONNECTED ;
  wire \NLW_blk00000076_DIB<6>_UNCONNECTED ;
  wire \NLW_blk00000076_DIB<5>_UNCONNECTED ;
  wire \NLW_blk00000076_DIB<4>_UNCONNECTED ;
  wire \NLW_blk00000076_DIB<3>_UNCONNECTED ;
  wire \NLW_blk00000076_DIB<2>_UNCONNECTED ;
  wire \NLW_blk00000076_DIB<1>_UNCONNECTED ;
  wire \NLW_blk00000076_DIB<0>_UNCONNECTED ;
  wire \NLW_blk00000076_DIPA<3>_UNCONNECTED ;
  wire \NLW_blk00000076_DIPA<2>_UNCONNECTED ;
  wire \NLW_blk00000076_DIPB<3>_UNCONNECTED ;
  wire \NLW_blk00000076_DIPB<2>_UNCONNECTED ;
  wire \NLW_blk00000076_DIPB<1>_UNCONNECTED ;
  wire \NLW_blk00000076_DIPB<0>_UNCONNECTED ;
  wire \NLW_blk00000076_DOA<31>_UNCONNECTED ;
  wire \NLW_blk00000076_DOA<30>_UNCONNECTED ;
  wire \NLW_blk00000076_DOA<29>_UNCONNECTED ;
  wire \NLW_blk00000076_DOA<28>_UNCONNECTED ;
  wire \NLW_blk00000076_DOA<27>_UNCONNECTED ;
  wire \NLW_blk00000076_DOA<26>_UNCONNECTED ;
  wire \NLW_blk00000076_DOA<25>_UNCONNECTED ;
  wire \NLW_blk00000076_DOA<24>_UNCONNECTED ;
  wire \NLW_blk00000076_DOA<23>_UNCONNECTED ;
  wire \NLW_blk00000076_DOA<22>_UNCONNECTED ;
  wire \NLW_blk00000076_DOA<21>_UNCONNECTED ;
  wire \NLW_blk00000076_DOA<20>_UNCONNECTED ;
  wire \NLW_blk00000076_DOA<19>_UNCONNECTED ;
  wire \NLW_blk00000076_DOA<18>_UNCONNECTED ;
  wire \NLW_blk00000076_DOA<17>_UNCONNECTED ;
  wire \NLW_blk00000076_DOA<16>_UNCONNECTED ;
  wire \NLW_blk00000076_DOA<15>_UNCONNECTED ;
  wire \NLW_blk00000076_DOA<14>_UNCONNECTED ;
  wire \NLW_blk00000076_DOA<13>_UNCONNECTED ;
  wire \NLW_blk00000076_DOA<12>_UNCONNECTED ;
  wire \NLW_blk00000076_DOA<11>_UNCONNECTED ;
  wire \NLW_blk00000076_DOA<10>_UNCONNECTED ;
  wire \NLW_blk00000076_DOB<31>_UNCONNECTED ;
  wire \NLW_blk00000076_DOB<30>_UNCONNECTED ;
  wire \NLW_blk00000076_DOB<29>_UNCONNECTED ;
  wire \NLW_blk00000076_DOB<28>_UNCONNECTED ;
  wire \NLW_blk00000076_DOB<27>_UNCONNECTED ;
  wire \NLW_blk00000076_DOB<26>_UNCONNECTED ;
  wire \NLW_blk00000076_DOB<25>_UNCONNECTED ;
  wire \NLW_blk00000076_DOB<24>_UNCONNECTED ;
  wire \NLW_blk00000076_DOB<23>_UNCONNECTED ;
  wire \NLW_blk00000076_DOB<22>_UNCONNECTED ;
  wire \NLW_blk00000076_DOB<21>_UNCONNECTED ;
  wire \NLW_blk00000076_DOB<20>_UNCONNECTED ;
  wire \NLW_blk00000076_DOB<19>_UNCONNECTED ;
  wire \NLW_blk00000076_DOB<18>_UNCONNECTED ;
  wire \NLW_blk00000076_DOB<17>_UNCONNECTED ;
  wire \NLW_blk00000076_DOB<16>_UNCONNECTED ;
  wire \NLW_blk00000076_DOB<15>_UNCONNECTED ;
  wire \NLW_blk00000076_DOB<14>_UNCONNECTED ;
  wire \NLW_blk00000076_DOB<13>_UNCONNECTED ;
  wire \NLW_blk00000076_DOB<12>_UNCONNECTED ;
  wire \NLW_blk00000076_DOB<11>_UNCONNECTED ;
  wire \NLW_blk00000076_DOB<10>_UNCONNECTED ;
  wire \NLW_blk00000076_DOPA<3>_UNCONNECTED ;
  wire \NLW_blk00000076_DOPA<2>_UNCONNECTED ;
  wire \NLW_blk00000076_DOPA<1>_UNCONNECTED ;
  wire \NLW_blk00000076_DOPA<0>_UNCONNECTED ;
  wire \NLW_blk00000076_DOPB<3>_UNCONNECTED ;
  wire \NLW_blk00000076_DOPB<2>_UNCONNECTED ;
  wire \NLW_blk00000076_DOPB<1>_UNCONNECTED ;
  wire \NLW_blk00000076_DOPB<0>_UNCONNECTED ;
  assign
    phase_out[15] = \U0/i_synth/i_phase_out.del/pipe_2_15 ,
    phase_out[14] = \U0/i_synth/i_phase_out.del/pipe_2_14 ,
    phase_out[13] = \U0/i_synth/i_phase_out.del/pipe_2_13 ,
    phase_out[12] = \U0/i_synth/i_phase_out.del/pipe_2_12 ,
    phase_out[11] = \U0/i_synth/i_phase_out.del/pipe_2_11 ,
    phase_out[10] = \U0/i_synth/i_phase_out.del/pipe_2_10 ,
    phase_out[9] = \U0/i_synth/i_phase_out.del/pipe_2_9 ,
    phase_out[8] = \U0/i_synth/i_phase_out.del/pipe_2_8 ,
    phase_out[7] = \U0/i_synth/i_phase_out.del/pipe_2_7 ,
    phase_out[6] = \U0/i_synth/i_phase_out.del/pipe_2_6 ,
    phase_out[5] = \U0/i_synth/i_phase_out.del/pipe_2_5 ,
    phase_out[4] = \U0/i_synth/i_phase_out.del/pipe_2_4 ,
    phase_out[3] = \U0/i_synth/i_phase_out.del/pipe_2_3 ,
    phase_out[2] = \U0/i_synth/i_phase_out.del/pipe_2_2 ,
    phase_out[1] = \U0/i_synth/i_phase_out.del/pipe_2_1 ,
    phase_out[0] = \U0/i_synth/i_phase_out.del/pipe_2_0 ;
  GND   blk00000001 (
    .G(sig00000001)
  );
  VCC   blk00000002 (
    .P(sig00000002)
  );
  FDR #(
    .INIT ( 1'b0 ))
  blk00000003 (
    .C(clk),
    .D(sig00000003),
    .R(sclr),
    .Q(sig00000023)
  );
  FDR #(
    .INIT ( 1'b0 ))
  blk00000004 (
    .C(clk),
    .D(sig0000000a),
    .R(sclr),
    .Q(sig0000002b)
  );
  FDR #(
    .INIT ( 1'b0 ))
  blk00000005 (
    .C(clk),
    .D(sig0000000b),
    .R(sclr),
    .Q(sig0000002c)
  );
  FDR #(
    .INIT ( 1'b0 ))
  blk00000006 (
    .C(clk),
    .D(sig0000000c),
    .R(sclr),
    .Q(sig0000002d)
  );
  FDR #(
    .INIT ( 1'b0 ))
  blk00000007 (
    .C(clk),
    .D(sig0000000d),
    .R(sclr),
    .Q(sig0000002e)
  );
  FDR #(
    .INIT ( 1'b0 ))
  blk00000008 (
    .C(clk),
    .D(sig0000000e),
    .R(sclr),
    .Q(sig0000002f)
  );
  FDR #(
    .INIT ( 1'b0 ))
  blk00000009 (
    .C(clk),
    .D(sig0000000f),
    .R(sclr),
    .Q(sig00000030)
  );
  FDR #(
    .INIT ( 1'b0 ))
  blk0000000a (
    .C(clk),
    .D(sig00000010),
    .R(sclr),
    .Q(sig00000031)
  );
  FDR #(
    .INIT ( 1'b0 ))
  blk0000000b (
    .C(clk),
    .D(sig00000011),
    .R(sclr),
    .Q(sig00000032)
  );
  FDR #(
    .INIT ( 1'b0 ))
  blk0000000c (
    .C(clk),
    .D(sig00000012),
    .R(sclr),
    .Q(sig00000033)
  );
  FDR #(
    .INIT ( 1'b0 ))
  blk0000000d (
    .C(clk),
    .D(sig00000004),
    .R(sclr),
    .Q(sig00000024)
  );
  FDR #(
    .INIT ( 1'b0 ))
  blk0000000e (
    .C(clk),
    .D(sig00000005),
    .R(sclr),
    .Q(sig00000025)
  );
  FDR #(
    .INIT ( 1'b0 ))
  blk0000000f (
    .C(clk),
    .D(sig00000006),
    .R(sclr),
    .Q(sig00000026)
  );
  FDR #(
    .INIT ( 1'b0 ))
  blk00000010 (
    .C(clk),
    .D(sig00000007),
    .R(sclr),
    .Q(sig00000027)
  );
  FDR #(
    .INIT ( 1'b0 ))
  blk00000011 (
    .C(clk),
    .D(sig00000008),
    .R(sclr),
    .Q(sig00000028)
  );
  FDR #(
    .INIT ( 1'b0 ))
  blk00000012 (
    .C(clk),
    .D(sig00000009),
    .R(sclr),
    .Q(sig00000029)
  );
  FDR #(
    .INIT ( 1'b0 ))
  blk00000013 (
    .C(clk),
    .D(sig0000003a),
    .R(sclr),
    .Q(sig0000002a)
  );
  FDE #(
    .INIT ( 1'b1 ))
  blk00000014 (
    .C(clk),
    .CE(we),
    .D(data[0]),
    .Q(sig00000013)
  );
  FDE #(
    .INIT ( 1'b0 ))
  blk00000015 (
    .C(clk),
    .CE(we),
    .D(data[1]),
    .Q(sig0000001a)
  );
  FDE #(
    .INIT ( 1'b0 ))
  blk00000016 (
    .C(clk),
    .CE(we),
    .D(data[2]),
    .Q(sig0000001b)
  );
  FDE #(
    .INIT ( 1'b0 ))
  blk00000017 (
    .C(clk),
    .CE(we),
    .D(data[3]),
    .Q(sig0000001c)
  );
  FDE #(
    .INIT ( 1'b0 ))
  blk00000018 (
    .C(clk),
    .CE(we),
    .D(data[4]),
    .Q(sig0000001d)
  );
  FDE #(
    .INIT ( 1'b0 ))
  blk00000019 (
    .C(clk),
    .CE(we),
    .D(data[5]),
    .Q(sig0000001e)
  );
  FDE #(
    .INIT ( 1'b1 ))
  blk0000001a (
    .C(clk),
    .CE(we),
    .D(data[6]),
    .Q(sig0000001f)
  );
  FDE #(
    .INIT ( 1'b0 ))
  blk0000001b (
    .C(clk),
    .CE(we),
    .D(data[7]),
    .Q(sig00000020)
  );
  FDE #(
    .INIT ( 1'b0 ))
  blk0000001c (
    .C(clk),
    .CE(we),
    .D(data[8]),
    .Q(sig00000021)
  );
  FDE #(
    .INIT ( 1'b0 ))
  blk0000001d (
    .C(clk),
    .CE(we),
    .D(data[9]),
    .Q(sig00000022)
  );
  FDE #(
    .INIT ( 1'b0 ))
  blk0000001e (
    .C(clk),
    .CE(we),
    .D(data[10]),
    .Q(sig00000014)
  );
  FDE #(
    .INIT ( 1'b0 ))
  blk0000001f (
    .C(clk),
    .CE(we),
    .D(data[11]),
    .Q(sig00000015)
  );
  FDE #(
    .INIT ( 1'b0 ))
  blk00000020 (
    .C(clk),
    .CE(we),
    .D(data[12]),
    .Q(sig00000016)
  );
  FDE #(
    .INIT ( 1'b0 ))
  blk00000021 (
    .C(clk),
    .CE(we),
    .D(data[13]),
    .Q(sig00000017)
  );
  FDE #(
    .INIT ( 1'b0 ))
  blk00000022 (
    .C(clk),
    .CE(we),
    .D(data[14]),
    .Q(sig00000018)
  );
  FDE #(
    .INIT ( 1'b0 ))
  blk00000023 (
    .C(clk),
    .CE(we),
    .D(data[15]),
    .Q(sig00000019)
  );
  FD #(
    .INIT ( 1'b0 ))
  blk00000024 (
    .C(clk),
    .D(sig00000023),
    .Q(sig00000056)
  );
  FD #(
    .INIT ( 1'b0 ))
  blk00000025 (
    .C(clk),
    .D(sig0000002b),
    .Q(sig0000005d)
  );
  FD #(
    .INIT ( 1'b0 ))
  blk00000026 (
    .C(clk),
    .D(sig0000002c),
    .Q(sig0000005e)
  );
  FD #(
    .INIT ( 1'b0 ))
  blk00000027 (
    .C(clk),
    .D(sig0000002d),
    .Q(sig0000005f)
  );
  FD #(
    .INIT ( 1'b0 ))
  blk00000028 (
    .C(clk),
    .D(sig0000002e),
    .Q(sig00000060)
  );
  FD #(
    .INIT ( 1'b0 ))
  blk00000029 (
    .C(clk),
    .D(sig0000002f),
    .Q(sig00000061)
  );
  FD #(
    .INIT ( 1'b0 ))
  blk0000002a (
    .C(clk),
    .D(sig00000030),
    .Q(sig00000062)
  );
  FD #(
    .INIT ( 1'b0 ))
  blk0000002b (
    .C(clk),
    .D(sig00000031),
    .Q(sig00000063)
  );
  FD #(
    .INIT ( 1'b0 ))
  blk0000002c (
    .C(clk),
    .D(sig00000032),
    .Q(sig00000064)
  );
  FD #(
    .INIT ( 1'b0 ))
  blk0000002d (
    .C(clk),
    .D(sig00000033),
    .Q(sig00000065)
  );
  FD #(
    .INIT ( 1'b0 ))
  blk0000002e (
    .C(clk),
    .D(sig00000024),
    .Q(sig00000057)
  );
  FD #(
    .INIT ( 1'b0 ))
  blk0000002f (
    .C(clk),
    .D(sig00000025),
    .Q(sig00000058)
  );
  FD #(
    .INIT ( 1'b0 ))
  blk00000030 (
    .C(clk),
    .D(sig00000026),
    .Q(sig00000059)
  );
  FD #(
    .INIT ( 1'b0 ))
  blk00000031 (
    .C(clk),
    .D(sig00000027),
    .Q(sig0000005a)
  );
  FD #(
    .INIT ( 1'b0 ))
  blk00000032 (
    .C(clk),
    .D(sig00000028),
    .Q(sig0000005b)
  );
  FD #(
    .INIT ( 1'b0 ))
  blk00000033 (
    .C(clk),
    .D(sig00000029),
    .Q(sig0000005c)
  );
  FD #(
    .INIT ( 1'b0 ))
  blk00000034 (
    .C(clk),
    .D(sig00000056),
    .Q(\U0/i_synth/i_phase_out.del/pipe_2_0 )
  );
  FD #(
    .INIT ( 1'b0 ))
  blk00000035 (
    .C(clk),
    .D(sig0000005d),
    .Q(\U0/i_synth/i_phase_out.del/pipe_2_1 )
  );
  FD #(
    .INIT ( 1'b0 ))
  blk00000036 (
    .C(clk),
    .D(sig0000005e),
    .Q(\U0/i_synth/i_phase_out.del/pipe_2_2 )
  );
  FD #(
    .INIT ( 1'b0 ))
  blk00000037 (
    .C(clk),
    .D(sig0000005f),
    .Q(\U0/i_synth/i_phase_out.del/pipe_2_3 )
  );
  FD #(
    .INIT ( 1'b0 ))
  blk00000038 (
    .C(clk),
    .D(sig00000060),
    .Q(\U0/i_synth/i_phase_out.del/pipe_2_4 )
  );
  FD #(
    .INIT ( 1'b0 ))
  blk00000039 (
    .C(clk),
    .D(sig00000061),
    .Q(\U0/i_synth/i_phase_out.del/pipe_2_5 )
  );
  FD #(
    .INIT ( 1'b0 ))
  blk0000003a (
    .C(clk),
    .D(sig00000062),
    .Q(\U0/i_synth/i_phase_out.del/pipe_2_6 )
  );
  FD #(
    .INIT ( 1'b0 ))
  blk0000003b (
    .C(clk),
    .D(sig00000063),
    .Q(\U0/i_synth/i_phase_out.del/pipe_2_7 )
  );
  FD #(
    .INIT ( 1'b0 ))
  blk0000003c (
    .C(clk),
    .D(sig00000064),
    .Q(\U0/i_synth/i_phase_out.del/pipe_2_8 )
  );
  FD #(
    .INIT ( 1'b0 ))
  blk0000003d (
    .C(clk),
    .D(sig00000065),
    .Q(\U0/i_synth/i_phase_out.del/pipe_2_9 )
  );
  FD #(
    .INIT ( 1'b0 ))
  blk0000003e (
    .C(clk),
    .D(sig00000057),
    .Q(\U0/i_synth/i_phase_out.del/pipe_2_10 )
  );
  FD #(
    .INIT ( 1'b0 ))
  blk0000003f (
    .C(clk),
    .D(sig00000058),
    .Q(\U0/i_synth/i_phase_out.del/pipe_2_11 )
  );
  FD #(
    .INIT ( 1'b0 ))
  blk00000040 (
    .C(clk),
    .D(sig00000059),
    .Q(\U0/i_synth/i_phase_out.del/pipe_2_12 )
  );
  FD #(
    .INIT ( 1'b0 ))
  blk00000041 (
    .C(clk),
    .D(sig0000005a),
    .Q(\U0/i_synth/i_phase_out.del/pipe_2_13 )
  );
  FD #(
    .INIT ( 1'b0 ))
  blk00000042 (
    .C(clk),
    .D(sig0000005b),
    .Q(\U0/i_synth/i_phase_out.del/pipe_2_14 )
  );
  FD #(
    .INIT ( 1'b0 ))
  blk00000043 (
    .C(clk),
    .D(sig0000005c),
    .Q(\U0/i_synth/i_phase_out.del/pipe_2_15 )
  );
  XORCY   blk00000044 (
    .CI(sig00000039),
    .LI(sig0000004a),
    .O(sig00000009)
  );
  MUXCY   blk00000045 (
    .CI(sig00000039),
    .DI(sig00000029),
    .S(sig0000004a),
    .O(sig0000003a)
  );
  LUT2 #(
    .INIT ( 4'h6 ))
  blk00000046 (
    .I0(sig00000029),
    .I1(sig00000019),
    .O(sig0000004a)
  );
  XORCY   blk00000047 (
    .CI(sig00000038),
    .LI(sig00000049),
    .O(sig00000008)
  );
  MUXCY   blk00000048 (
    .CI(sig00000038),
    .DI(sig00000028),
    .S(sig00000049),
    .O(sig00000039)
  );
  LUT2 #(
    .INIT ( 4'h6 ))
  blk00000049 (
    .I0(sig00000028),
    .I1(sig00000018),
    .O(sig00000049)
  );
  XORCY   blk0000004a (
    .CI(sig00000037),
    .LI(sig00000048),
    .O(sig00000007)
  );
  MUXCY   blk0000004b (
    .CI(sig00000037),
    .DI(sig00000027),
    .S(sig00000048),
    .O(sig00000038)
  );
  LUT2 #(
    .INIT ( 4'h6 ))
  blk0000004c (
    .I0(sig00000027),
    .I1(sig00000017),
    .O(sig00000048)
  );
  XORCY   blk0000004d (
    .CI(sig00000036),
    .LI(sig00000047),
    .O(sig00000006)
  );
  MUXCY   blk0000004e (
    .CI(sig00000036),
    .DI(sig00000026),
    .S(sig00000047),
    .O(sig00000037)
  );
  LUT2 #(
    .INIT ( 4'h6 ))
  blk0000004f (
    .I0(sig00000026),
    .I1(sig00000016),
    .O(sig00000047)
  );
  XORCY   blk00000050 (
    .CI(sig00000035),
    .LI(sig00000046),
    .O(sig00000005)
  );
  MUXCY   blk00000051 (
    .CI(sig00000035),
    .DI(sig00000025),
    .S(sig00000046),
    .O(sig00000036)
  );
  LUT2 #(
    .INIT ( 4'h6 ))
  blk00000052 (
    .I0(sig00000025),
    .I1(sig00000015),
    .O(sig00000046)
  );
  XORCY   blk00000053 (
    .CI(sig00000043),
    .LI(sig00000045),
    .O(sig00000004)
  );
  MUXCY   blk00000054 (
    .CI(sig00000043),
    .DI(sig00000024),
    .S(sig00000045),
    .O(sig00000035)
  );
  LUT2 #(
    .INIT ( 4'h6 ))
  blk00000055 (
    .I0(sig00000024),
    .I1(sig00000014),
    .O(sig00000045)
  );
  XORCY   blk00000056 (
    .CI(sig00000042),
    .LI(sig00000053),
    .O(sig00000012)
  );
  MUXCY   blk00000057 (
    .CI(sig00000042),
    .DI(sig00000033),
    .S(sig00000053),
    .O(sig00000043)
  );
  LUT2 #(
    .INIT ( 4'h6 ))
  blk00000058 (
    .I0(sig00000033),
    .I1(sig00000022),
    .O(sig00000053)
  );
  XORCY   blk00000059 (
    .CI(sig00000041),
    .LI(sig00000052),
    .O(sig00000011)
  );
  MUXCY   blk0000005a (
    .CI(sig00000041),
    .DI(sig00000032),
    .S(sig00000052),
    .O(sig00000042)
  );
  LUT2 #(
    .INIT ( 4'h6 ))
  blk0000005b (
    .I0(sig00000032),
    .I1(sig00000021),
    .O(sig00000052)
  );
  XORCY   blk0000005c (
    .CI(sig00000040),
    .LI(sig00000051),
    .O(sig00000010)
  );
  MUXCY   blk0000005d (
    .CI(sig00000040),
    .DI(sig00000031),
    .S(sig00000051),
    .O(sig00000041)
  );
  LUT2 #(
    .INIT ( 4'h6 ))
  blk0000005e (
    .I0(sig00000031),
    .I1(sig00000020),
    .O(sig00000051)
  );
  XORCY   blk0000005f (
    .CI(sig0000003f),
    .LI(sig00000050),
    .O(sig0000000f)
  );
  MUXCY   blk00000060 (
    .CI(sig0000003f),
    .DI(sig00000030),
    .S(sig00000050),
    .O(sig00000040)
  );
  LUT2 #(
    .INIT ( 4'h6 ))
  blk00000061 (
    .I0(sig00000030),
    .I1(sig0000001f),
    .O(sig00000050)
  );
  XORCY   blk00000062 (
    .CI(sig0000003e),
    .LI(sig0000004f),
    .O(sig0000000e)
  );
  MUXCY   blk00000063 (
    .CI(sig0000003e),
    .DI(sig0000002f),
    .S(sig0000004f),
    .O(sig0000003f)
  );
  LUT2 #(
    .INIT ( 4'h6 ))
  blk00000064 (
    .I0(sig0000002f),
    .I1(sig0000001e),
    .O(sig0000004f)
  );
  XORCY   blk00000065 (
    .CI(sig0000003d),
    .LI(sig0000004e),
    .O(sig0000000d)
  );
  MUXCY   blk00000066 (
    .CI(sig0000003d),
    .DI(sig0000002e),
    .S(sig0000004e),
    .O(sig0000003e)
  );
  LUT2 #(
    .INIT ( 4'h6 ))
  blk00000067 (
    .I0(sig0000002e),
    .I1(sig0000001d),
    .O(sig0000004e)
  );
  XORCY   blk00000068 (
    .CI(sig0000003c),
    .LI(sig0000004d),
    .O(sig0000000c)
  );
  MUXCY   blk00000069 (
    .CI(sig0000003c),
    .DI(sig0000002d),
    .S(sig0000004d),
    .O(sig0000003d)
  );
  LUT2 #(
    .INIT ( 4'h6 ))
  blk0000006a (
    .I0(sig0000002d),
    .I1(sig0000001c),
    .O(sig0000004d)
  );
  XORCY   blk0000006b (
    .CI(sig0000003b),
    .LI(sig0000004c),
    .O(sig0000000b)
  );
  MUXCY   blk0000006c (
    .CI(sig0000003b),
    .DI(sig0000002c),
    .S(sig0000004c),
    .O(sig0000003c)
  );
  LUT2 #(
    .INIT ( 4'h6 ))
  blk0000006d (
    .I0(sig0000002c),
    .I1(sig0000001b),
    .O(sig0000004c)
  );
  XORCY   blk0000006e (
    .CI(sig00000034),
    .LI(sig0000004b),
    .O(sig0000000a)
  );
  MUXCY   blk0000006f (
    .CI(sig00000034),
    .DI(sig0000002b),
    .S(sig0000004b),
    .O(sig0000003b)
  );
  LUT2 #(
    .INIT ( 4'h6 ))
  blk00000070 (
    .I0(sig0000002b),
    .I1(sig0000001a),
    .O(sig0000004b)
  );
  XORCY   blk00000071 (
    .CI(sig00000001),
    .LI(sig00000044),
    .O(sig00000003)
  );
  MUXCY   blk00000072 (
    .CI(sig00000001),
    .DI(sig00000023),
    .S(sig00000044),
    .O(sig00000034)
  );
  LUT2 #(
    .INIT ( 4'h6 ))
  blk00000073 (
    .I0(sig00000023),
    .I1(sig00000013),
    .O(sig00000044)
  );
  LUT2 #(
    .INIT ( 4'h6 ))
  blk00000074 (
    .I0(sig00000029),
    .I1(sig00000028),
    .O(sig00000055)
  );
  INV   blk00000075 (
    .I(sig00000028),
    .O(sig00000054)
  );
  RAMB16 #(
    .INIT_FILE ( "NONE" ),
    .SRVAL_A ( 36'h000000000 ),
    .INIT_00 ( 256'h0030002D002A002700240021001E001B001700140011000E000B000800050002 ),
    .INIT_01 ( 256'h0062005F005C005900560053004F004C0049004600430040003D003A00370034 ),
    .INIT_02 ( 256'h00930090008D008A008700830080007D007A007700740071006E006B00680065 ),
    .INIT_03 ( 256'h00C200BF00BC00B900B600B300B000AD00AA00A700A400A1009E009C00990096 ),
    .INIT_04 ( 256'h00EF00EC00E900E700E400E100DE00DB00D900D600D300D000CD00CA00C700C5 ),
    .INIT_05 ( 256'h011A0117011501120110010D010A01080105010200FF00FD00FA00F700F500F2 ),
    .INIT_06 ( 256'h01420140013D013B0139013601340131012F012C0129012701240122011F011D ),
    .INIT_07 ( 256'h0168016501630161015F015C015A0158015501530151014E014C014A01470145 ),
    .INIT_08 ( 256'h01890187018501830181017F017D017B01790177017501720170016E016C016A ),
    .INIT_09 ( 256'h01A701A501A401A201A0019E019C019B01990197019501930191018F018D018B ),
    .INIT_0A ( 256'h01C101C001BE01BD01BB01B901B801B601B501B301B101B001AE01AC01AB01A9 ),
    .INIT_0B ( 256'h01D701D501D401D301D201D001CF01CE01CC01CB01CA01C801C701C501C401C3 ),
    .INIT_0C ( 256'h01E801E701E601E501E401E301E201E101E001DF01DD01DC01DB01DA01D901D8 ),
    .INIT_0D ( 256'h01F401F301F301F201F101F101F001EF01EE01EE01ED01EC01EB01EA01E901E8 ),
    .INIT_0E ( 256'h01FB01FB01FB01FA01FA01FA01F901F901F801F801F701F701F601F601F501F5 ),
    .INIT_0F ( 256'h01FE01FE01FE01FE01FE01FE01FE01FD01FD01FD01FD01FD01FD01FC01FC01FC ),
    .INIT_10 ( 256'h01FC01FC01FC01FD01FD01FD01FD01FD01FD01FE01FE01FE01FE01FE01FE01FE ),
    .INIT_11 ( 256'h01F501F501F601F601F701F701F801F801F901F901FA01FA01FA01FB01FB01FB ),
    .INIT_12 ( 256'h01E801E901EA01EB01EC01ED01EE01EE01EF01F001F101F101F201F301F301F4 ),
    .INIT_13 ( 256'h01D801D901DA01DB01DC01DD01DF01E001E101E201E301E401E501E601E701E8 ),
    .INIT_14 ( 256'h01C301C401C501C701C801CA01CB01CC01CE01CF01D001D201D301D401D501D7 ),
    .INIT_15 ( 256'h01A901AB01AC01AE01B001B101B301B501B601B801B901BB01BD01BE01C001C1 ),
    .INIT_16 ( 256'h018B018D018F01910193019501970199019B019C019E01A001A201A401A501A7 ),
    .INIT_17 ( 256'h016A016C016E01700172017501770179017B017D017F01810183018501870189 ),
    .INIT_18 ( 256'h01450147014A014C014E0151015301550158015A015C015F0161016301650168 ),
    .INIT_19 ( 256'h011D011F0122012401270129012C012F0131013401360139013B013D01400142 ),
    .INIT_1A ( 256'h00F200F500F700FA00FD00FF010201050108010A010D0110011201150117011A ),
    .INIT_1B ( 256'h00C500C700CA00CD00D000D300D600D900DB00DE00E100E400E700E900EC00EF ),
    .INIT_1C ( 256'h00960099009C009E00A100A400A700AA00AD00B000B300B600B900BC00BF00C2 ),
    .INIT_1D ( 256'h00650068006B006E007100740077007A007D008000830087008A008D00900093 ),
    .INIT_1E ( 256'h00340037003A003D0040004300460049004C004F005300560059005C005F0062 ),
    .INIT_1F ( 256'h000200050008000B000E001100140017001B001E002100240027002A002D0030 ),
    .INIT_20 ( 256'h03D003D303D603D903DC03DF03E203E503E903EC03EF03F203F503F803FB03FE ),
    .INIT_21 ( 256'h039E03A103A403A703AA03AD03B103B403B703BA03BD03C003C303C603C903CC ),
    .INIT_22 ( 256'h036D0370037303760379037D0380038303860389038C038F039203950398039B ),
    .INIT_23 ( 256'h033E034103440347034A034D0350035303560359035C035F036203640367036A ),
    .INIT_24 ( 256'h0311031403170319031C031F032203250327032A032D0330033303360339033B ),
    .INIT_25 ( 256'h02E602E902EB02EE02F002F302F602F802FB02FE0301030303060309030B030E ),
    .INIT_26 ( 256'h02BE02C002C302C502C702CA02CC02CF02D102D402D702D902DC02DE02E102E3 ),
    .INIT_27 ( 256'h0298029B029D029F02A102A402A602A802AB02AD02AF02B202B402B602B902BB ),
    .INIT_28 ( 256'h02770279027B027D027F02810283028502870289028B028E0290029202940296 ),
    .INIT_29 ( 256'h0259025B025C025E026002620264026502670269026B026D026F027102730275 ),
    .INIT_2A ( 256'h023F024002420243024502470248024A024B024D024F02500252025402550257 ),
    .INIT_2B ( 256'h0229022B022C022D022E02300231023202340235023602380239023B023C023D ),
    .INIT_2C ( 256'h02180219021A021B021C021D021E021F02200221022302240225022602270228 ),
    .INIT_2D ( 256'h020C020D020D020E020F020F0210021102120212021302140215021602170218 ),
    .INIT_2E ( 256'h020502050205020602060206020702070208020802090209020A020A020B020B ),
    .INIT_2F ( 256'h0202020202020202020202020202020302030203020302030203020402040204 ),
    .INIT_30 ( 256'h0204020402040203020302030203020302030202020202020202020202020202 ),
    .INIT_31 ( 256'h020B020B020A020A020902090208020802070207020602060206020502050205 ),
    .INIT_32 ( 256'h0218021702160215021402130212021202110210020F020F020E020D020D020C ),
    .INIT_33 ( 256'h02280227022602250224022302210220021F021E021D021C021B021A02190218 ),
    .INIT_34 ( 256'h023D023C023B02390238023602350234023202310230022E022D022C022B0229 ),
    .INIT_35 ( 256'h02570255025402520250024F024D024B024A024802470245024302420240023F ),
    .INIT_36 ( 256'h027502730271026F026D026B026902670265026402620260025E025C025B0259 ),
    .INIT_37 ( 256'h0296029402920290028E028B02890287028502830281027F027D027B02790277 ),
    .INIT_38 ( 256'h02BB02B902B602B402B202AF02AD02AB02A802A602A402A1029F029D029B0298 ),
    .INIT_39 ( 256'h02E302E102DE02DC02D902D702D402D102CF02CC02CA02C702C502C302C002BE ),
    .INIT_3A ( 256'h030E030B030903060303030102FE02FB02F802F602F302F002EE02EB02E902E6 ),
    .INIT_3B ( 256'h033B0339033603330330032D032A032703250322031F031C0319031703140311 ),
    .INIT_3C ( 256'h036A036703640362035F035C0359035603530350034D034A034703440341033E ),
    .INIT_3D ( 256'h039B039803950392038F038C0389038603830380037D0379037603730370036D ),
    .INIT_3E ( 256'h03CC03C903C603C303C003BD03BA03B703B403B103AD03AA03A703A403A1039E ),
    .INIT_3F ( 256'h03FE03FB03F803F503F203EF03EC03E903E503E203DF03DC03D903D603D303D0 ),
    .WRITE_MODE_A ( "READ_FIRST" ),
    .WRITE_MODE_B ( "WRITE_FIRST" ),
    .DOA_REG ( 1 ),
    .DOB_REG ( 1 ),
    .READ_WIDTH_A ( 18 ),
    .READ_WIDTH_B ( 18 ),
    .WRITE_WIDTH_A ( 18 ),
    .WRITE_WIDTH_B ( 0 ),
    .INIT_A ( 36'h000000000 ),
    .INIT_B ( 36'h000000000 ),
    .INITP_00 ( 256'h0000000000000000000000000000000000000000000000000000000000000000 ),
    .INITP_01 ( 256'h0000000000000000000000000000000000000000000000000000000000000000 ),
    .INITP_02 ( 256'h0000000000000000000000000000000000000000000000000000000000000000 ),
    .INITP_03 ( 256'h0000000000000000000000000000000000000000000000000000000000000000 ),
    .INITP_04 ( 256'h0000000000000000000000000000000000000000000000000000000000000000 ),
    .INITP_05 ( 256'h0000000000000000000000000000000000000000000000000000000000000000 ),
    .INVERT_CLK_DOA_REG ( "FALSE" ),
    .INVERT_CLK_DOB_REG ( "FALSE" ),
    .RAM_EXTENSION_A ( "NONE" ),
    .RAM_EXTENSION_B ( "NONE" ),
    .INITP_06 ( 256'h0000000000000000000000000000000000000000000000000000000000000000 ),
    .INITP_07 ( 256'h0000000000000000000000000000000000000000000000000000000000000000 ),
    .SRVAL_B ( 36'h000000000 ))
  blk00000076 (
    .CASCADEINA(NLW_blk00000076_CASCADEINA_UNCONNECTED),
    .CASCADEINB(NLW_blk00000076_CASCADEINB_UNCONNECTED),
    .CLKA(clk),
    .CLKB(clk),
    .ENA(sig00000002),
    .REGCEA(sig00000002),
    .REGCEB(sig00000002),
    .ENB(sig00000002),
    .SSRA(sig00000001),
    .SSRB(sig00000001),
    .CASCADEOUTA(NLW_blk00000076_CASCADEOUTA_UNCONNECTED),
    .CASCADEOUTB(NLW_blk00000076_CASCADEOUTB_UNCONNECTED),
    .ADDRA({sig00000001, sig00000029, sig00000028, sig00000027, sig00000026, sig00000025, sig00000024, sig00000033, sig00000032, sig00000031, 
sig00000030, \NLW_blk00000076_ADDRA<3>_UNCONNECTED , \NLW_blk00000076_ADDRA<2>_UNCONNECTED , \NLW_blk00000076_ADDRA<1>_UNCONNECTED , 
\NLW_blk00000076_ADDRA<0>_UNCONNECTED }),
    .ADDRB({sig00000001, sig00000055, sig00000054, sig00000027, sig00000026, sig00000025, sig00000024, sig00000033, sig00000032, sig00000031, 
sig00000030, \NLW_blk00000076_ADDRB<3>_UNCONNECTED , \NLW_blk00000076_ADDRB<2>_UNCONNECTED , \NLW_blk00000076_ADDRB<1>_UNCONNECTED , 
\NLW_blk00000076_ADDRB<0>_UNCONNECTED }),
    .DIA({\NLW_blk00000076_DIA<31>_UNCONNECTED , \NLW_blk00000076_DIA<30>_UNCONNECTED , \NLW_blk00000076_DIA<29>_UNCONNECTED , 
\NLW_blk00000076_DIA<28>_UNCONNECTED , \NLW_blk00000076_DIA<27>_UNCONNECTED , \NLW_blk00000076_DIA<26>_UNCONNECTED , 
\NLW_blk00000076_DIA<25>_UNCONNECTED , \NLW_blk00000076_DIA<24>_UNCONNECTED , \NLW_blk00000076_DIA<23>_UNCONNECTED , 
\NLW_blk00000076_DIA<22>_UNCONNECTED , \NLW_blk00000076_DIA<21>_UNCONNECTED , \NLW_blk00000076_DIA<20>_UNCONNECTED , 
\NLW_blk00000076_DIA<19>_UNCONNECTED , \NLW_blk00000076_DIA<18>_UNCONNECTED , \NLW_blk00000076_DIA<17>_UNCONNECTED , 
\NLW_blk00000076_DIA<16>_UNCONNECTED , sig00000001, sig00000001, sig00000001, sig00000001, sig00000001, sig00000001, sig00000001, sig00000001, 
sig00000001, sig00000001, sig00000001, sig00000001, sig00000001, sig00000001, sig00000001, sig00000001}),
    .DIB({\NLW_blk00000076_DIB<31>_UNCONNECTED , \NLW_blk00000076_DIB<30>_UNCONNECTED , \NLW_blk00000076_DIB<29>_UNCONNECTED , 
\NLW_blk00000076_DIB<28>_UNCONNECTED , \NLW_blk00000076_DIB<27>_UNCONNECTED , \NLW_blk00000076_DIB<26>_UNCONNECTED , 
\NLW_blk00000076_DIB<25>_UNCONNECTED , \NLW_blk00000076_DIB<24>_UNCONNECTED , \NLW_blk00000076_DIB<23>_UNCONNECTED , 
\NLW_blk00000076_DIB<22>_UNCONNECTED , \NLW_blk00000076_DIB<21>_UNCONNECTED , \NLW_blk00000076_DIB<20>_UNCONNECTED , 
\NLW_blk00000076_DIB<19>_UNCONNECTED , \NLW_blk00000076_DIB<18>_UNCONNECTED , \NLW_blk00000076_DIB<17>_UNCONNECTED , 
\NLW_blk00000076_DIB<16>_UNCONNECTED , \NLW_blk00000076_DIB<15>_UNCONNECTED , \NLW_blk00000076_DIB<14>_UNCONNECTED , 
\NLW_blk00000076_DIB<13>_UNCONNECTED , \NLW_blk00000076_DIB<12>_UNCONNECTED , \NLW_blk00000076_DIB<11>_UNCONNECTED , 
\NLW_blk00000076_DIB<10>_UNCONNECTED , \NLW_blk00000076_DIB<9>_UNCONNECTED , \NLW_blk00000076_DIB<8>_UNCONNECTED , 
\NLW_blk00000076_DIB<7>_UNCONNECTED , \NLW_blk00000076_DIB<6>_UNCONNECTED , \NLW_blk00000076_DIB<5>_UNCONNECTED , \NLW_blk00000076_DIB<4>_UNCONNECTED 
, \NLW_blk00000076_DIB<3>_UNCONNECTED , \NLW_blk00000076_DIB<2>_UNCONNECTED , \NLW_blk00000076_DIB<1>_UNCONNECTED , 
\NLW_blk00000076_DIB<0>_UNCONNECTED }),
    .DIPA({\NLW_blk00000076_DIPA<3>_UNCONNECTED , \NLW_blk00000076_DIPA<2>_UNCONNECTED , sig00000001, sig00000001}),
    .DIPB({\NLW_blk00000076_DIPB<3>_UNCONNECTED , \NLW_blk00000076_DIPB<2>_UNCONNECTED , \NLW_blk00000076_DIPB<1>_UNCONNECTED , 
\NLW_blk00000076_DIPB<0>_UNCONNECTED }),
    .WEA({sig00000001, sig00000001, sig00000001, sig00000001}),
    .WEB({sig00000001, sig00000001, sig00000001, sig00000001}),
    .DOA({\NLW_blk00000076_DOA<31>_UNCONNECTED , \NLW_blk00000076_DOA<30>_UNCONNECTED , \NLW_blk00000076_DOA<29>_UNCONNECTED , 
\NLW_blk00000076_DOA<28>_UNCONNECTED , \NLW_blk00000076_DOA<27>_UNCONNECTED , \NLW_blk00000076_DOA<26>_UNCONNECTED , 
\NLW_blk00000076_DOA<25>_UNCONNECTED , \NLW_blk00000076_DOA<24>_UNCONNECTED , \NLW_blk00000076_DOA<23>_UNCONNECTED , 
\NLW_blk00000076_DOA<22>_UNCONNECTED , \NLW_blk00000076_DOA<21>_UNCONNECTED , \NLW_blk00000076_DOA<20>_UNCONNECTED , 
\NLW_blk00000076_DOA<19>_UNCONNECTED , \NLW_blk00000076_DOA<18>_UNCONNECTED , \NLW_blk00000076_DOA<17>_UNCONNECTED , 
\NLW_blk00000076_DOA<16>_UNCONNECTED , \NLW_blk00000076_DOA<15>_UNCONNECTED , \NLW_blk00000076_DOA<14>_UNCONNECTED , 
\NLW_blk00000076_DOA<13>_UNCONNECTED , \NLW_blk00000076_DOA<12>_UNCONNECTED , \NLW_blk00000076_DOA<11>_UNCONNECTED , 
\NLW_blk00000076_DOA<10>_UNCONNECTED , sine[9], sine[8], sine[7], sine[6], sine[5], sine[4], sine[3], sine[2], sine[1], sine[0]}),
    .DOB({\NLW_blk00000076_DOB<31>_UNCONNECTED , \NLW_blk00000076_DOB<30>_UNCONNECTED , \NLW_blk00000076_DOB<29>_UNCONNECTED , 
\NLW_blk00000076_DOB<28>_UNCONNECTED , \NLW_blk00000076_DOB<27>_UNCONNECTED , \NLW_blk00000076_DOB<26>_UNCONNECTED , 
\NLW_blk00000076_DOB<25>_UNCONNECTED , \NLW_blk00000076_DOB<24>_UNCONNECTED , \NLW_blk00000076_DOB<23>_UNCONNECTED , 
\NLW_blk00000076_DOB<22>_UNCONNECTED , \NLW_blk00000076_DOB<21>_UNCONNECTED , \NLW_blk00000076_DOB<20>_UNCONNECTED , 
\NLW_blk00000076_DOB<19>_UNCONNECTED , \NLW_blk00000076_DOB<18>_UNCONNECTED , \NLW_blk00000076_DOB<17>_UNCONNECTED , 
\NLW_blk00000076_DOB<16>_UNCONNECTED , \NLW_blk00000076_DOB<15>_UNCONNECTED , \NLW_blk00000076_DOB<14>_UNCONNECTED , 
\NLW_blk00000076_DOB<13>_UNCONNECTED , \NLW_blk00000076_DOB<12>_UNCONNECTED , \NLW_blk00000076_DOB<11>_UNCONNECTED , 
\NLW_blk00000076_DOB<10>_UNCONNECTED , cosine[9], cosine[8], cosine[7], cosine[6], cosine[5], cosine[4], cosine[3], cosine[2], cosine[1], cosine[0]}),
    .DOPA({\NLW_blk00000076_DOPA<3>_UNCONNECTED , \NLW_blk00000076_DOPA<2>_UNCONNECTED , \NLW_blk00000076_DOPA<1>_UNCONNECTED , 
\NLW_blk00000076_DOPA<0>_UNCONNECTED }),
    .DOPB({\NLW_blk00000076_DOPB<3>_UNCONNECTED , \NLW_blk00000076_DOPB<2>_UNCONNECTED , \NLW_blk00000076_DOPB<1>_UNCONNECTED , 
\NLW_blk00000076_DOPB<0>_UNCONNECTED })
  );

// synthesis translate_on

endmodule

// synthesis translate_off

`ifndef GLBL
`define GLBL

`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;

    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (weak1, weak0) GSR = GSR_int;
    assign (weak1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule

`endif

// synthesis translate_on
