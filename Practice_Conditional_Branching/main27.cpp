#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    int D = b * b - 4 * a * c;

    if (D > 0)
    {
        double result1 = (-b + sqrt(D)) / (2.0 *a);
        double result2 = (-b - sqrt(D)) / (2.0 *a);
        cout << "The roots of quadratic equation is " << result1 << " and " << result2 << endl;
    }
    else if (D == 0) {
        double result = -b / (2.0 * a);
        cout << "The root is" << result;
    }
    else
        cout << "There's not real roots";

    return 0;
}