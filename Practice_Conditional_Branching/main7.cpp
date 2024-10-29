#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    if ((num1 % 2 != 0) || (num2 % 2 != 0))
        cout << "At least one of the numbers are odd" << endl;

    return 0;
}
