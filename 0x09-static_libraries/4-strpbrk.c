#include "main.h"

/**
 * _strpbrk - program starting point
 * @s: input
 * @accept: input
 * Return: always 0 (success)
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
