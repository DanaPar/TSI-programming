#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, k, f;

    cout << "Enter x: ";
    cin >> x;

    if (sin(x) < 0)
        k = x * x;
    else
        k = abs(x);
    if (k < x)
        f = k * x;
    else
        f = k + x;

    cout << "f(x) is " << f;

return 0;
}