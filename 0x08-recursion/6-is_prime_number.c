/**
 * is_prime_helper - It's a helper
 * @n: The integer to check for primality.
 * @divisor: The integer to check divisor
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_helper(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (divisor <= 2)
	{
		return (1);
	}
	else if (n % divisor == 0)
	{
		return (0);
	}
	else if (divisor * divisor > n)
	{
		return (1);
	}
	else
	{
		return (is_prime_helper(n, divisor - 1));
	}
}

/**
 * is_prime_number - Check if an integer is a prime number.
 * @n: The integer to check for primality.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, n - 1));
}
