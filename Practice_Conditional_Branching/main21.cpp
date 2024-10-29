#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter three digit number: ";
    cin >> num;

    int digit1 = num / 100;
    int digit2 = num % 100 / 10;
    int digit3 = num % 10;

    if (digit1 < digit2 && digit2 < digit3)
        cout << "Digits are in ascending order";


    return 0;
}