#include <iostream>
#include <string>

int main() {
    std::string word = "radar";

    // Проверка, начинается и оканчивается ли слово на одну и ту же букву
    if (!word.empty() && word.front() == word.back()) {
        std::cout << "Слово начинается и оканчивается на одну и ту же букву." << std::endl;
    } else {
        std::cout << "Слово начинается и оканчивается на разные буквы." << std::endl;
    }

    return 0;
}
