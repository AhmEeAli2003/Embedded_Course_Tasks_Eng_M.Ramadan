/*
	Write a C code that will ask user to enter two values (Floating numbers) and print their multiply.
*/

#include <stdio.h>

void main(void)
{
	float number_1 = 0.0, number_2 = 0.0;
	printf("Enter Two values: ");
	scanf("%f%f", &number_1, &number_2);
	printf("%.2f * %.2f = %.2f \n", number_1, number_2, number_1 * number_2);
	
}