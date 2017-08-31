H = -1 / 6;
R1 = 261;

syms R2;
Rx = -(H + 1) * R1 * R2 / (H * (R1 + R2));
Ri = (2* R1 * R2 + 2 * R1 * Rx + R2 * Rx) / (2 * R1 + (1 - 0.5 * H) * R2);
%dRi_dR2 = diff(Ri);
r = solve(Ri - 100e3, R2);

R2 = 100 : 100 : 100000;
Rx = -(H + 1) * R1 * R2 ./ (H * (R1 + R2));
Ri = (2* R1 * R2 + 2 * R1 * Rx + R2 .* Rx) ./ (2 * R1 + (1 - 0.5 * H) * R2);
plot(R2, Ri)
figure;
plot(R2, Rx,  'r-')

R2 = 10e3;
Rx = -(H + 1) * R1 * R2 ./ (H * (R1 + R2));
Ri = (2* R1 * R2 + 2 * R1 * Rx + R2 .* Rx) ./ (2 * R1 + (1 - 0.5 * H) * R2);
R3 = R2 * Rx / (R2 + Rx);