#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase followed by a \n
 */

void print_alphabet(void)
{
	char character;

	character = 'a';

	while (character <= 'z')
	{
		_putchar(character);
		character++;
	}

	_putchar('\n');

}
