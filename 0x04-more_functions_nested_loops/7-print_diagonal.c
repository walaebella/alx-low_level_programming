#include"main.h"

/**
 * print_diagonal -draws diagonal line
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int c = 0, i = 0, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (c < n)
		{
			j = c;
			while (i <= j)
			{
				if (i == j)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else
					_putchar(' ');
				i++;
			}
			i = 0;
			c++;
		}
	}
}
