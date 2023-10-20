#include "main.h"

/**
 * print_triangle - Prints a triangle made of '#'
 * characters in the terminal.
 * @size: The size of the triangle.
 *
 * Description: This function prints a triangle of '#'
 * characters in the terminal.
 * If size is 0 or less, it will print only a newline character.
 */
void print_triangle(int size)
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
			for (column = 0; column <= row; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
