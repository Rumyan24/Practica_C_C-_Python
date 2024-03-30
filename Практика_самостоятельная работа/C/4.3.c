#include <stdio.h>
#include <math.h>

int main() {
    double x, y;

    printf("Введите x: ");
    scanf("%lf", &x);

    if (x > 0) {
        y = sin(x * x);
    } else {
        y = 1 - 2 * pow(sin(x), 2);
    }

    printf("y = %lf\n", y);

    return 0;
}

