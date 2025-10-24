#include <stdio.h>

/**
 * main - print all possible combinations of single digit numbers
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int sd = 0;

	while (sd <= 9)
	{
	putchar(sd + '0');
	if (sd < 9)
	{
		putchar(',');
		putchar(' ');
	}
	sd++;
	}
	putchar('\n');
	return (0);
}

