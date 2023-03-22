#include"main.h"

/**
 * times_table - print the 9 times table
 * Return: output
 */
void times_table(void)
{
	int x, y, d;

	for (x = 0; x <= 9; x++)
	{
		_putchar(48);
		for (y = 1; y <= 9; y++)
		{
			_putchar(',');
			_putchar(' ');
			d = x * y;

			if (d <= 9)
				_putchar(' ');
			else
				_putchar((d / 10) + 48);
			_putchar((d % 10) + 48);
		}
		_putchar('\n');
	}
}
