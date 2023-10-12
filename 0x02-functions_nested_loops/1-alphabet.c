#include "main.h"
/**
 * main - Entry point of tha app
 *
 * Description: Writes a func that prints
 * the alphabet in lowercase followed by a new line
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char letter = 'a';
	char newline = '\n';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar(newline);
}
