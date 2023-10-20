#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal.
 * @n: The number of times the character '\' should be printed.
 *
 * Description: This function prints a diagonal line of
 * backslashes in the terminal.
 * If n is 0 or less, it will print only a newline character.
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int spaces, i;

		for (spaces = 0; spaces < n - 1; spaces++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');

		for (i = 1; i < n; i++)
		{
			for (spaces = 0; spaces < n - i - 1; spaces++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
