#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter start of the range: ";
    cin >> a;
    cout << "Enter end of the range: ";
    cin >> b;

    int product = 1;
    for (int i = a; i <= b; i++)
        product *= i;

    cout << "Product of numbers in range is " << product << endl;

    return 0;
}