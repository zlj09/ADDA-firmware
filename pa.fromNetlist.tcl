
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name test_br0101 -dir "H:/ljzhu/test_br0101/planAhead_run_4" -part xc4vsx55ff1148-10
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "H:/ljzhu/test_br0101/microblaze_top.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {H:/ljzhu/test_br0101} }
add_files [list {H:/ljzhu/test_br0101/microblaze.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {H:/ljzhu/test_br0101/microblaze_clock_generator_0_wrapper.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {H:/ljzhu/test_br0101/microblaze_dlmb_wrapper.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {H:/ljzhu/test_br0101/microblaze_ilmb_wrapper.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {H:/ljzhu/test_br0101/microblaze_microblaze_0_wrapper.ncf}] -fileset [get_property constrset [current_run]]
set_property target_constrs_file "microblaze_top.ucf" [current_fileset -constrset]
add_files [list {microblaze_top.ucf}] -fileset [get_property constrset [current_run]]
link_design
