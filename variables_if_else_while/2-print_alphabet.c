#include <stdio.h>

/**
 * main - entry point
 *
 * prints the alphabet in lowercase followed by a \n
 *
 * Return: always 0
 */

int main(void)
{
	char character;

	character = 'a';

	while (character <= 'z')
	{
		putchar(character);
		character++;
	}

	putchar('\n');

	return (0);
}
