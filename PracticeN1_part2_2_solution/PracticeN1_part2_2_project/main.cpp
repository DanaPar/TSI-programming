#include <stdio.h>

int main()
{
	//declare variables
	const float PI = 3.1416;
	int radius;
	float area;
	//gather user inputs
	printf("Enter input data:\n\n");
	printf("Circle radius (cm) -> ");
	scanf_s("%i", &radius);
	//do the math
	area = PI * (radius * radius);
	//output result
	printf("\nArea of the circle is %.4f sq.cm\n", area);
	return 0;
}