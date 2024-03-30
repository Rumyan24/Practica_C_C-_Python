#include <stdio.h>

int main() {
    int a, sum = 0;
    printf("Введите a (a <= 200): ");
    scanf("%d", &a);

    if (a > 200) {
        printf("Значение a должно быть не больше 200.\n");
    } else {
        // Вычисляем сумму всех целых чисел от a до 200
        for (int i = a; i <= 200; ++i) {
            sum += i;
        }

        // Вычисляем среднее арифметическое
        double average = sum / (double)(201 - a);

        // Выводим результат
        printf("Среднее арифметическое всех целых чисел от %d до 200: %lf\n", a, average);
    }

    return 0;
}

