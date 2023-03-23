#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 * Return: printed numbers
 */

void print_numbers(void)
{
	int i = 0, j = 9;

	while (i <= j)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
