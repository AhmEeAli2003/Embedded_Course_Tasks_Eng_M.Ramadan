/*
	Write a C program to input two numbers from user and find their power using pow() function.
*/

#include <stdio.h>
#include <math.h>


//double power(double base, double exponent);

void main(void)
{
	double base = 0.0, exponent = 0.0;
	printf("Enter base: ");
	scanf("%lf", &base);
	printf("Enter exponent: ");
	scanf("%lf", &exponent);
	
	printf("%.2lf ^ %.2lf = %.2lf \n", base, exponent, pow(base, exponent));
}

/******* User define function *************
//Logical Error 
double power(double base, double exponent)
{
	double temp = base;
	int i = 0;
	
	if (exponent == 0) 
	{
		return 1;
	}
	else if(exponent > 0)
	{
		if(exponent == 1) 
		{
			return base;
		}
		else
		{
			for ( i = 1; i < exponent; i++) 
			{
				base *= temp;
			}
			return base;
		}
	}
	else if (exponent < 0)
	{
		exponent = abs(exponent);
		for (i = 1; i < exponent; i++) 
		{
			base *= temp;
		}
		return (1.0/base);
	}
	else {}
}*/