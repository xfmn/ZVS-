#include <stdio.h>
#include <math.h>

double calc_zvs_freq(double L_henry, double C_farad) {
    return 1.0 / (2.0 * M_PI * sqrt(L_henry * C_farad));
}

int main() {
    double L = 10e-6;  // 电感 10μH

    double C1 = 2.2e-6 * 3;  // 2.2μF × 3 = 6.6μF
    double C2 = 0.33e-6 * 3; // 0.33μF × 3 = 0.99μF

    double f1 = calc_zvs_freq(L, C1);
    double f2 = calc_zvs_freq(L, C2);

    printf("使用 2.2uF x3 的频率: %.2f kHz\n", f1 / 1000.0);
    printf("使用 0.33uF x3 的频率: %.2f kHz\n", f2 / 1000.0);

    return 0;
}
