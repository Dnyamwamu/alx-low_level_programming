#include <stdio.h>

/**
 * is_separator - Check if a character is a word separator
 * @c: The character to check
 *
 * Return: 1 if it's a separator, 0 otherwise
 */
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return (1);
		}
	}

	return (0);
}

/**
 * cap_string - Capitalize the first letter of each word in a string
 * @str: The string to be modified
 *
 * Return: A pointer to the modified string (str)
 */
char *cap_string(char *str)
{
	int capitalize = 1;
	int i = 0;

	while (str[i] != '\0')
	{
		if (is_separator(str[i]))
		{
			capitalize = 1;
		}
		else
			if (capitalize && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 'a' + 'A';
				capitalize = 0;
			}
			else
			{
				capitalize = 0;
			}
		i++;
	}
	return (str);
}
