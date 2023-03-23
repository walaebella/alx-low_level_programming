#include "main.h"

/**
 * print_triangle - print triangle
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int i = 0, j = size, c;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (c = 0; c < j; c++)
		{
			while (i < j)
			{
				if ((i + c + 1) >= j)
					_putchar('#');
				else
					_putchar(' ');
				i++;
			}
			i = 0;
			_putchar('\n');
		}
	}
}
