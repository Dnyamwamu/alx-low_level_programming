/**
 * string_toupper - Change all lowercase letters to uppercase in a string
 * @str: The string to be modified
 *
 * Return: A pointer to the modified string (str)
 */
char *string_toupper(char *str)
{
	char *result = str;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}
	return (result);
}
