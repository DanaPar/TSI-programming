#include <iostream>
using namespace std;

int main(){
    int x;

    cout << "Enter x: ";
    cin >> x;

    int result;
    if (x > 3)
        result = x * x + 5;
    else
        result = x - 8;


    cout << "Y is " << result;

    return 0;
}