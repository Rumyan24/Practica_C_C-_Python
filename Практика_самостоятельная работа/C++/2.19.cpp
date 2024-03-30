#include <iostream>
#include <cmath>

using namespace std;

double calculate_x(double a, double b) {
    return 2 / (a * a + 25) + (b / (1 / sqrt(b)) + a + b / 2);
}

double calculate_y(double a, double b) {
    return (abs(a) + 2 * sin(b)) / (5.5 * a);
}

int main() {
    double a, b, x, y;

    cout << "Введите a: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;

    x = calculate_x(a, b);
    y = calculate_y(a, b);

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}
