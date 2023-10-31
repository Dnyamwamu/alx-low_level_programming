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
	int i;

	if (str == NULL)
		return (NULL);
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	char *duplicate = (char *)malloc(length + 1);

	if (duplicate == NULL)
		return (NULL);
	for (i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}
	return (duplicate);
}
