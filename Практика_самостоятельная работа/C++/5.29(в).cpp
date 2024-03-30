#include <iostream>

int main() {
    int a, sum = 0;
    std::cout << "Введите a (a <= 200): ";
    std::cin >> a;

    if (a > 200) {
        std::cout << "Значение a должно быть не больше 200." << std::endl;
    } else {
        // Вычисляем сумму всех целых чисел от a до 200
        for (int i = a; i <= 200; ++i) {
            sum += i;
        }

        // Вычисляем среднее арифметическое
        double average = static_cast<double>(sum) / (200 - a + 1);

        // Выводим результат
        std::cout << "Среднее арифметическое всех целых чисел от " << a << " до 200: " << average << std::endl;
    }

    return 0;
}
