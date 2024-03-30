#include <stdio.h>

int main() {
    int array[] = {123, 45, 678, 910, 100, 999, 1000, 89, 321};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Трехзначные числа в массиве:\n");
    for (int i = 0; i < size; ++i) {
        if (array[i] >= 100 && array[i] <= 999) {
            printf("%d ", array[i]);
        }
    }
    printf("\n");

    return 0;
}

