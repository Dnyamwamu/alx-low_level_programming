#include <stdio.h>

/**
 * print_array - Prints n elements of an arra
 * of integers, followed by a new line.
 * @a: A pointer to an array of integers.
 * @n: The number of elements to print.
 */
void print_array(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
