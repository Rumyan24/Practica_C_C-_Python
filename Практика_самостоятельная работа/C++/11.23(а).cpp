#include <iostream>
#include <vector>

int main() {
    std::vector<int> array = {2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << "Четные элементы массива:" << std::endl;
    for (int item : array) {
        if (item % 2 == 0) {
            std::cout << item << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
