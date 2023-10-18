#include "main.h"
/**
 * print_numbers - Aprogram that Prints numbers 0 - 9
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
