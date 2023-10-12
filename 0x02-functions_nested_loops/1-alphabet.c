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

	while (letter <= 'z')
	{
		write(1, &letter, 1);
		letter++;
	}

	write(1, "\n", 1);
}
