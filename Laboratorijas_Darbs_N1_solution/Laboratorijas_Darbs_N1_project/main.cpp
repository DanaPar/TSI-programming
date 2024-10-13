#include <stdio.h>
#include <cmath>

int main()
{
	//declaring variables
	int alpha;
	float z1, z2;
	//gather inputs
	printf("Input radians: ");
	scanf_s("%i", &alpha);
	//do math
	z1 = 1 - (1.0 / 4.0) * pow(sin(2 * alpha), 2) + cos(2 * alpha);
	z2 = pow(cos(alpha), 2) + pow(cos(alpha), 4);
	//show output
	printf("%f\n", z1);
	printf("%f", z2);
}