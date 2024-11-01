#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    cout << "Enter d: ";
    cin >> d;

    if (a == b) {
        if (b == c)
            cout << d;
        else
            cout << c;
    }
    else if (c == d) {
        if (a == d)
            cout << b;
        else
            cout << a;
    }

    return 0;
}