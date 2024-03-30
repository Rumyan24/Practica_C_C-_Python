#include <stdio.h>

int main() {
    int a, b, sum = 0;
    printf("Введите a: ");
    scanf("%d", &a);
    printf("Введите b: ");
    scanf("%d", &b);

    if (a > b) {
        printf("a должно быть меньше или равно b. Перезапустите программу с корректными значениями.\n");
    } else {
        // Вычисляем сумму всех целых чисел от a до b
        for (int i = a; i <= b; ++i) {
            sum += i;
        }

        // Вычисляем среднее арифметическое
        double average = sum / (double)(b - a + 1);

        // Выводим результат
        printf("Среднее арифметическое всех целых чисел от %d до %d: %lf\n", a, b, average);
    }

    return 0;
}

