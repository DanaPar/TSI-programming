#include <iostream>
using namespace std;

int main() {
    int amount, discount;

    cout << "Enter amount of purchase: ";
    cin >> amount;

    if (amount >= 500)
        discount = 20;
    else if (amount >= 200)
        discount = 10;
    else
        discount = 0;

    int sum = amount - (amount * discount / 100);

    cout << discount << "% discount applied. You need to pay " << sum << " euros." << endl;

    return 0;
}