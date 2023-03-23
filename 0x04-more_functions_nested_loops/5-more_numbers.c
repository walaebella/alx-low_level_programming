#include"main.h"

/**
 * more_numbers - print 10 times numbers from 0 to 14
 * Return: numbers printed
 */

void more_numbers(void)
{
	int i = 0, j = 14, c;

	for (c = 1; c <= 10; c++)
	{
		while (i <= j)
		{
			_putchar(i > 9 ? (i / 10) + '0' : i + '0');
			if (i > 9)
				_putchar((i % 10) + '0');
			i++;
		}
		i = 0;
		_putchar('\n');
	}
}
