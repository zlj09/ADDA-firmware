data = 0
amp = 1024
num = 32
delta = amp / num
for i in range(0, num):
    data = i * delta
    #print("%3x"%(data))

f_clk = 100e6
N = 2**16
delta_f = f_clk / N
print(3 * delta_f)
