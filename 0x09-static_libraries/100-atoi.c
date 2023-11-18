#include "main.h"

/**
 * _atoi - function converts a string to an integer
 * @s: string input
 * Return: integer
 */

int _atoi(char *s)
{
	int p = 1;
	int q = 0;
	unsigned int r = 0;

	while (!(s[q] <= '9' && s[q] >= '0') && s[q] != '\0')
	{
		if (s[q] == '-')
			p *= -1;
		q++;
	}

	while (s[q] <= '9' && (s[q] >= '0' && s[q] != '\0'))
	{
		r = (r * 10) + (s[q] - '0');
		q++;
	}

	r *= p;
	return (r);
}
