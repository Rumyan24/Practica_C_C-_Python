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
    printf("Пары простых чисел-близнецов, не превышающих 200:\n");
    for (int num = 2; num < 199; ++num) {
        if (is_prime(num) && is_prime(num + 2)) {
            printf("(%d, %d)\n", num, num + 2);
        }
    }
    return 0;
}

