#include <stdio.h>
#include <string.h>
#include <ctype.h> // Для функции tolower()

int main() {
    char first_word[] = "apple";
    char second_word[] = "orange";
    int length_second_word = strlen(second_word);

    // Проверка условия
    if (tolower(first_word[0]) == tolower(second_word[length_second_word - 1])) {
        printf("Первое слово начинается на ту же букву, на которую заканчивается второе слово.\n");
    } else {
        printf("Первое слово начинается на другую букву, не на ту, на которую заканчивается второе слово.\n");
    }

    return 0;
}

