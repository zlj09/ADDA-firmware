proc pnsimmodel {} {
  if { [ catch { xload xmp F:/Programs/Verilog/FPGA_Group/test_br0101/microblaze/microblaze.xmp } result ] } {
    exit 10
  }
  set simulator_bak [xget simulator]
  set sim_model_bak [xget sim_model]
  set sim_x_lib_bak [xget sim_x_lib]
  set xps_hdl_bak   [xget hdl]
  set xps_gen_sim_tb_bak [xget gen_sim_tb]
  xset gen_sim_tb true
  xset simulator isim
  xset sim_model behavioral
  xset hdl       verilog
  xset sim_x_lib
  if { [catch {run simmodel} result] } {
    return -1
  }
  xset simulator $simulator_bak
  xset sim_model $sim_model_bak
  xset sim_x_lib $sim_x_lib_bak
  xset hdl       $xps_hdl_bak
  xset gen_sim_tb $xps_gen_sim_tb_bak
  return $result
}
if { [catch {pnsimmodel} result] } {
  exit -1
}
exit $result
