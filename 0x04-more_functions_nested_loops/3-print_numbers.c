#include "_putchar.h"

/**
 * print_numbers - Prints 0 - 9
 */
void print_numbers(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		_putchar(digit);
	}

	_putchar('\n');
}
