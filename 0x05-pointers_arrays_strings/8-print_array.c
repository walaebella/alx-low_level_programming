#include"main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array of integers
 * @a: array to print
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int k = 0;

	while (k < n)
	{
		printf("%d", a[k]);
		if (k != (n - 1))
			printf(", ");
		k++;
	}
	putchar('\n');
}
