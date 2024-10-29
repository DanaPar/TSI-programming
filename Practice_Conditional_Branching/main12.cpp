#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter number: ";
    cin >> num;

    if (num >= 1 && num <= 9)
        cout << "Number is one digit number and positive" << endl;

    return 0;
}