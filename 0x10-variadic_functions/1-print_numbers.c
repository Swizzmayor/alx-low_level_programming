#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function prints numbers, followed by a new line
 * @separator: string to print between numbers
 * @n: number of integers passed into the function
 * @...: variable number of parameters to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int ind;

	va_start(numbers, n);

	for (ind = 0; ind < n; ind++)
	{
		printf("%d", va_arg(numbers, int));

		if (ind != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(numbers);
}
