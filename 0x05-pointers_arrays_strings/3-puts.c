/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: A pointer to a string.
 *
 * This function prints the input string to the standard output followed by a new line.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
