#include <stdio.h>
#include <math.h>

double calculate_x(double a, double b) {
    return 2 / (a * a + 25) + (b / (1 / sqrt(b)) + a + b / 2);
}

double calculate_y(double a, double b) {
    return (fabs(a) + 2 * sin(b)) / (5.5 * a);
}

int main() {
    double a, b, x, y;

    printf("Введите a: ");
    scanf("%lf", &a);
    printf("Введите b: ");
    scanf("%lf", &b);

    x = calculate_x(a, b);
    y = calculate_y(a, b);

    printf("x = %lf\n", x);
    printf("y = %lf\n", y);

    return 0;
}
