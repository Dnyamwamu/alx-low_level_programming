#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes
 * it with a specific char.
 * @size: The size of the array.
 * @c: The character used for initialization.
 *
 * Returns: A pointer to the array, or NULL if it fails.
 * If size is 0, it returns NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *new_array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	new_array = malloc(size + 1);
	if (new_array)
	{
		for (i = 0; i < size; i++)
		{
			new_array[i] = c;
		}
		new_array[size] = '\0';
	}
	return (new_array);
}
