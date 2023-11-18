#include "main.h"

/**
 * _isalpha - function checks for alphabet
 * @c: input
 * Return: 1 if c is an alphabet, else return 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
