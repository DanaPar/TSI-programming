#include <iostream>
using namespace std;

int main() {
    int amount;

    cout << "Enter amount of purchase: ";
    cin >> amount;

    if (amount >= 200)
        {
        int sum = amount - (amount * 0.10);
        cout << "You need to pay " << sum << " euros.";
        }
    else
        cout << "You need to pay " << amount << " euros.";

    return 0;
}