#include"variadic_functions.h"
#include<stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 *
 * Return: 0 if n == 0 otherwise sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list m;
	unsigned int i, sum = 0;

	va_start(m, n);

	for (i = 0; i < n; i++)

		sum += va_arg(m, int);

	va_end(m);

	return (sum);
}
