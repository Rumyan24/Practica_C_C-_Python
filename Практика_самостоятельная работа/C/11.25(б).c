#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Третий, шестой и т.д. элементы массива:\n");
    for (int i = 2; i < size; i += 3) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

