#include <stdio.h>

int main() {
    int array[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(array) / sizeof(array[0]);

    printf("Четные элементы массива:\n");
    for (int i = 0; i < n; i++) {
        if (array[i] % 2 == 0) {
            printf("%d ", array[i]);
        }
    }
    printf("\n");

    return 0;
}

