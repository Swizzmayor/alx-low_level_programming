#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - checks for digits in strings
 * @str: string
 * Return: 0 (success)
 */

int check_num(char *str)
{
	/* declaring variables */
	unsigned int c;

	c = 0;

	while (c < strlen(str)) /* count string */
	{
		if (!isdigit(str[c])) /* checks if there are digits */
		{
			return (0);
		}
		c++;
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument array
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	int c = 1;
	int sti;
	int sum = 0;

	while (c < argc)
	{
		if (check_num(argv[c]))
		{
			sti = atoi(argv[c]);
			sum += sti;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		c++;
	}
	printf("%d\n", sum);
	return (0);
}
