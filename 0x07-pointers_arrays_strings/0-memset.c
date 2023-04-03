#include"main.h"

/**
 * _memset - fills memory with a constant byte
 * @n: first n bytes of the memory
 * @s: memory area
 * @b: constant byte
 * Return: inter of the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int c;

	for (c = 0; n > 0; c++)
	{
		s[c] = b;
		n--;
	}
	return (s);
}
