/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The string containing the bytes to be matched.
 *
 * Return: The number of bytes in the initial segment of
 * 's' consisting only of bytes from 'accept'.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int found = 1;

	while (*s && found)
	{
		char *a = accept;

		found = 0;

		while (*a)
		{
			if (*s == *a)
			{
				length++;
				found = 1;

				break;
			}
			a++;
		}
		s++;
	}

	return (length);
}
