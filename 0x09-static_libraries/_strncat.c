/**
 * _strncat - Concatenates n characters of a string to another string
 * @dest: The destination string
 * @src: The source string to append
 * @n: The maximum number of characters to append
 *
 * Return: A pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
