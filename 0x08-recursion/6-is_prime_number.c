/**
 * is_prime_number - Check if an integer is a prime number.
 * @n: The integer to check for primality.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n <= 3)
	{
		return (1);
	}
	else if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}
	else
	{
		int i = 5;

		while (i * i <= n)
		{
			if (n % i == 0 || n % (i + 2) == 0)
			{
				return (0);
			}
			i += 6;
		}
		return (1);
	}
}
