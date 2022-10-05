#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of intergers
 * @width: width of grid 
 * @height: height of grid 
 *
 * Return: Nothing
 */

int **alloc_grid(int width, int height)
{
	int **alloc_grid;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	alloc_grid = malloc(height *sizeof(int *));
	if (alloc_grid == NULL)
	{
		free(alloc_grid);
		return (NULL);
	}

	for (i = 0; i <height; i++)
	{
		alloc_grid[i] = malloc(width * sizeof(int));
		if (alloc_grid[i] == NULL)
	{
		for (i--; i >= 0; i--)
			free(alloc_grid[i]);
		free(alloc_grid);
		return (NULL);
	}
}

	for (i = 0; i < height; i++)
	for (j = 0; j < width; j++)
		gridout[i][j] =0;

	return (alloc_grid);
}
