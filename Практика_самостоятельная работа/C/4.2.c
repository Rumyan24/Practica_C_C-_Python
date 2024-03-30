#include <stdio.h>
#include <math.h>

int main() {
    double x, y;

    printf("Введите x: ");
    scanf("%lf", &x);

    if (x > 0) {
        y = pow(sin(x), 2);
    } else {
        y = 1 - 2 * sin(pow(x, 2));
    }

    printf("y = %lf\n", y);

    return 0;
}
