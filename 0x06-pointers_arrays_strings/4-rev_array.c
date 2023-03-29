#include"main.h"

/**
 * reverse_array - reverse an array
 * @a: array
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int x, y, c;

	y = n - 1;
	for (x = 0; x < n / 2; x++)
	{
		c = a[x];
		a[x] = a[y];
		a[y] = c;
		y--;
	}
}

