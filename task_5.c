/*
	Write a C program to input two numbers from user and find their power using pow() function.
*/

#include <stdio.h>
#include <math.h>

void main(void)
{
	double base = 0.0, exponent = 0.0;
	printf("Enter base: ");
	scanf("%lf", &base);
	printf("Enter exponent: ");
	scanf("%lf", &exponent);
	
	printf("%.2lf ^ %.2lf = %.2lf \n", base, exponent, pow(base, exponent));
}
