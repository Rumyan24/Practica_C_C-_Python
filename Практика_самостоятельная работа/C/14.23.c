#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    printf("Трехзначные простые числа:\n");
    for (int n = 100; n < 1000; ++n) {
        if (is_prime(n)) {
            printf("%d ", n);
        }
    }
    printf("\n");
    return 0;
}

