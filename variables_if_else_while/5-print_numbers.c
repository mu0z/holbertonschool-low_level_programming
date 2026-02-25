#include <stdio.h>

/**
 * main - entry point
 *
 * prints all single digit numbers of base 10 starting from 0
 *
 * Return: always 0
 */

int main(void)
{
	int digit;

	digit = '0';

	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}

	putchar('\n');

	return (0);
}
