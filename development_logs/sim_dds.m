width = 10;
length = 2 ^ 16;

M = 2 ^ width - 1;
t = linspace(0, 2 * pi, length);
data = floor(M * 0.5 * (sin(t) + 1));

dds_length = 2 ^ 32;
period_num = 5;
phase_inc = 1000000000;
freq = dds_length / phase_inc
phase = mod(1 : phase_inc : dds_length * period_num, dds_length);
addr = bitshift(phase, -16) + 1;
wave = data(addr);
plot(wave)

