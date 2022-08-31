/*
	Write a code that will ask the user to enter the character then print it
	and find ASCII value of this character then print it.
*/

#include <stdio.h>

void main(void)
{
	char Char_Letter = 0;
	short unsigned int  ASCII_Letter = 0;
	
	printf("Enter Character: ");
	scanf("%c", &Char_Letter);
	printf("Charater is %c \n", Char_Letter);
	ASCII_Letter = Char_Letter;
	printf("ASCII of character = %d \n", ASCII_Letter);
}