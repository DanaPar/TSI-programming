#include <iostream>
using namespace std;

int main() {
    int a, b, angle;

    cout << "Enter side 'a': ";
    cin >> a;
    cout << "Enter side 'b': ";
    cin >> b;
    cout << "Enter angle: ";
    cin >> angle;

    if (angle == 90)
        if (a == b)
            cout << "It's a square!";
        else
            cout << "It's a rectangle!";
    else
        if (a == b)
            cout << "It's a rhombus!";
        else
            cout << "It's a parallelogram!";

    return 0;

}