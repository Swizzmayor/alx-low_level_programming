#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator -function executes a function given as a parameter on each
 * element of an array
 * @array: array
 * @size: how many elememnts to print
 * @action: pointer to print in regular or hex
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int ui;

	if (array == NULL || action == NULL)
		return;

	for (ui = 0; ui < size; ui++)
	{
		action(array[ui]);
	}
}
