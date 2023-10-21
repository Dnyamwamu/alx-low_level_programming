#include <stdio.h>

/**
 * rot13 - Encode a string using ROT13
 * @str: The string to be encoded
 *
 * Return: A pointer to the encoded string (str)
 */
char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		char c = str[i];

		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		{
			char base = (c >= 'a' && c <= 'z') ? 'a' : 'A';

			str[i] = (c - base + 13) % 26 + base;
		}
	}

	return (str);
}
