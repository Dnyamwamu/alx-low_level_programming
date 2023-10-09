#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Write a program tha prints all
 * possible combination of single-digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j;
	
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
