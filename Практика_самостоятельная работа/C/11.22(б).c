#include <stdio.h>

int main() {
    int array[] = {101, 99, 200, 100, 50, -20, 101, 99, 100};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Элементы, не превышающие 100:\n");
    for (int i = 0; i < size; ++i) {
        if (array[i] <= 100) {
            printf("%d ", array[i]);
        }
    }
    printf("\n");

    return 0;
}
