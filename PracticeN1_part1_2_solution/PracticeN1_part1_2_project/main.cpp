#include <iostream>

using namespace std;

int main()
{
	int a, b;
	int square, sum, subtraction, multiplication;
	float division;
	// user inputs
	cout << "Enter number 1: ";
	cin >> a;
	cout << "Enter number 2: ";
	cin >> b;
	// maths
	square = a * a;
	sum = a + b;
	subtraction = a - b;
	multiplication = a * b;
	division = (float)a / b;
	//final output
	cout << endl << "Square of " << a << " is " << square << endl;
	cout << a << " + " << b << " = " << sum << endl;
	cout << a << " - " << b << " = " << subtraction << endl;
	cout << a << " * " << b << " = " << multiplication << endl;
	cout << a << " / " << b << " = " << division << endl;

	return 0;
}