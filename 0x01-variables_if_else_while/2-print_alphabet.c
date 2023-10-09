#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Writes a program that prints the alphabet in
 * lowercase
 *
 * Return: always 0
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
		putchar('\n');

	return (0);
}
