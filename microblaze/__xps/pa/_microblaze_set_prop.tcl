cd F:/Programs/Verilog/FPGA_Group/test_br0101/microblaze
if { [ catch {xload xmp microblaze.xmp} result ] } {
  exit -1
}
exit [xget external_mem_sim]
