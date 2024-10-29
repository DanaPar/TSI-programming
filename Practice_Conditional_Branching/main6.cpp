#include <iostream>
using namespace std;

int main() {
    int number1, number2;

    cout << "Enter first number: ";
    cin >> number1;
    cout << "Enter second number: ";
    cin >> number2;

    if ((number1 % 2 != 0) && (number1 % number2 == 0))
        cout << "Number: " << number1 << " is odd and divisible by " << number2 << endl;

    return 0;
}
