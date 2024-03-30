#include <iostream>
#include <cmath>

using namespace std;

double calculate_a(double e, double f) {
    return (e + f / 2) / 3;
}

double calculate_b(double h, double g) {
    return abs(h * h - g);
}

double calculate_c(double g, double h, double e) {
    return sqrt((g - h) * (g - h) - 3 * sin(e));
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

    a = calculate_a(e, f);
    b = calculate_b(h, g);
    c = calculate_c(g, h, e);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}
