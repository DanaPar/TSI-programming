#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number % 3 == 0)
        cout << "Number " << number << " divisible by 3" << endl;
    else
        cout << "Number " << number << " is NOT divisible by 3" << endl;

    return 0;
}