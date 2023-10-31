#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string or
 * NULL if memory allocation fails.
 */
char *_strdup(char *str)
{
	int length = 0;
	int i = 0;
	char *duplicate = malloc((length + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);
	while (str[length] != '\0')
		length++;
	if (duplicate == NULL)
		return (NULL);
	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];
	return (duplicate);
}
