#include <iostream>
using namespace std;

int main() {
    int suit, rank;
    string suitName, rankName;
    bool isError = false;

    cout << "Enter the suit of card: ";
    cin >> suit;
    cout << "Enter the rank of card: ";
    cin >> rank;

    switch(suit) {
        case 1: suitName = "Spades"; break;
        case 2: suitName = "Clubs"; break;
        case 3: suitName = "Diamonds"; break;
        case 4: suitName = "Hearts"; break;
        default:
            isError = true;
    }

    switch(rank) {
        case 1: rankName = "One"; break;
        case 2: rankName = "Two"; break;
        case 3: rankName = "Three"; break;
        case 4: rankName = "Four"; break;
        case 5: rankName = "Five"; break;
        case 6: rankName = "Six"; break;
        case 7: rankName = "Seven"; break;
        case 8: rankName = "Eight"; break;
        case 9: rankName = "Nine"; break;
        case 10: rankName = "Ten"; break;
        case 11: rankName = "Jack"; break;
        case 12: rankName = "Queen"; break;
        case 13: rankName = "King"; break;
        case 14: rankName = "Ace"; break;
        default:
            isError = true;
    }

    if (!isError)
        cout << rankName << " of " << suitName;
    else
        cout << "Wrong input!";

    return 0;
}