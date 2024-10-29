#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter three digit number: ";
    cin >> num;

    int digit1 = num / 100;
    int digit2 = num % 100 / 10;
    int digit3 = num % 10;

    if (digit1 != digit2 && digit2 != digit3 && digit3 != digit1)
        if (digit1 != 0 && digit2 != 0 && digit3 != 0)
            cout << "Digits are different and there is no zero" << endl;

    return 0;

}