out_file = open("init_arb_bram.coe", "w")
data = "memory_initialization_radix=10;\n"
data += "memory_initialization_vector =\n"

length = 2**16;
#print("length = %d"%(length))
data_list = {
        0 : 400,
        1 : 900,
        2 : 500,
        3 : 200,
        4 : 0,
        5 : 300,
        6 : 800,
        7 : 100
}
for i in range(0, length):
    data_i = data_list[i >> 13]
    data += str(data_i)
    if (i != length - 1):
        data += ", "

data += "; "
out_file.write(data)
out_file.close()
