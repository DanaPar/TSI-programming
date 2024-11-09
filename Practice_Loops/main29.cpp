#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    int result = 1;
    for (int i = 0; i < b; i++)
        result *= a;

    cout << a << " raised to the power of " << b << " is " << result << endl;
    return 0;
}
