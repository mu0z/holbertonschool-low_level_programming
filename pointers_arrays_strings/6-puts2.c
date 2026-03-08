#include "main.h"

/**
 * puts2 - prints every 2 characters of a string
 * @str: pointer to the string
 */

void puts2(char *str)
{
	int s = 0;

	while (str[s] != '\0')
	{
		_putchar(str[s]);
		s = s + 2;
	}
	_putchar('\n');
}
