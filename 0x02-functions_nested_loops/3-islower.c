#include"main.h"

/**
 * _islower - function to print characters lowercase
 *
 * @c: checks input of function
 *
 * Return: 1 if c lowecase otherwise return 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
