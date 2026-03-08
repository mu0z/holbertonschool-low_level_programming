#include "main.h"

/**
 * puts_half - prints first half of a string
 * @str: pointer to the string
 */

void puts_half(char *str)
{
	int l = 0;
	int mid;
	int p;

	while (str[l] != '\0')
		l++;

	mid = l / 2;

	for (p = 0; p < mid; p++)
		_putchar(str[p]);

	_putchar('\n');
}
