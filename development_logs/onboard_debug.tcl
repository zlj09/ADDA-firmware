Xilinx Microprocessor Debugger (XMD) Engine
Xilinx EDK 14.7 Build EDK_P.20131013
Copyright (c) 1995-2012 Xilinx, Inc.  All rights reserved.

XMD% 
XMD% 
Accepted a new TCLSock connection from 127.0.0.1 on port 1216
Programming Bitstream -- H:/ljzhu/test_br0101/workspace/microblaze_hw_platform/download.bit
Fpga Programming Progress ...Done
Programming Bitstream -- H:/ljzhu/test_br0101/workspace/microblaze_hw_platform/download.bit
Fpga Programming Progress ...Done
Programming Bitstream -- H:/ljzhu/test_br0101/workspace/microblaze_hw_platform/download.bit
Fpga Programming Progress ...Done
Programming Bitstream -- H:/ljzhu/test_br0101/workspace/microblaze_hw_platform/download.bit
Fpga Programming Progress ...Done
Programming Bitstream -- H:/ljzhu/test_br0101/workspace/microblaze_hw_platform/download.bit
Fpga Programming Progress ...Done
Programming Bitstream -- H:/ljzhu/test_br0101/workspace/microblaze_hw_platform/download.bit
Fpga Programming Progress ...Done
Programming Bitstream -- H:/ljzhu/test_br0101/workspace/microblaze_hw_platform/download.bit
Fpga Programming Progress ...Done
Programming Bitstream -- H:/ljzhu/test_br0101/workspace/microblaze_hw_platform/download.bit
Fpga Programming Progress ...Done
Programming Bitstream -- H:/ljzhu/test_br0101/workspace/microblaze_hw_platform/download.bit
Fpga Programming Progress ...Done
Programming Bitstream -- H:/ljzhu/test_br0101/workspace/microblaze_hw_platform/download.bit
Fpga Programming Progress ...Done
stop
Error: Invalid xmd target: -1
Use "targets" command to get current list of targets or change target
Use "connect mb" command to connect to a MicroBlaze target
Use "connect ppc" command to connect to a PowerPC target
Use "connect arm" command to connect to a ARM Cortex A9 target
XMD% connnect mb
invalid command name "connnect"
XMD% connect mb
Usage:  connect <Target> <Target Type> [options]
	     Target: mb|ppc|mdm
	     Target Type: 
	     mb (MicroBlaze Target): 
	     sim  : [-memsize <Memory Address Bus Length>]
	     [Debug Device Options]
	     mdm  : [Jtag Options] [Debug Device Options] 
	     [FSL Connection Options]
	     ppc (PowerPC405/440 Target): 
	     hw   : [Jtag Options] [Debug Device Options]
	     sim  : [-icf <Configuration File>] [-ipcport IP:port]
	     mdm (Microprocessor Debug Module Target): 
	     -uart 

	     Serial Options: 
	     [-port <serial port>]
	     [-baud <baud rate>] 
	     [-timeout <serial port timeout in secs>]

	     Jtag Options: 
	     [-cable type <xilinx_parallel |xilinx_parallel3 
			   |xilinx_platformusb |xilinx_svffile> 
	      port <lpt1 | lpt2 | USB2>
	      frequency <Cable Frequency>
	      fname <SVF file>]
	     [-cable type <xilinx_tcf> esn <cable_esn> url <URL of the Xilinx hw_server>]
	     [-cable type <digilent_plugin> esn <cable_esn>]
	      Cable ESN can be obtained by running \"xrcableesn -cable type <cable_type>\"
	     [-cable type <xilinx_plugin> modulename <Name of Plug-in>
	      [modulearg <Arguments to Plug-in>]*]
	     [-configdevice \{devicenr <jtag chain device no> 
	      idcode <device idcode> irlength <instr. addr length> 
	      partname <name\}] 

	     For PPC440, specify <device idcode>. This can be
	     obtained from iMPACT or the Device BSDL files

	     Debug Device Options: 
	     [-debugdevice {deviceNr <jtag chain no> cpunr <Processor num>
	                    proctype <Processor type>}]

	     FSL Connection Options:  
	     [-pfsl port <Processor FSL port> type <s|m|ms>] 
XMD% connect mb mdm

JTAG chain configuration
--------------------------------------------------
Device   ID Code        IR Length    Part Name
 1       420b0093          10        XC4VSX55

MicroBlaze Processor Configuration :
-------------------------------------
Version............................8.50c
Optimization.......................Performance
Interconnect.......................PLB_v46
MMU Type...........................No_MMU
No of PC Breakpoints...............1
No of Read Addr/Data Watchpoints...0
No of Write Addr/Data Watchpoints..0
Instruction Cache Support..........off
Data Cache Support.................off
Exceptions  Support................off
FPU  Support.......................off
Hard Divider Support...............off
Hard Multiplier Support............on - (Mul32)
Barrel Shifter Support.............on
MSR clr/set Instruction Support....on
Compare Instruction Support........on
Data Cache Write-back Support......off
Fault Tolerance Support............off
Stack Protection Support...........off

Connected to "mb" target. id = 0
Starting GDB server for "mb" target (id = 0) at TCP port no 1234
XMD% stop
Processor stopped

XMD% rmd 0xC9C20000
invalid command name "rmd"
XMD% mrd 0xc9c20000
C9C20000:   00000331

XMD% 