/*
 write a code to take two numbers from user then swap them
*/

#include <stdio.h>

void main(void)
{
	int number_1 = 0, number_2 = 0, temp = 0;
	printf("Enter Two values: ");
	scanf("%d%d", &number_1, &number_2);
	
	/*********** First Method to swap ***********/
	number_1 = number_1 + number_2;
	number_2 = number_1 - number_2;
	number_1 = number_1 - number_2;
	
	printf("%d\t%d", number_1, number_2);
	
	/*********** Second Method to swap ***********
	number_1 = number_1 * number_2;
	number_2 = number_1 / number_2;
	number_1 = number_1 / number_2;
	
	printf("%d\t%d", number_1, number_2);*/
	
	/*********** Third Method to swap ***********
	number_1 = number_1 ^ number_2;
	number_2 = number_1 ^ number_2;
	number_1 = number_1 ^ number_2;
	
	printf("%d\t%d", number_1, number_2);*/
	
	/*********** Fourth Method to swap ***********
	// same as number_1 = number_1 + number_2
    number_1 = (number_1 & number_2) + (number_1 | number_2);
    // same as number_2 = number_1 - number_2
    number_2 = number_1 + (~number_2) + 1;
    // same as number_1 = number_1 - number_2
    number_1 = number_1 + (~number_2) + 1;
	
	printf("%d\t%d", number_1, number_2);*/
	
	/********** Fifth Method to swap *************
	temp = number_1;
	number_1 = number_2;
	number_2 = temp;
	
	printf("%d\t%d", number_1, number_2);*/
}