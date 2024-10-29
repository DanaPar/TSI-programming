#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter number: ";
    cin >> num;

    if ((num >= 10 && num <= 99) || (num >= -99 && num <= -10))
        cout << "Number is two digit number" << endl;

    return 0;
}