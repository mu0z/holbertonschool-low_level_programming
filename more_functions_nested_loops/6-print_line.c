#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 * @n : length of line
 */

void print_line(int n)
{
	int length;

	length = 1;

	while (length <= n)
	{
		if (length <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
			length++;
		}
	}
	_putchar('\n');
}
