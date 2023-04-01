#include <iostream>

using namespace std;

int main() {
    double sum = 0;
    double a, c, d;
    c = 5;
    d = 8;
    a = (c / d);
    double valid = double(31) / 34;



    while (valid != a) {
        a = (c/d);
        c += 2;
        d += 2;
        sum += a;
    }

    cout << fixed;
    cout.precision(3);
    cout << sum;

    return 0;
}
