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
	
	while (i <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		i++;
	}
}
