#include "main.h"

/**
 * _isupper - vhek for uppercase character
 * @c: character to check
 *
 * Return: 1 if is uppercase otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
