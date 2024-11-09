#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter start of the range: ";
    cin >> a;
    cout << "Enter end of the range: ";
    cin >> b;

    for (float i = a; i <= b; i += 0.5)
        cout << i << endl;

    return 0;
}