#include"main.h"

/**
 * print_most_numbers - print from 0 to 9 except 2 and 4
 * Return: printed numbers
 */

void print_most_numbers(void)
{
	int i = 0, j = 9;

	while (i <= j)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
