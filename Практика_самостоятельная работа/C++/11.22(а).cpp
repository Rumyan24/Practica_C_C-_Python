#include <iostream>
#include <vector>

int main() {
    std::vector<int> array = {1, -3, 4, -2, 5, -6, 7, 8, -9, 0};

    std::cout << "Неотрицательные элементы массива:" << std::endl;
    for (int item : array) {
        if (item >= 0) {
            std::cout << item << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
