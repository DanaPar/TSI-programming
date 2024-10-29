#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter two digit number: ";
    cin >> num;

    int digit2 = num % 10;
    int digit1 = (num - digit2) / 10;

    if (digit1 == digit2)
        cout << "Both digits are same" << endl;


    return 0;

}