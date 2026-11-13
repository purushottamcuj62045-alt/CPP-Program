#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double sum = 0, term;
    int n = 1;

    do {
        term = pow(1.0 / n, n);
        sum += term;
        n++;
    } while (fabs(term) > 0.000001 * fabs(sum));

    cout << "SUM = " << sum << endl;

    return 0;
}