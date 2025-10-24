#include <stdio.h>

/**
 * main - print the lowercase alphabet in reverse followed by a new line
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char letter;

	letter = 'z';
	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');

	return (0);
}
