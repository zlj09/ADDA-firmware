proc pnsynth {} {
  cd F:/Programs/Verilog/FPGA_Group/test_br0101/microblaze
  if { [ catch { xload xmp microblaze.xmp } result ] } {
    exit 10
  }
  if { [catch {run netlist} result] } {
    return -1
  }
  return $result
}
if { [catch {pnsynth} result] } {
  exit -1
}
exit $result
