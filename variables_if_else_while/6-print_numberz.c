#include <stdio.h>

/**
 * main - print all single digit numbers of base 10
 * using the putchar function
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}

	putchar('\n');

	return (0);
}

