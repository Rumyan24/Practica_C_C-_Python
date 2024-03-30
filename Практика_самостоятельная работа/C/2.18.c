#include <stdio.h>
#include <math.h>

double calculate_z(double x, double y) {
    double numerator = x + 2 + y / (x * x); // Числитель
    double denominator = y + 1 / sqrt(x * x + 10); // Знаменатель
    return numerator / denominator;
}

double calculate_q(double x, double y) {
    return 7.25 * sin(x) - fabs(y);
}

int main() {
    double x, y, z, q;

    printf("Введите x: ");
    scanf("%lf", &x);
    printf("Введите y: ");
    scanf("%lf", &y);

    z = calculate_z(x, y);
    q = calculate_q(x, y);

    printf("z = %lf\n", z);
    printf("q = %lf\n", q);

    return 0;
}

