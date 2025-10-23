#include <stdio.h>

/**
 * main - prints the alphabet in upper and lowercase
 * followed by a new line
 *
 * Return: always 0 (success)
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

