#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    float array[15];

    // Инициализация генератора случайных чисел
    srand(time(NULL));

    // Заполнение массива случайными вещественными числами
    for (int i = 0; i < 15; i++) {
        array[i] = (float)rand() / RAND_MAX;
    }

    // Вывод массива
    printf("Массив из 15 случайных вещественных чисел:\n");
    for (int i = 0; i < 15; i++) {
        printf("%f\n", array[i]);
    }

    return 0;
}

