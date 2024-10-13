#include <stdio.h>

int main()
{
	//declare variables
	int base, height;
	float area;
	//gather inputs
	printf("Enter input data:\n\n");
	printf("Enter base of triangle: ");
	scanf_s("%i", &base);
	printf("Enter height of triangle: ");
	scanf_s("%i", &height);
	//do math
	area = (float)1 / 2 * base * height;
	//show output
	printf("\nArea of the triangle is %f sq.cm\n", area);
	return 0;
}