#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicate a string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL on failure.
 */
char *_strdup(char *str)
{
	size_t length = 0;
	char *duplicate;

	if (str == NULL)
		return (NULL);
	while (str[length] != '\0')
	{
		length++;
	}
	duplicate = (char *)malloc(length + 1);
	if (duplicate == NULL)
		return (NULL);
	for (size_t i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}
	return (duplicate);
}
