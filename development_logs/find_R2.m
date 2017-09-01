% H = -1 / 6;
% R1 = 261;
% 
% syms R2;
% Rx = -(H + 1) * R1 * R2 / (H * (R1 + R2));
% Ri = (2* R1 * R2 + 2 * R1 * Rx + R2 * Rx) / (2 * R1 + (1 - 0.5 * H) * R2);
% %dRi_dR2 = diff(Ri);
% r = solve(Ri - 100e3, R2);
% 
% R2 = 100 : 100 : 100000;
% Rx = -(H + 1) * R1 * R2 ./ (H * (R1 + R2));
% Ri = (2* R1 * R2 + 2 * R1 * Rx + R2 .* Rx) ./ (2 * R1 + (1 - 0.5 * H) * R2);
% %plot(R2, Ri)
% %figure;
% %plot(R2, Rx,  'r-')
% 
% R2 = 10e3;
% Rx = -(H + 1) * R1 * R2 ./ (H * (R1 + R2));
% Ri = (2* R1 * R2 + 2 * R1 * Rx + R2 .* Rx) ./ (2 * R1 + (1 - 0.5 * H) * R2);
% R3 = R2 * Rx / (R2 + Rx);
% 
R4 = 33;
R5 = 100;
C1 = 4.7e-12;
f_H2 = (2 * R4 + R5) / (4 * pi  * C1 * R4 * R5);
omega = 0;
H2_0 = R5 / sqrt((R5 + 2 * R4) ^ 2 + (2 * omega * C1 * R4 * R5) ^2);
omega = 500e6 * 2 * pi;
H2_500M = R5 / sqrt((R5 + 2 * R4) ^ 2 + (2 * omega * C1 * R4 * R5) ^2);
k = H2_500M / H2_0
omega = 125e6 * 2 * pi;
H2_125M = R5 / sqrt((R5 + 2 * R4) ^ 2 + (2 * omega * C1 * R4 * R5) ^2);
k = H2_125M / H2_0

% H = -1 / 6;
% R1 = 1e3;
% 
% syms R2;
% Rx = -(H + 1) * R1 * R2 / (H * (R1 + R2));
% Ri = (2* R1 * R2 + 2 * R1 * Rx + R2 * Rx) / (2 * R1 + (1 - 0.5 * H) * R2);
% dRi_dR2 = diff(Ri);
% r = solve(dRi_dR2, R2);
% 
% R2 = 100 : 100 : 100000;
% Rx = -(H + 1) * R1 * R2 ./ (H * (R1 + R2));
% Ri = (2* R1 * R2 + 2 * R1 * Rx + R2 .* Rx) ./ (2 * R1 + (1 - 0.5 * H) * R2);
% % plot(R2, Ri)
% % figure;
% % plot(R2, Rx,  'r-')
% 
% R2 = 20e3;
% Rx = -(H + 1) * R1 * R2 ./ (H * (R1 + R2))
% R3 = R2 * Rx / (R2 + Rx)
% Rx = 4.75e3
% R3 = 3.83e3
% Ri = (2* R1 * R2 + 2 * R1 * Rx + R2 .* Rx) ./ (2 * R1 + (1 - 0.5 * H) * R2)

% R4 = 33;
% R5 = 100;
% C1 = 4.7e-12;
% f_H2 = (2 * R4 + R5) / (4 * pi  * C1 * R4 * R5)
% omega = 2 * pi * 625e6;
% H2 = R5 / sqrt((R5 + 2 * R4) ^ 2 + (2 * omega * C1 * R4 * R5) ^2)

% H = -25 / 144;
% R1 = 3.9e3;
% 
% syms R2;
% Rx = -(H + 1) * R1 * R2 / (H * (R1 + R2));
% Ri = (2* R1 * R2 + 2 * R1 * Rx + R2 * Rx) / (2 * R1 + (1 - 0.5 * H) * R2);
% dRi_dR2 = diff(Ri);
% r = solve(dRi_dR2, R2);
% 
% R2 = 100 : 100 : 100000;
% Rx = -(H + 1) * R1 * R2 ./ (H * (R1 + R2));
% Ri = (2* R1 * R2 + 2 * R1 * Rx + R2 .* Rx) ./ (2 * R1 + (1 - 0.5 * H) * R2);
% % plot(R2, Ri)
% % figure;
% % plot(R2, Rx,  'r-')
% 
% R2 = 57.6e3;
% Rx = -(H + 1) * R1 * R2 ./ (H * (R1 + R2))
% R3 = R2 * Rx / (R2 + Rx)
% Ri = (2* R1 * R2 + 2 * R1 * Rx + R2 .* Rx) ./ (2 * R1 + (1 - 0.5 * H) * R2)
