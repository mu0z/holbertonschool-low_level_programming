#include <stdio.h>

/**
 * main - entry point
 *
 * prints the alphabet in lowercase and uppercase followed by a \n
 *
 * Return: always 0
 */

int main(void)
{
	char character;
	char character2;

	character = 'a';
	character2 = 'A';

	while (character <= 'z')
	{
		putchar(character);
		character++;
	}

	while (character2 <= 'Z')
	{
		putchar(character2);
		character2++;
	}

	putchar('\n');

	return (0);
}
