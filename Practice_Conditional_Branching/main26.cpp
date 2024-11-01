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

    int count = 0;
    if (num1 == 9 || num1 % 10 == 9)
        count++;
    if (num2 == 9 || num2 % 10 == 9)
        count++;
    if (num3 == 9 || num3 % 10 == 9)
        count++;
    if (num4 == 9 || num4 % 10 == 9)
        count++;

    cout << count << " numbers had digit 9 as last digit" << endl;

    return 0;
}
