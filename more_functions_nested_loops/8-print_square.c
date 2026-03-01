#include "main.h"

/**
 * print_square - prints a square
 * @size : size of square
 */

void print_square(int size)
{
	int row;
	int col;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (col = 0 ; col < size ; col++)
		{
			for (row = 0 ; row < size ; row++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
