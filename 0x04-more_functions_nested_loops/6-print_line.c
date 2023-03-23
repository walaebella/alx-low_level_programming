#include"main.h"

/**
 * print_line - draws a straight line
 * @n: number of times the character _ should be printed
 * Return: printed
 */

void print_line(int n)
{
	int c = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (c < n)
		{
			_putchar('_');
			c++;
		}
		_putchar('\n');
	}
}
