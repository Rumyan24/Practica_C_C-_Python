#include <iostream>
#include <vector>

int main() {
    std::vector<int> array = {10, 23, 40, 55, 60, 70, 0, 15, 100};

    std::cout << "Элементы, оканчивающиеся на ноль:" << std::endl;
    for (int item : array) {
        if (item % 10 == 0) {
            std::cout << item << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
