#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times, each time followed
 * by a newline, in lowercase
 */

void print_alphabet_x10(void)
{
	int xt;
	char character;

	for (xt = 0; xt < 10; xt++)
	{
		for (character = 'a'; character <= 'z'; character++)
		{
			_putchar(character);
		}

		_putchar('\n');
	}

}
