#include <unistd.h>

/**
 * _putchar - Write a character to stdout
 * @c: The character to print
 *
 * Return: 1 on success, -1 on error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - Entry point of the program
 * @argc: Number of command line arguments
 * @argv: Array of command line argument strings
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; argv[0][i] != '\0'; i++)
		{
			_putchar(argv[0][i]);
		}
		_putchar('\n');
		return (0);
	}
	else
	{
		return (1);
	}
}
