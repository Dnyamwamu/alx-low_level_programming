#include <stddef.h>

/**
 * int_index - searches for an integer in an array.
 * @array: pointer to the array of integers.
 * @size: number of elements in the array.
 * @cmp: pointer to the function used to compare values.
 *
 * Return: Index of the first element for which the
 * cmp function does not return 0,
 * or -1 if no element matches or if size is less than or equal to 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
		/* Check for invalid input or empty array */
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
			/* Return the index of the first matching element */
		}
	}
	return (-1);
	/* Return -1 if no element matches */
}
