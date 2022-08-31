/*
	Write a C program to input marks of five subjects and calculate total, average and percentage of all subjects.
*/

#include <stdio.h>

void main(void)
{
	float sub_1, sub_2, sub_3, sub_4, sub_5, total, average;
	float percentage = 0.0;
	
	sub_1 = sub_2 = sub_3 = sub_4 = sub_5 = total = average = 0.0;
	
	printf("Enter five marks [from 0 to 100]: ");
	scanf("%f%f%f%f%f", &sub_1, &sub_2, &sub_3, &sub_4, &sub_5);
	
	total = sub_1 + sub_2 + sub_3 + sub_4 + sub_5;
	average = total / 5;
	percentage = (total / 500) * 100; // percentage = average; is True also
	printf("Total = %.2f \n", total);
	printf("Average = %.2f \n", average);
	printf("Percentage = %.2f%% \n", percentage);
}