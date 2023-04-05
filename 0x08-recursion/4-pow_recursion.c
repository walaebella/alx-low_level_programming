#include"main.h"

/**
 * _pow_recursion - returns the value of a number raised to a power
 * @x: a number
 * @y: a power
 * Return: 1 or -1 or x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, (y - 1)));
}
