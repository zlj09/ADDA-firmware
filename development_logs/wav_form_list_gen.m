t = linspace(0, 2 * pi, 256);
sine_data = floor((0.5 * sin(t) + 0.5 ) * 1024);
for i = 0 : 1 : 255
    fprintf('\t\t8''d%d: sine_data_reg <= 10''d%d;\n', i, sine_data(i + 1));
end
index = 0 : 1 : 255;
plot(index, sine_data, 'r*');