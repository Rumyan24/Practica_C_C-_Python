#include <iostream>
#include <vector>

bool is_power_of_five(int num) {
    while (num > 1) {
        if (num % 5 != 0)
            return false;
        num /= 5;
    }
    return num == 1;
}

int main() {
    std::vector<int> numbers = {1, 5, 25, 3, 125, 30, 625, 100};
    int count = 0;

    for (int num : numbers) {
        if (is_power_of_five(num))
            ++count;
    }

    std::cout << "Количество чисел, являющихся степенями пятерки: " << count << std::endl;

    return 0;
}
