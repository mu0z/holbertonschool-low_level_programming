#include <stdio.h>

/**
 * main - entry point
 *
 * prints the alphabet in lowercase, omitting the letters q & e
 *
 * Return: always 0
 */

int main(void)
{
	char character;

	character = 'a';

	while (character <= 'z')
	{
		if (character == 'q' || character == 'e')
			character++;
		else
			putchar(character);
			character++;
	}

	putchar('\n');

	return (0);
}
