#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;

    int sum = 0;

    if (num1 < 0 || num1 == 1)
        sum += num1;
    if (num2 < 0 || num2 == 1)
        sum += num2;
    if (num3 < 0 || num3 == 1)
        sum += num3;

    cout << "Negative numbers or number 1 sum is " << sum << endl;

    return 0;
}