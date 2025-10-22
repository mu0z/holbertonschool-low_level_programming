#include <stdio.h>

/**
 * main - print the alphabet in lowercase followed by a new line
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}

