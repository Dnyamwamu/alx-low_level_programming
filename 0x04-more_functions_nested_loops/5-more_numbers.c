#include "main.h"

/**
 * more_numbers - Prints the numbers from 0 to 14,
 * each repeated 10 times, followed by a new line.
 *
 * Description: This function prints the numbers from
 * 0 to 14, each repeated 10 times,
 * followed by a new line.
 */
void more_numbers(void)
{
	int number, repetition;

	for (repetition = 0; repetition < 10; repetition++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number > 9)
			{
				_putchar((number / 10) + '0');
			}
			_putchar((number % 10) + '0');
		}
		_putchar('\n');
	}
}
