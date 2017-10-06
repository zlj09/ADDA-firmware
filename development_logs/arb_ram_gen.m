width = 10;
length = 2 ^ 16;
M = 2 ^ width - 1;
t = linspace(0, pi, length / 2);
data_1 = M * 0.5 * (sin(t) + 1);
k = linspace(0, 1, length / 2);
data_2 = M * abs(k - 0.5);
data = [data_1, data_2];
plot(data);

fout = fopen('init_bram_saw_sin.coe', 'w');
fprintf(fout, 'memory_initialization_radix=10;\n');
fprintf(fout, 'memory_initialization_vector =\n');
for i = 1 : 65536
    if (i ~= 65536)
        fprintf(fout, '%.0f, ', data(i));
    else
        fprintf(fout, '%10.0f;', data(i));
    end
end
fclose(fout);

figure;
%phase_inc = 50;
