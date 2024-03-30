#include <stdio.h>

int main() {
    int array[10];

    printf("Введите 10 значений для массива:\n");

    // Заполнение массива значениями, вводимыми с клавиатуры
    for (int i = 0; i < 10; i++) {
        printf("Значение %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Вывод заполненного массива
    printf("Заполненный массив: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

