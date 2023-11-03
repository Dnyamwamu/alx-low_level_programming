#include <stdio.h>
#include <stdlib.h>

/**
 * _putchar - Writes a character to stdout
 * @c: The character to print
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c);

/**
 * is_digit - Checks if a string is a valid positive integer.
 * @str: The string to check.
 *
 * Return: 1 if it's a positive integer, 0 otherwise.
 */
int is_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - Multiplies two positive numbers.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, 98 on incorrect usage, or 98 on non-integer inputs.
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (98);
	}
	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (98);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
