#include <iostream>
using namespace std;

int main() {
    int angle1, angle2;

    cout << "Enter first angle: ";
    cin >> angle1;
    cout << "Enter second angle: ";
    cin >> angle2;

    //if both angles 90
    if (angle1 == 90 && angle2 == 90)
        cout << "It's a rectangle!";
    else if (angle1 == angle2)
        cout << "It's an isosceles trapezoid!";
    else if (angle1 + angle2 == 180)
        cout << "It's a parallelogram!";
    else if (angle1 == 90 || angle2 == 90)
        cout << "It's a right trapezoid!";
    else
        cout << "It's a scalene trapezoid!";

    return 0;
}