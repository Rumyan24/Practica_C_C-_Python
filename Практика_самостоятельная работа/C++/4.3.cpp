#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;

    cout << "Введите x: ";
    cin >> x;

    if (x > 0) {
        y = sin(x * x);
    } else {
        y = 1 - 2 * pow(sin(x), 2);
    }

    cout << "y = " << y << endl;

    return 0;
}
