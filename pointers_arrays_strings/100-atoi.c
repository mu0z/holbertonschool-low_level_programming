#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the converted integer
 */

int _atoi(char *s)
{
	int sign = 1;
	int num = 0;
	int start = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s == '+')
			;
		else if (*s >= '0' && *s <= '9')
		{
			start = 1;
			num = num * 10 + (*s - '0');
			if (num < 0)
			{
				return (sign == 1 ? 2147483647 : -2147483648);
			}
		}
		else if (start)
			break;
		s++;
	}

	return (sign * num);
}
