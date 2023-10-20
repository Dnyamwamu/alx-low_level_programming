
/**
 * _strncat - Concatenate two strings, with a maximum length
 * @dest: The destination string to which src will be appended
 * @src: The source string to be appended to dest
 * @n: The maximum number of bytes from src to append
 *
 * Return: A pointer to the resulting concatenated string (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';

	return (result);
}
