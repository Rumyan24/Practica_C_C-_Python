#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int array[15];

    for (int i = 0; i < 15; i++) {
        array[i] = rand() % 11;
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

