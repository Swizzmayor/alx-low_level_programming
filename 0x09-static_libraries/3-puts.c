#include "main.h"

/**
 * _puts - function prints a string to the standard output
 * @str: string input
 * _putchar prints a new line
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
