#include <iostream>
using namespace std;

int main() {
    int weight;

    cout << "Enter weight: ";
    cin >> weight;

    if (weight < 60)
        cout << "Lightweight";
    else if (weight < 64)
        cout << "Welterweight";
    else if (weight < 69)
        cout << "Middleweight";
    else
        cout << "Heavyweight";

    return 0;
}