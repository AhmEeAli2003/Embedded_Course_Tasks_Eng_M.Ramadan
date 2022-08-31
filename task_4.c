/*
	Write a C program to input length ansd width of a rectangle and calculate perimeter of the rectangle. 
*/

#include <stdio.h>

void main(void)
{
	float length = 0.0, width = 0.0;
	
	printf("Enter length of a rectangle: ");
	scanf("%f", &length);
	printf("Enter width of a rectangle : ");
	scanf("%f", &width);
	
	printf("perimeter of the rectangle = %.2f \n", (length + width) * 2);
}