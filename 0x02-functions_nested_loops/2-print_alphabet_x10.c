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
	
	for (int i = 0; i < 10; i++)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		letter = 'a';
	}
	_putchar('\n');
}
