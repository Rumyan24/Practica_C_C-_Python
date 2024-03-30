#include <stdio.h>

int main() {
    int array[] = {10, 23, 5, 100, 99, 70, 8, 15, 45};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Двузначные числа в массиве:\n");
    for (int i = 0; i < size; ++i) {
        if (array[i] >= 10 && array[i] <= 99) {
            printf("%d ", array[i]);
        }
    }
    printf("\n");

    return 0;
}

