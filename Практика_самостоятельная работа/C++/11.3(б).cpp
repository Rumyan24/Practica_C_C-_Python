#include <iostream>
#include <random>

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(22, 23);

    for (int i = 0; i < 15; ++i) {
        std::cout << dis(gen) << " ";
    }
    std::cout << std::endl;

    return 0;
}
