#include <iostream>

using namespace std;

int main()
{
	//declare variables
	int width, height, area;
	
	//get input data from user
	cout << "Enter input data: " << endl << endl;
	cout << "Rectangle with (cm) -> ";
	cin >> width;
	cout << "Rectangel height (cm) -> ";
	cin >> height;

	//calculate
	area = width * height;

	//output
	cout << endl << "Area of the rectangle is " << area << " sq.cm";
	return 0;
}