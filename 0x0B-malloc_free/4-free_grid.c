#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *free_grid - This program frees a two dimensional array
 *@grid: 2d grid
 *@height: Dimensional height of a grid
 *Description: This will free grid memory
 *Return: void
 */
void free_grid(int **grid, int height)
{
	int es;

	for (es = 0; es < height; es++)
	{
		free(grid[es]);
	}

	free(grid);

}

