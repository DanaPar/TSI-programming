#include <iostream>
using namespace std;

int main() {
    int type, l;

    cout << "Enter type of fuel:" << endl << "1 - '95 benzine'" << endl << "2 - '98 benzine'" << endl << "3 - 'Diesel" << endl << ">>";
    cin >> type;
    cout << "Enter amount of fuel >> ";
    cin >> l;

    float price = 0;
    switch(type) {
        case 1: price = 1.527; break;
        case 2: price = 1.577; break;
        case 3: price = 1.457; break;
        default: price = 0;
    }

    float sum = l * price;
    cout << "Total: " << sum << " EUR." << endl;;

    return 0;
}