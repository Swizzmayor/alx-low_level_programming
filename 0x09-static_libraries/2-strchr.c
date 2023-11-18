#include "main.h"

/**
 * _strchr - function checks for characters
 * @s: input
 * @c: input
 * Return: 0 (success)
 */

char *_strchr(char *s, char c)
{
	int a;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
