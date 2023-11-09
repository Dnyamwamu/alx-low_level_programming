#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *current_str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		current_str = va_arg(args, char *);
		if (current_str == NULL)
			printf("(nil)");
		else
			printf("%s", current_str);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
