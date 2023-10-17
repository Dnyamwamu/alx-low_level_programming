/**
 *_strlen - Returns the length of a string
 * @s: A pointer to a string.
 *
 * This function calculates and returns the length
 * of the input string.
 * The length is determined by counting the characters
 * in the string
 * until the null-terminating character '\0' is encountered.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return length;
}
