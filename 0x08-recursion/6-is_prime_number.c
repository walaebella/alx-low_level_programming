#include"main.h"

/**
 * check - check a number if is prime or not
 * @x: number input
 * @y: number input
 * Return: 1 or -1
 */

int check(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	else
		return (check(x + 1, y));
}

/**
 * is_prime_number - check if a number prime
 * @n: number to check
 * Return: 1 if is prime otherwise return 0
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
