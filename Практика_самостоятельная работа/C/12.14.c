#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "Пример";

    // Проверка длины слова и равенства символов
    if (strlen(word) >= 4 && word[1] == word[3]) {
        printf("Второй и четвертый символы одинаковы.\n");
    } else {
        printf("Второй и четвертый символы различны или их нет.\n");
    }

    return 0;
}
