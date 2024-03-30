#include <iostream>
#include <cmath>

using namespace std;

double calculate_z(double x, double y) {
    double numerator = x + 2 + y / (x * x); // Числитель
    double denominator = y + 1 / sqrt(x * x + 10); // Знаменатель
    return numerator / denominator;
}

double calculate_q(double x, double y) {
    return 7.25 * sin(x) - abs(y);
}

int main() {
    double x, y, z, q;

    cout << "Введите x: ";
    cin >> x;
    cout << "Введите y: ";
    cin >> y;

    z = calculate_z(x, y);
    q = calculate_q(x, y);

    cout << "z = " << z << endl;
    cout << "q = " << q << endl;

    return 0;
}
