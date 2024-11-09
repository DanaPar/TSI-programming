#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter start of the range: ";
    cin >> a;
    cout << "Enter end of the range: ";
    cin >> b;

    int sum = 0;
    for (int i = a; i <= b; i++)
        if (i % 3 == 0)
            sum += i;

    cout << "Sum is " << sum << endl;

    return 0;
}