#include <iostream>
using namespace std;

int main() {
    int points;

    cout << "Enter points: ";
    cin >> points;

    if (points == 3)
        cout << "Win!";
    else if (points == 1)
        cout << "Draw!";
    else if (points == 0)
        cout << "Lose!";

    return 0;
}