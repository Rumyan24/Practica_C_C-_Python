#include <iostream>

int main() {
    int b, sum = 0;
    std::cout << "Введите b (b >= 150): ";
    std::cin >> b;

    if (b < 150) {
        std::cout << "Значение b должно быть не меньше 150." << std::endl;
    } else {
        // Вычисляем сумму всех целых чисел от 150 до b
        for (int i = 150; i <= b; ++i) {
            sum += i;
        }

        // Вычисляем среднее арифметическое
        double average = static_cast<double>(sum) / (b - 149);

        // Выводим результат
        std::cout << "Среднее арифметическое всех целых чисел от 150 до " << b << ": " << average << std::endl;
    }

    return 0;
}
