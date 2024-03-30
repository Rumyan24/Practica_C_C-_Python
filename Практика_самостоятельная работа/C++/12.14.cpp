#include <iostream>
#include <string>

int main() {
    std::string word = "Пример";

    // Проверка длины слова и равенства символов
    if (word.length() >= 4 && word[1] == word[3]) {
        std::cout << "Второй и четвертый символы одинаковы." << std::endl;
    } else {
        std::cout << "Второй и четвертый символы различны или их нет." << std::endl;
    }

    return 0;
}
