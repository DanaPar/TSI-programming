#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter amount of Hello: ";
    cin >> number;

    for (int i = 1; i <= number; i++)
        cout << "Hello" << endl;

    return 0;
}
