#include <stdio.h>

int main() {
    int b, sum = 0;
    printf("Введите b (b >= 150): ");
    scanf("%d", &b);

    if (b < 150) {
        printf("Значение b должно быть не меньше 150.\n");
    } else {
        // Вычисляем сумму всех целых чисел от 150 до b
        for (int i = 150; i <= b; ++i) {
            sum += i;
        }

        // Вычисляем среднее арифметическое
        double average = sum / (double)(b - 149);

        // Выводим результат
        printf("Среднее арифметическое всех целых чисел от 150 до %d: %lf\n", b, average);
    }

    return 0;
}

