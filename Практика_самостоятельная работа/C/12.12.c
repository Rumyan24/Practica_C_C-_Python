#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "Пример"; // Для Unicode может потребоваться wchar_t и соответствующие функции
    int length = strlen(word);

    // Вывод последнего символа
    printf("Последний символ слова: %c\n", word[length - 1]);

    return 0;
}

