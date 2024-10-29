#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4, num5;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;
    cout << "Enter fourth number: ";
    cin >> num4;
    cout << "Enter number for division check: ";
    cin >> num5;

    int sum = 0;
    if (num1 % num5 == 0)
        sum = num1;
    if (num2 % num5 == 0)
        if (sum == 0)
            sum = num2;
        else
            sum *= num2;
    if (num3 % num5 == 0)
        if (sum == 0)
            sum = num3;
        else
            sum *= num3;
    if (num4 % num5 == 0)
        if (sum == 0)
            sum = num4;
        else
            sum *= num4;

    cout << "The multiplication of numbers which is divisible by " << num5 << " is " << sum << endl;

    return 0;
}
