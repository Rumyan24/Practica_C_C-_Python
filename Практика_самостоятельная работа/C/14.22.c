#include <stdio.h>
#include <stdbool.h>

bool is_power_of_five(int num) {
    while (num > 1) {
        if (num % 5 != 0)
            return false;
        num /= 5;
    }
    return num == 1;
}

int main() {
    int numbers[] = {1, 5, 25, 3, 125, 30, 625, 100};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int count = 0;

    for (int i = 0; i < size; ++i) {
        if (is_power_of_five(numbers[i]))
            ++count;
    }

    printf("Количество чисел, являющихся степенями пятерки: %d\n", count);

    return 0;
}

