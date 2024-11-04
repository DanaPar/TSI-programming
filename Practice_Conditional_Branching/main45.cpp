#include <iostream>
using namespace std;

int main() {
    int time;

    cout << "Input time: ";
    cin >> time;

    // places
    //maiznica 07:00-13:00 un 15:00-19:00
    //maizes veikals 08:00-14:00 un 16:00-20:00
    //gastronomijas veikals 08:00-24:00

    if ((time >= 7 && time < 13) || (time >= 15 && time < 19))
        cout << "Go to maiznīca";
    else if ((time >= 8 && time < 14) || (time >= 16 && time < 20))
        cout << "Go to Maizes veikals";
    else if(time >= 8 && time < 24)
        cout << "Go to Gastronoms";
    else
        cout << "Stay at home!";

    return 0;
}