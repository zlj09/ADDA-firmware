proc exportToSDK {} {
  cd H:/ljzhu/test_br0101/microblaze
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

set sExportDir [ xget sdk_export_dir ]
set sExportDir [ file join "H:/ljzhu/test_br0101/microblaze" "$sExportDir" "hw" ] 
if { [ file exists H:/ljzhu/test_br0101/edkBmmFile_bd.bmm ] } {
   puts "Copying placed bmm file H:/ljzhu/test_br0101/edkBmmFile_bd.bmm to $sExportDir" 
   file copy -force "H:/ljzhu/test_br0101/edkBmmFile_bd.bmm" $sExportDir
}
if { [ file exists H:/ljzhu/test_br0101/microblaze_top.bit ] } {
   puts "Copying bit file H:/ljzhu/test_br0101/microblaze_top.bit to $sExportDir" 
   file copy -force "H:/ljzhu/test_br0101/microblaze_top.bit" $sExportDir
}
exit $result
