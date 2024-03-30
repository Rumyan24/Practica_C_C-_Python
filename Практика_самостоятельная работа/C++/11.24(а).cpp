#include <iostream>
#include <vector>

int main() {
    std::vector<int> array = {10, 23, 5, 100, 99, 70, 8, 15, 45};

    std::cout << "Двузначные числа в массиве:" << std::endl;
    for (int item : array) {
        if (item >= 10 && item <= 99) {
            std::cout << item << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
