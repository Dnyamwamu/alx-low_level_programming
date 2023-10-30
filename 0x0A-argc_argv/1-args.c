#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array containing the command-line arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	int count = argc - 1;
	char digit;

	if (count == 0)
	{
		_putchar('0');
	}
	else
	{
		while (count > 0)
		{
			digit = (count % 10) + '0';
			_putchar(digit);
			count /= 10;
		}
	}
	_putchar('\n');
	return (0);
}
