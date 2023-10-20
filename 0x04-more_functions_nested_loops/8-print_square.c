#include "main.h"

/**
 * print_square - Prints a square made of '#'
 * characters in the terminal.
 * @size: The size of the square.
 *
 * Description: This function prints a square of '#'
 * characters in the terminal.
 * If size is 0 or less, it will print only a newline character.
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int row, column;

		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
