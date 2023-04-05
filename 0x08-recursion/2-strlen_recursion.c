#include"main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: a string
 * Return: l
 */

int _strlen_recursion(char *s)
{
	int l;

	l = 0;
	if (*s)
	{
		l += _strlen_recursion(s + 1);
		l++;
	}
	return (l);
}
