#include <iostream>

int main() {
    // Заполнение массива заданными значениями
    int array[8] = {37, 0, 50, 46, 34, 46, 0, 13};

    // Вывод массива
    std::cout << "Массив: ";
    for (int i = 0; i < 8; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
