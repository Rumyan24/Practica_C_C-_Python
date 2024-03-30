#include <iostream>
#include <string>
#include <cctype> // Для функции tolower()

int main() {
    std::string first_word = "apple";
    std::string second_word = "orange";

    // Проверка условия
    if (tolower(first_word.front()) == tolower(second_word.back())) {
        std::cout << "Первое слово начинается на ту же букву, на которую заканчивается второе слово." << std::endl;
    } else {
        std::cout << "Первое слово начинается на другую букву, не на ту, на которую заканчивается второе слово." << std::endl;
    }

    return 0;
}
