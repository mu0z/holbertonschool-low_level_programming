#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n : number to print the last digit of
 *
 * Return: last digit of @n
 */

int print_last_digit(int n)
{
	int ld;

	if (n > 0)
		ld = (n % 10);
	else if (n < 0)
	{
		ld = -(n % 10);
	}
	return (ld);
}
