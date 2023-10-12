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
	int i = 0;
	
	while (i < 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		letter = 'a';
		i++;
	}
       
	_putchar('\n');
}
