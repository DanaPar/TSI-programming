#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter start of the range: ";
    cin >> a;
    cout << "Enter end of the range: ";
    cin >> b;

    int sum = 0;
    int count = 0;
    for (int i = a; i <= b; i++) {
        sum += i;
        count++;
    }

    cout << "Average is " << sum / count << endl;

    return 0;
}
