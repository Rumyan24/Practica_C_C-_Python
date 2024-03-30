#include <stdio.h>

int main() {
    int sum = 0;
    int i;

    // Вычисляем сумму всех целых чисел от 1 до 750
    for (i = 1; i <= 750; i++) {
        sum += i;
    }

    // Вычисляем среднее арифметическое
    double average = sum / 750.0;

    // Выводим результат
    printf("Среднее арифметическое всех целых чисел от 1 до 750: %lf\n", average);

    return 0;
}

