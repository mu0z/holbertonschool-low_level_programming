#include <stdio.h>

/**
 * main - entry point
 *
 * prints all numbers of base 16 in lowercase
 *
 * Return: always 0
 */

int main(void)
{
	int digit;

	digit = 0x0;

	while (digit <= 0xf)
	{
		if (digit < 10)
		{
			putchar(digit + '0');
		}
		else
		{
			putchar(digit + 'a' - 10);
		}
		digit++;
	}

	putchar('\n');

	return (0);
}
