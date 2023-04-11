#include"main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * free_grid - frees two dimensional grid previously created by alloc_grid
 * @grid: double pointer 2 dim
 * @height: rows
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

			free(grid);
}
