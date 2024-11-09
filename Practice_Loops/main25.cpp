#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter start of the range: ";
    cin >> a;
    cout << "Enter end of the range: ";
    cin >> b;

    int count = 0;
    for (int i = a; i <= b; i++)
        if (i % 3 == 0)
            count++;

    cout << "Count of numbers which is divisible by 3 in range is " << count << endl;

    return 0;
}