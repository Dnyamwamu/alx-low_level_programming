#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output (stdout).
 *
 * @c: The character to be written.
 *
 * Return: On success, returns the character written. On error, returns -1.
 */
int _putchar(char c);

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	const char *file = __FILE__;
	int i = 0;

	while (file[i] != '\0')
	{
		_putchar(file[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
