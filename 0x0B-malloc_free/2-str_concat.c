#include "main.h"
#include <stdlib.h>

/**
 * st_concat - function concatenates two strings
 * @s1: string input
 * @s2: string input
 * Return: s1 and s2 concatenation
 */

char *str_concat(char *s1, char *s2)
{
	char *c;
	int i, d;

	if (s1 == NULL)
		s2 = "";

	i = d = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[d] != '\0')
		d++;

	c = malloc(sizeof(char) * (i + d + 1));

	if (c == NULL)
		return (NULL);

	i = d = 0;

	while (s1[i] != '\0')
	{
		c[i] = s1[i];
		i++;
	}
	while (s2[i] != '\0')
	{
		c[i] = s2[d];
		i++, d++;
	}
	c[i] = '\0';
	return (c);
}
