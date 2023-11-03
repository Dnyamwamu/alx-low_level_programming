#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings with at
 * most n bytes from s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to a newly allocated space in memory
 * with the concatenated
 * string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *concatenated;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1]; len1++)
		;
	for (len2 = 0; s2[len2]; len2++)
		;
	if (n >= len2)
		n = len2;
	concatenated = malloc(len1 + n + 1);
	if (concatenated == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		concatenated[i] = s2[j];
	concatenated[i] = '\0';
	return (concatenated);
}
