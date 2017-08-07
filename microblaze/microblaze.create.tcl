cd F:/Programs/Verilog/FPGA_Group/test_br0101/microblaze
if { [xload new microblaze.xmp] != 0 } {
  exit -1
}
xset arch virtex4
xset dev xc4vsx55
xset package ff1148
xset speedgrade -10
xset simulator isim
if { [xset hier sub] != 0 } {
  exit -1
}
set bMisMatch false
set xpsArch [xget arch]
if { ! [ string equal -nocase $xpsArch "virtex4" ] } {
   set bMisMatch true
}
set xpsDev [xget dev]
if { ! [ string equal -nocase $xpsDev "xc4vsx55" ] } {
   set bMisMatch true
}
set xpsPkg [xget package]
if { ! [ string equal -nocase $xpsPkg "ff1148" ] } {
   set bMisMatch true
}
set xpsSpd [xget speedgrade]
if { ! [ string equal -nocase $xpsSpd "-10" ] } {
   set bMisMatch true
}
if { $bMisMatch == true } {
   puts "Settings Mismatch:"
   puts "Current Project:"
   puts "	Family: virtex4"
   puts "	Device: xc4vsx55"
   puts "	Package: ff1148"
   puts "	Speed: -10"
   puts "XPS File: "
   puts "	Family: $xpsArch"
   puts "	Device: $xpsDev"
   puts "	Package: $xpsPkg"
   puts "	Speed: $xpsSpd"
   exit 11
}
xset hdl verilog
xset intstyle ise
save proj
exit
