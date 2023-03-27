#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string to print in reverse
 */
void print_rev(char *s)
{
	int i = 0;

	while (*s)
	{
		i++;
		s++;
	}
	while (i)
	{
		s--;
		_putchar(*s);
		i--;
	}
	_putchar('\n');
}
