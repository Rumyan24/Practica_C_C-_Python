#include <iostream>

int main() {
    int sum = 0;

    // Вычисляем сумму всех целых чисел от 1 до 750
    for (int i = 1; i <= 750; ++i) {
        sum += i;
    }

    // Вычисляем среднее арифметическое
    double average = static_cast<double>(sum) / 750;

    // Выводим результат
    std::cout << "Среднее арифметическое всех целых чисел от 1 до 750: " << average << std::endl;

    return 0;
}
