#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter number: ";
    cin >> num;

    if (num > 0)
        cout << "Number is positive" << endl;
    else if (num < 0)
        cout << "Number is negative" << endl;

    return 0;
}