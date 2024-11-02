#include <iostream>
using namespace std;

int main() {
    int suit;

    cout << "Enter the suit of card: ";
    cin >> suit;

    switch(suit) {
        case 1:
            cout << "Spades";
            break;
        case 2:
            cout << "Clubs";
            break;
        case 3:
            cout << "Diamonds";
            break;
        case 4:
            cout << "Hearts";
            break;
        default:
            cout << "wrong number entered";
    }

    return 0;
}