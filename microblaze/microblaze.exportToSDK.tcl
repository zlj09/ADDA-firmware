proc exportToSDK {} {
  cd F:/Programs/Verilog/FPGA_Group/test_br0101/microblaze
  if { [ catch { xload xmp microblaze.xmp } result ] } {
    exit 10
  }
  if { [run exporttosdk] != 0 } {
    return -1
  }
  return 0
}

if { [catch {exportToSDK} result] } {
  exit -1
}

exit $result
