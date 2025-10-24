#include <stdio.h>

/**
 * main - print all the numbers of base 16 in lowercase
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char hex_digits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8',
		'9', 'a', 'b', 'c', 'd', 'e', 'f'};
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(hex_digits[i]);
	}

	putchar('\n');

	return (0);
}

