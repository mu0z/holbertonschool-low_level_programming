#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointer to the string
 */

void rev_string(char *s)
{
	int str = 0;
	int l;
	char t;

	while (s[str] != '\0')
		str++;

	for (l = 0; l < str / 2; l++)
	{
		t = s[l];
		s[l] = s[str - 1 - l];
		s[str - 1 - l] = t;
	}
}
