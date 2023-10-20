#include <stdio.h>
#include <math.h>

/**
 * is_prime - Check if a number is prime.
 * @num: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime(long num)
{
	if (num <= 1)
	{
		return 0;
	}
	if (num <= 3)
	{
		return 1;
	}
	if (num % 2 == 0 || num % 3 == 0)
	{
		return 0;
	}

	for (long i = 5; i * i <= num; i += 6)
	{
		if (num % i == 0 || num % (i + 2) == 0)
		{
			return 0;
		}
	}

	return 1;
}

/**
 * main - Entry point for the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	long num = 612852475143;
	long largest_prime = 2;
	long i;

	while (num > 1)
	{
		for (i = 5; i * i <= num; i += 6)
		{
			if (num % i == 0 || num % (i + 2) == 0)
			{
				break;
			}
		}
		if (i * i <= num && (num % i == 0 || num % (i + 2) == 0))
		{
			largest_prime = i;
			num /= i;
		}
		else
		{
			largest_prime = num;

			break;
		}
	}

	printf("%ld\n", largest_prime);

	return 0;
}
