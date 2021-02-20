#include <iostream>
#include <stdexcept>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

double calArea(double a, double b, double c) throw (invalid_argument) {
    double* x = new double[3];
    x[0] = a;
    x[1] = b;
    x[2] = c;
    sort(x, x + 3);
    if (x[0] <= 0)
        throw invalid_argument("The input is illegal");
    if (x[0] + x[1] <= x[2])
        throw invalid_argument("The input is illegal");
    else
        if (abs(x[0] - x[1]) < 1e-6 || abs(x[1] - x[2]) < 1e-6) {

        }
        else
            throw invalid_argument("The input is illegal");
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    try {
        double area = calArea(a, b, c);
        cout << setiosflags(ios::fixed) << setprecision(2);
        cout << area << endl;
    }
    catch (exception &e) {
        cout << e.what() << endl;
    }

}