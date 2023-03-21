#include"main.h"

/**
 * _abs -  the absolute value
 * @b: compare integer
 * Return: Always b
 */

int _abs(int b)
{
	if (b < 0)
		b = (-1) * b;
	else if (b >= 0)
		b = b;
	return (b);
}
