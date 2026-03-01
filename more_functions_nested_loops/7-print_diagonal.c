#include "main.h"

/**
 * print_diagonal - prints a diagonal line on the terminal
 * @n : length of diagonal line
 */

void print_diagonal(int n)
{
	int space;
	int length;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (length = 0; length < n; length++)
		{
			for (space = 0; space < length; space++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
