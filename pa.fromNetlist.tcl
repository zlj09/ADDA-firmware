
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name test_br0101 -dir "F:/Programs/Verilog/FPGA_Group/test_br0101/planAhead_run_2" -part xc4vsx55ff1148-10
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "F:/Programs/Verilog/FPGA_Group/test_br0101/microblaze_top.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {F:/Programs/Verilog/FPGA_Group/test_br0101} }
add_files [list {F:/Programs/Verilog/FPGA_Group/test_br0101/microblaze.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {F:/Programs/Verilog/FPGA_Group/test_br0101/microblaze_clock_generator_0_wrapper.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {F:/Programs/Verilog/FPGA_Group/test_br0101/microblaze_dlmb_wrapper.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {F:/Programs/Verilog/FPGA_Group/test_br0101/microblaze_ilmb_wrapper.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {F:/Programs/Verilog/FPGA_Group/test_br0101/microblaze_microblaze_0_wrapper.ncf}] -fileset [get_property constrset [current_run]]
set_param project.pinAheadLayout  yes
set_property target_constrs_file "microblaze.ucf" [current_fileset -constrset]
add_files [list {microblaze.ucf}] -fileset [get_property constrset [current_run]]
link_design
