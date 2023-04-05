#include"main.h"

/**
 * number - finds the square root
 * @n: natuarl number
 * @q: squareroot
 */
int number(int n, int q)
{
	if (n * n == q)
		return (n);
	if (n == q)
		return (-1);
	return (1 * number(n + 1, q));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: a natural number
 * Return: -1 if not exist
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (number(1, n));
}
