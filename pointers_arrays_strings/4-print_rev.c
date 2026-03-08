#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to the string
 */

void print_rev(char *s)
{
	int str = 0;
	int l;

	while (s[str] != '\0')
	{
		str++;
	}

	for (l = str - 1; l >= 0; l--)
		_putchar(s[l]);

	_putchar('\n');
}
