#include <stdio.h>
#include <cmath>

int main()
{
	int alpha;
	double z1, z2;
	printf("Input radians: ");
	scanf_s("%i", &alpha);
	z1 = 1 - (1.0 / 4.0) * pow(sin(2 * alpha), 2) + cos(2 * alpha);
	z2 = pow(cos(alpha), 2) + pow(cos(alpha), 4);
	printf("z1 = %f\n", z1);
	printf("z2 = %f\n\n", z2);
	system("pause");
	return 0;
}