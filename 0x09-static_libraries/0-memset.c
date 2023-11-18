#include "main.h"

/**
 * _memset - function stores value in a block of memory
 * @s: string input
 * @b: char input
 * @n: number of bytes to be changed
 * Return: array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int A = 0;

	for (; n > 0; A++)
	{
		s[A] = b;
		n--;
	}
	return (s);
}
