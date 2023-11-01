#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: The character to print
 * Return: On success 1, on error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	char *name = argv[0];
	(void)argc;

	for (i = 0; name[i] != '\0'; i++)
	{
		_putchar(name[i]);
	}
	_putchar('\n');
	return (0);
}
