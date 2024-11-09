#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter start of the range: ";
    cin >> a;
    cout << "Enter end of the range: ";
    cin >> b;

    for (int i = a + 1; i < b; i++)
        cout << i << endl;

    return 0;
}