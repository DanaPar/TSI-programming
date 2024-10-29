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
    if (num1 > 0)
        sum += num1;
    if (num2 > 0)
        sum += num2;
    if (num3 > 0)
        sum += num3;

    cout << "Positive numbers sum is " << sum << endl;

    return 0;
}