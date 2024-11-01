#include <iostream>
using namespace std;

int main() {
    int km_h, m_s;

    cout << "Enter km/h speed: ";
    cin >> km_h;
    cout << "Enter m/s speed: ";
    cin >> m_s;

    //km/h = m/s * 3.6
    if (km_h > m_s * 3.6)
        cout << km_h << "km/h is faster than " << m_s << "m/s" << endl;
    else if (km_h < m_s * 3.6)
        cout << m_s << "m/s is faster than " << km_h << "km/h" << endl;
    else
        cout << "Speeds are the same!"<< endl;

    return 0;
}