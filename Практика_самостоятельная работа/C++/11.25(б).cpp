#include <iostream>
#include <vector>

int main() {
    std::vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    std::cout << "Третий, шестой и т.д. элементы массива:" << std::endl;
    for (size_t i = 2; i < array.size(); i += 3) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
