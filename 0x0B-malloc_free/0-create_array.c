#include "main.h"
#include <stdlib.h>

/**
 * create_array - function creates an array of chars, and initializes it with
 * a specific char
 * @size: array size
 * @c: char input
 * Description: create an array of size and assign char c
 * Return: pointer to array, NULL for failure
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
