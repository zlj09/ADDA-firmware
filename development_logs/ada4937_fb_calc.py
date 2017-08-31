def para(r1, r2):
    return (r1 * r2) / (r1 + r2)

R2 = 21e3
Rx = 84.5e3
R3 = para(Rx, R2)
print(R3)

Vi = -3.0
for R1 in [200, 700, 1200, 1700, 2200, 2700, 3200, 3700, 4200]:
    H = - R1 * R2 / (R1 * R2 + R1 * Rx + R2 * Rx)
    print(H * Vi)

