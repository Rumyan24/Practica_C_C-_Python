#include <stdio.h>
#include <math.h>

double calculate_a(double e, double f) {
    return (e + f / 2) / 3;
}

double calculate_b(double h, double g) {
    return fabs(h * h - g);
}

double calculate_c(double g, double h, double e) {
    return sqrt((g - h) * (g - h) - 3 * sin(e));
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

    a = calculate_a(e, f);
    b = calculate_b(h, g);
    c = calculate_c(g, h, e);

    printf("a = %lf\n", a);
    printf("b = %lf\n", b);
    printf("c = %lf\n", c);

    return 0;
}

