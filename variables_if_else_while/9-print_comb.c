#include <stdio.h>

/**
 * main - entry point
 *
 * prints all possible combinations of single digit numbers separated by ","
 *
 * Return: always 0
 */

int main(void)
{
	int digit;

	digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		if (digit < 9)
			putchar(',');
		putchar(' ');
		digit++;
	}

	putchar('\n');

	return (0);
}
