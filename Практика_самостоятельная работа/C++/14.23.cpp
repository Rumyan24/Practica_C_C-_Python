#include <iostream>
#include <cmath>

bool is_prime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i <= std::sqrt(n); ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    std::cout << "Трехзначные простые числа:" << std::endl;
    for (int n = 100; n < 1000; ++n) {
        if (is_prime(n)) {
            std::cout << n << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}
