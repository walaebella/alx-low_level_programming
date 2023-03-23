#include"main.h"

/**
 * print_square - print square
 * @size: size of the square
 */


void print_square(int size)
{
	int c = 0, i;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			while (c < size)
			{
				_putchar('#');
				c++;
			}
			c = 0;
			_putchar('\n');
		}
	}
}
