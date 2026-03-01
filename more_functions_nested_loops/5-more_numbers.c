#include "main.h"

/**
 * more_numbers - prints 10 times the numbers 1 to 14 followed by \n
 */

void more_numbers(void)
{
	int num;
	int rep;

	for (rep = 1 ; rep <= 10 ; rep++)
	{
		for (num = 0 ; num <= 14 ; num++)
		{
			if (num > 10)
				_putchar(num / 10 + '0');
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
