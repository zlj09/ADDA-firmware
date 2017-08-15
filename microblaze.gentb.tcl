if { [ catch { xload xmp F:/Programs/Verilog/FPGA_Group/test_br0101/microblaze/microblaze.xmp } result ] } {
  exit 10
}
set simulator_bak [xget simulator]
set sim_model_bak [xget sim_model]
set gen_sim_tb_bak [xget gen_sim_tb]
set hdl_bak [xget hdl]
xset simulator isim
xset sim_model behavioral
xset gen_sim_tb true
xset hdl verilog
if { [catch {run testbenchgen -tm testbench -od F:/Programs/Verilog/FPGA_Group/test_br0101  F:/Programs/Verilog/FPGA_Group/test_br0101/microblaze/microblaze.mhs} result ] } {
   exit -1
}
xset simulator $simulator_bak
xset sim_model $sim_model_bak
xset gen_sim_tb $gen_sim_tb_bak
xset hdl $hdl_bak
exit 0
