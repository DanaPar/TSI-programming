#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter number: ";
    cin >> num;

    if (((num >= -999 && num <= -100) || (num >= 100 && num <= 999))  && (num % 5 == 0))
        cout << "Number is three digit number and divisible by 5" << endl;

    return 0;
}