#include <stdio.h>

/**
 * main - Entrypoint of your app
 *
 * Description: Writes a program that
 * prints all single didgit numbers of base 10 from 0
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}

	putchar('\n');

	return (0);
}
