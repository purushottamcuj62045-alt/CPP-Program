#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, term, sum;
    int n;

    cout << "Enter x (in radians): ";
    cin >> x;

    term = x;
    sum = x;
    n = 1;

    while (fabs(term) > 0.000001 * fabs(sum)) {
        term = term * (-x * x) / ((2 * n) * (2 * n + 1));
        sum = sum + term;
        n++;
    }

    cout << "sin(x) = " << sum << endl;
    cout << "Library sin(x) = " << sin(x) << endl;

    return 0;
}