#include <iostream>
using namespace std;

int main() {
    int n, m;

    cout << "Enter n: ";
    cin >> n;
    cout << "Enter m: ";
    cin >> m;

    int result = n;
    for (int i = 1; i < m; i++)
        result += n;

    cout << result;

    return 0;
}