#include <iostream>
using namespace std;

int main() {
    int x, y;

    cout << "Enter coordinates of M(x, y): ";
    cin >> x >> y;

    if (y > 0) {
        if (x > 0)
            cout << "M(" << x << "," << y << ") is in I (first) quadrant."<< endl;
        else
            cout << "M(" << x << "," << y << ") is in II (second) quadrant."<< endl;
    }
    else {
        if (x < 0)
            cout << "M(" << x << "," << y << ") is in III (third) quadrant." << endl;
        else
            cout << "M(" << x << "," << y << ") is in IV (fourth) quadrant." << endl;
    }

    return 0;

}