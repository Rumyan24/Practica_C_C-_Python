#include <stdio.h>

int main() {
    int array[] = {1, -3, 4, -2, 5, -6, 7, 8, -9, 0};
    int n = sizeof(array) / sizeof(array[0]);

    printf("Неотрицательные элементы массива:\n");
    for (int i = 0; i < n; i++) {
        if (array[i] >= 0) {
            printf("%d ", array[i]);
        }
    }
    printf("\n");

    return 0;
}

