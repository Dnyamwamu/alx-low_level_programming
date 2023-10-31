#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of your program.
 * @ac: The argument count.
 * @av: An array of strings (arguments).
 *
 * Return: A pointer to a new string containing the
 * concatenated arguments
 * separated by newlines, or NULL if ac is 0 or av is
 * NULL, or if memory
 * allocation fails.
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int i, j;
	char *concatenated;
	int pos = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			total_length++;
			j++;
		}
		total_length++;
	}
	total_length++;
	concatenated = malloc(total_length * sizeof(char));
	if (concatenated == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			concatenated[pos] = av[i][j];
			pos++;
			j++;
		}
		concatenated[pos] = '\n';
		pos++;
	}
	concatenated[pos] = '\0';
	return (concatenated);
}
