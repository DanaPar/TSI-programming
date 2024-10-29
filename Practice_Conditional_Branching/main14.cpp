#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter number: ";
    cin >> num;

    if (num >= -99 && num <= -10)
        cout << "Number is negative two digit number" << endl;

    return 0;
}