#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0 && number % 3 == 0)
        cout << "Number " << number << " is even and divisible by 3" << endl;
    else
        cout << "Number " << number << " is not even and/or divisible by 3" << endl;


    return 0;
}