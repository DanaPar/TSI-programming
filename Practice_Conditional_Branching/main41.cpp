#include <iostream>
using namespace std;

int main() {
    int year, month;
    int tYear, tMonth;

    cout << "Enter birth year: ";
    cin >> year;
    cout << "Enter the number of month: ";
    cin >> month;
    cout << "Enter today's year: ";
    cin >> tYear;
    cout << "Enter today's month: ";
    cin >> tMonth;

    int age;
    if (tMonth >= month)
        age = tYear - year;
    else
        age = tYear - year -1;

    cout << "age is " << age;

    return 0;
}