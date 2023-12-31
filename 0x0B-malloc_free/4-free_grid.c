#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - function creates a 2 dimensional grid
 * @grid: double pointer to grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

