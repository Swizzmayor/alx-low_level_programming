#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program prints the minimum amount of coins to make change for an
 * amount of money
 * @argc: argument count
 * @argv: argument array
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	int n;
	int o;
	int result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	result = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	for (o = 0; o < 5 && n >= 0; o++)
	{
		while (n >= coins[o])
		{
			result++;
			n -= coins[o];
		}

	}
	printf("%d\n", result);
	return (0);
}

