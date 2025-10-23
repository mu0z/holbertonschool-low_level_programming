#include <stdio.h>

/**
 * main - the program prints the alphabet in uppercase & lowercase
 * omitting the letters "q" and "e" followed by a new line
 *
 * Return: always	
 */

int main(void)
{
	char lower;
	char upper;

	lower = 'a';
	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}

	upper = 'A';
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');

	return (0);
}
