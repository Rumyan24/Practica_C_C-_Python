#include <stdio.h>

int main() {
    int array[] = {3, -1, -4, 2, 0, -5, 7};
    int size = sizeof(array) / sizeof(array[0]);

    // Вывод неотрицательных элементов
    printf("Неотрицательные элементы:\n");
    for (int i = 0; i < size; ++i) {
        if (array[i] >= 0) {
            printf("%d ", array[i]);
        }
    }

    // Вывод отрицательных элементов
    printf("\nОтрицательные элементы:\n");
    for (int i = 0; i < size; ++i) {
        if (array[i] < 0) {
            printf("%d ", array[i]);
        }
    }
    printf("\n");

    return 0;
}

