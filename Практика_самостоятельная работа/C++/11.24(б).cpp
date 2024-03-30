#include <iostream>
#include <vector>

int main() {
    std::vector<int> array = {123, 45, 678, 910, 100, 999, 1000, 89, 321};

    std::cout << "Трехзначные числа в массиве:" << std::endl;
    for (int item : array) {
        if (item >= 100 && item <= 999) {
            std::cout << item << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
