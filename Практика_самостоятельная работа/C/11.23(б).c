#include <stdio.h>

int main() {
    int array[] = {10, 23, 40, 55, 60, 70, 0, 15, 100};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Элементы, оканчивающиеся на ноль:\n");
    for (int i = 0; i < size; ++i) {
        if (array[i] % 10 == 0) {
            printf("%d ", array[i]);
        }
    }
    printf("\n");

    return 0;
}
