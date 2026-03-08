#include "main.h"

/**
 * _strcpy - copy the string pointed to by src,
 * including the terminating null byte to dest
 *
 * @dest: destination buffer
 * @src: source string
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int cpy = 0;

	while (src[cpy] != '\0')
	{
		dest[cpy] = src[cpy];
		cpy++;
	}
	dest[cpy] = '\0';

	return (dest);
}

