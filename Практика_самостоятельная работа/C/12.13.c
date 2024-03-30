#include <stdio.h>

int main() {
    char word[] = "Пример"; // Используйте массив wchar_t для Unicode
    int k;

    printf("Введите номер символа (k): ");
    scanf("%d", &k);

    // Вывод k-го символа, учитывая, что пользователь считает с 1
    printf("%d-й символ слова: %c\n", k, word[k-1]);

    return 0;
}

