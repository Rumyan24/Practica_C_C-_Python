#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Второй, четвертый и т.д. элементы массива:\n");
    for (int i = 1; i < size; i += 2) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

