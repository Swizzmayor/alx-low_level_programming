#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - function checks if an integer is a prime number
 * @n: integer input
 * Return: 1 if n is a prime number, else return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - recurses if number is a prime number
 * @n: integer input
 * @i: integer input(iterator)
 * Return: 1 if n is a prime number, else return 0
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
