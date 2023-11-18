#include "main.h"

/**
 * _strncpy - function copies a string
 * @dest: input
 * @src: input
 * @n: number of bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int cp = 0;

	while (cp < n && src[cp] != '\0')
	{
		dest[cp] = src[cp];
		cp++;
	}
	return (dest);
}
