#include "main.h"
/**
 * print_alphabet_x10 - A function definition
 *
 * Description: A program that prints 10 times 
 * the alphabets in lowercase
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	char newline = '\n';
	int count = 0;
	
	while (count < 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		
		count++;
		letter = 'a';
	}
       
	_putchar(newline);
}
