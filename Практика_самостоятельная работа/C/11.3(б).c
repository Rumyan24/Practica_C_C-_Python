#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    float array[15];

    for (int i = 0; i < 15; i++) {
        array[i] = 22 + (float)rand() / (RAND_MAX / (23 - 22));
        printf("%f ", array[i]);
    }
    printf("\n");

    return 0;
}

