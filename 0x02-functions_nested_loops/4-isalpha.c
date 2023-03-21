#include"main.h"

/**
 * _isalpha - checks if a letter is lowercase or uppercase
 * @c: check character
 * Return: 1 if is alphabet otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c >= 90))
		return (1);
	else
		return (0);
}
