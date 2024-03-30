#include <iostream>

int main() {
    int a, b, sum = 0;
    std::cout << "Введите a: ";
    std::cin >> a;
    std::cout << "Введите b: ";
    std::cin >> b;

    if (a > b) {
        std::cout << "a должно быть меньше или равно b. Перезапустите программу с корректными значениями." << std::endl;
    } else {
        // Вычисляем сумму всех целых чисел от a до b
        for (int i = a; i <= b; ++i) {
            sum += i;
        }

        // Вычисляем среднее арифметическое
        double average = static_cast<double>(sum) / (b - a + 1);

        // Выводим результат
        std::cout << "Среднее арифметическое всех целых чисел от " << a << " до " << b << ": " << average << std::endl;
    }

    return 0;
}
