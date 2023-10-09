#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Writes a program that
 * prints all single didgit numbers of base 10 starting
 * from 0
 *
 * Return: always 0
 */
int main(void)
{
	char digit = '0';

	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}

	putchar('\n');

	return (0);
}
