#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 * followed by a new line
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i;
	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	
	printf("\n");

	return (0);
}

