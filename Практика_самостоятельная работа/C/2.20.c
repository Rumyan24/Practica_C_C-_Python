#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double calculate_a(double e, double f, double g) {
    return pow(sqrt(fabs((e - 3) / f)), 3) + g;
}

double calculate_b(double e, double h) {
    return sin(e) + pow(cos(h), 2);
}

double calculate_c(double e, double f, double g) {
    return 33 * g / (e * f) - 3;
}

int main() {
    double e, f, g, h, a, b, c;

    printf("Введите e: ");
    scanf("%lf", &e);
    printf("Введите f: ");
    scanf("%lf", &f);
    printf("Введите g: ");
    scanf("%lf", &g);
    printf("Введите h: ");
    scanf("%lf", &h);

    a = calculate_a(e, f, g);
    b = calculate_b(e, h);
    c = calculate_c(e, f, g);

    printf("a = %lf\n", a);
    printf("b = %lf\n", b);
    printf("c = %lf\n", c);

    return 0;
}


