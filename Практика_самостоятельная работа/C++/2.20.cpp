#include <iostream>
#include <cmath>

using namespace std;

double calculate_a(double e, double f, double g) {
    return pow(sqrt(abs((e - 3) / f)), 3) + g;
}

double calculate_b(double e, double h) {
    return sin(e) + pow(cos(h), 2);
}

double calculate_c(double e, double f, double g) {
    return 33 * g / (e * f) - 3;
}

int main() {
    double e, f, g, h, a, b, c;

    cout << "Введите e: ";
    cin >> e;
    cout << "Введите f: ";
    cin >> f;
    cout << "Введите g: ";
    cin >> g;
    cout << "Введите h: ";
    cin >> h;

    a = calculate_a(e, f, g);
    b = calculate_b(e, h);
    c = calculate_c(e, f, g);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}
