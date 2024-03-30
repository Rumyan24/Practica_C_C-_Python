#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "radar";
    int length = strlen(word);

    // Проверка, начинается и оканчивается ли слово на одну и ту же букву
    if (word[0] == word[length - 1]) {
        printf("Слово начинается и оканчивается на одну и ту же букву.\n");
    } else {
        printf("Слово начинается и оканчивается на разные буквы.\n");
    }

    return 0;
}

