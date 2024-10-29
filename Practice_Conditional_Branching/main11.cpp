#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter number: ";
    cin >> num;

    if (num >= -9 && num <= 9)
        cout << "Number is one digit number" << endl;

    return 0;
}