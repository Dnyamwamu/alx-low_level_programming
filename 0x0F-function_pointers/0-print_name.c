#include <stdio.h>

/**
 * print_name - Prints a name.
 * @name: The name to print.
 * @f: The function to apply to the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

/**
 * print_upper - Prints a name in uppercase.
 * @name: The name to print.
 */
void print_upper(char *name)
{
	while (*name != '\0')
	{
		if (*name >= 'a' && *name <= 'z')
			putchar(*name - ('a' - 'A'));
		else
			putchar(*name);
		name++;
	}
	putchar('\n');
}

/**
 * print_lower - Prints a name in lowercase.
 * @name: The name to print.
 */
void print_lower(char *name)
{
	while (*name != '\0')
	{
		if (*name >= 'A' && *name <= 'Z')
			putchar(*name + ('a' - 'A'));
		else
			putchar(*name);
		name++;
	}
	putchar('\n');
}
