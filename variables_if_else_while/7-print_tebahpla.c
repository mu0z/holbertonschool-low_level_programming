#include <stdio.h>

/**
 * main - entry point
 *
 * prints the alphabet in lowercase and in reverse followed by a \n
 *
 * Return: always 0
 */

int main(void)
{
	char character;

	character = 'z';

	while (character >= 'a')
	{
		putchar(character);
		character--;
	}

	putchar('\n');

	return (0);
}
