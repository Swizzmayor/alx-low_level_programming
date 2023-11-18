#include "main.h"

/**
 * _strncat - function concatenates two strings
 * @dest: input
 * @src: input
 * @n: number of bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int p = 0, q;

	while (dest[p] != '\0')
	{
		p++;
	}

	q = 0;

	while (q < n && src[q] != '\0')
	{
		dest[p] = src[q];
		p++;
		q++;
	}

	dest[p] = '\0';
	return (dest);
}
