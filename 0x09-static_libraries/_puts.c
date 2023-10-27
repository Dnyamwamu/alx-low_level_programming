#include <unistd.h>

/**
 * _puts - Writes a string to stdout
 * @s: The string to write
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
}
