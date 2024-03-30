#include <stdio.h>

int main() {
    // Заполнение массива заданными значениями
    int array[8] = {37, 0, 50, 46, 34, 46, 0, 13};

    // Вывод массива
    printf("Массив: ");
    for (int i = 0; i < 8; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

