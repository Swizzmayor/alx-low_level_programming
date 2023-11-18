#include "main.h"

/**
 * _strcpy - function copies string pointed to by src
 * @dest: copy into
 * @src: copy from
 * Return: string value
 */

char *_strcpy(char *dest, char *src)
{
	int p = 0;
	int q = 0;

	while (*(src + p) != '\0')
	{
		p++;
	}

	for (; q < p; q++)
	{
		dest[q] = src[q];
	}

	dest[p] = '\0';
	return (dest);
}
