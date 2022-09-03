/*
	Write a C program to input any number angd toggle or invert or flip nth bit of the given number using bitwise operator.
*/

#include <stdio.h>

void main(void)
{
	unsigned int number = 0, result = 0, bit = 0;
	
	printf("Enter number: ");
	scanf("%d", &number);
	printf("Enter bit number which need to toggle: ");
	scanf("%d", &bit);
	
	printf("%d \t %d \n", number, bit);
	result = number ^ (1 << bit);
	
	printf("Number after toggle %dth bit = %d \n", bit, result);
}