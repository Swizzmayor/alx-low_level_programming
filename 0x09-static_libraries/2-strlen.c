#include "main.h"

/**
 * _strlen - function returns length of a string
 * @s: input
 * Return: string length
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
