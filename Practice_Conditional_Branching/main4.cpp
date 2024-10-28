#include <iostream>
using namespace std;

int main() {
    int number1;
    int number2;

    cout << "Enter a first number: ";
    cin >> number1;
    cout << "Enter second number: ";
    cin >> number2;

    if (number1 % number2 == 0)
        cout << "Number " << number1 << " is divisible by " << number2 << endl;
    else
        cout << "Number " << number1 << " is NOT divisible by " << number2 << endl;

    return 0;
}