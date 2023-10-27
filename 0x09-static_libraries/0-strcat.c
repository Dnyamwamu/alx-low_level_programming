/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string to append
 *
 * Return: A pointer to the destination string
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = _strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
