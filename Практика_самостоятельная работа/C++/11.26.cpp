#include <iostream>
#include <vector>

int main() {
    std::vector<int> array = {3, -1, -4, 2, 0, -5, 7};

    // Вывод неотрицательных элементов
    std::cout << "Неотрицательные элементы:" << std::endl;
    for (int item : array) {
        if (item >= 0) {
            std::cout << item << " ";
        }
    }

    // Вывод отрицательных элементов
    std::cout << "\nОтрицательные элементы:" << std::endl;
    for (int item : array) {
        if (item < 0) {
            std::cout << item << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
