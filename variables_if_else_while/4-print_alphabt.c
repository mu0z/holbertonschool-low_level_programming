#include <stdio.h>

/**
 * main - the program prints the alphabet in uppercase & lowercase
 * omitting the letters "q" and "e" followed by a new line
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char lower;

	lower = 'a';
	while (lower <= 'z')
	{
		if (lower != 'q' && lower != 'e')
			putchar (lower);
		lower++;
	}

	putchar('\n');
	return (0);
}
