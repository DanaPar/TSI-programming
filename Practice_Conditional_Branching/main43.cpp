#include <iostream>
using namespace std;

int main() {
    int t;

    cout << "Enter minutes from start: ";
    cin >> t;

    //one full cycle is 5minutes
    //m-place in cycle
    int m = t % 5;

    if (m >= 3 && m < 5)
        cout << "Red light!";
    else
        cout << "Green light!";

    return 0;
}