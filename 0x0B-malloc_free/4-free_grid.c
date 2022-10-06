#include "main.h"
#include <stdlib.h>

/**
 * free_grid - prints a grid of intergers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
