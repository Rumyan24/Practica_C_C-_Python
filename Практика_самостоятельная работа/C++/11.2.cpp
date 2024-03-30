#include <iostream>

int main() {
    int array[10];

    std::cout << "Введите 10 значений для массива:" << std::endl;

    // Заполнение массива значениями, вводимыми с клавиатуры
    for (int i = 0; i < 10; ++i) {
        std::cout << "Значение " << i + 1 << ": ";
        std::cin >> array[i];
    }

    // Вывод заполненного массива
    std::cout << "Заполненный массив: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
