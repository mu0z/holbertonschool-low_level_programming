#include "main.h"

/**
 * _puts - prints a string
 * @str: pointer to the string
 */

void _puts(char *str)
{
	int s = 0;

	while (str[s] != '\0')
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}
