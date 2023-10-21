/**
 * _strncpy - Copy a string with a specified maximum length
 * @dest: The destination string where src will be copied to
 * @src: The source string to be copied
 * @n: The maximum number of bytes to copy from src
 *
 * Return: A pointer to the resulting copied string (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (result);
}
