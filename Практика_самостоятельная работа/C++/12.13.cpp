#include <iostream>
#include <string>

int main() {
    std::string word = "Пример";
    int k;

    std::cout << "Введите номер символа (k): ";
    std::cin >> k;

    // Вывод k-го символа, учитывая, что пользователь считает с 1
    std::cout << k << "-й символ слова: " << word[k-1] << std::endl;

    return 0;
}
