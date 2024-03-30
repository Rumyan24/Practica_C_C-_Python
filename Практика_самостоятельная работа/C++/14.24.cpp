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
    std::cout << "Пары простых чисел-близнецов, не превышающих 200:" << std::endl;
    for (int num = 2; num < 199; ++num) {
        if (is_prime(num) && is_prime(num + 2)) {
            std::cout << "(" << num << ", " << num + 2 << ")" << std::endl;
        }
    }
    return 0;
}
