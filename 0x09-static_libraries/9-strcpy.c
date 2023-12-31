/**
 * _strcpy - Copies a string to a buffer
 * @dest: The destination buffer
 * @src: The source string to copy
 *
 * Return: A pointer to the destination buffer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
