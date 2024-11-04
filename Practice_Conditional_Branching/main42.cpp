#include <iostream>
using namespace std;

int main() {
    int year1, month1, year2, month2;

    cout << "Enter first persons birth year: ";
    cin >> year1;
    cout << "Enter first persons month of birth: ";
    cin >>  month1;
    cout << "Enter second persons birth year: ";
    cin >> year2;
    cout << "Enter second persons month of birth: ";
    cin >>  month2;

    if (year1 <= year2 && month1 < month2)
        cout << "First older";
    else
        cout << "Second person is older";

    return 0;
}