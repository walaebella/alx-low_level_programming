#include"main.h"
#include<stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of strings
 * @width: column
 * @height: row
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i, j, k, r = 0;
	int **s;

	if (width <= 0 || height <= 0)
		return (0);
	s = malloc(height * sizeof(int *));
	if (s == 0)
		return (0);
	for (i = 0; i < height; i++)
	{
		*(s + i) = malloc(width * sizeof(int));
		if (*(s + i) == 0)
		{
			r = 1;
			break;
		}
		for (j = 0; j < width; j++)
		{
			s[i][j] = 0;
		}
	}
	if (r == 1)
	{
		for (k = 0; k <= i; k++)
		{
			free(*(s + k));
		}
		free(s);
	}
	return (s);
}
