#include <stdio.h>

int main()
{
	int a, b;
	int square, sum, subtraction, multiplication;
	float division;
	printf("Enter number 1: ");
	scanf_s("%i", &a);
	printf("Enter number 2: ");
	scanf_s("%i", &b);
	square = a * a;
	sum = a + b;
	subtraction = a - b;
	multiplication = a * b;
	division = (float)a / b;
	printf("\nSquare of %i is %i\n", a, square);
	printf("%i + %i = %i\n", a, b, sum);
	printf("%i - %i = %i\n", a, b, subtraction);
	printf("%i * %i = %i\n", a, b, multiplication);
	printf("%i / %i = %.2f", a, b, division);
	return 0;
}