#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter three digit number: ";
    cin >> num;

    int digit1 = num / 100;
    int digit2 = num % 100 / 10;
    int digit3 = num % 10;

    if (digit1 == 1 || digit2 == 1 || digit3 == 1)
        cout << "In this number is at least one digit 1" << endl;

    return 0;

}