#include"main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: input
 * Return: m
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int m = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				m++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (m);
		}
		s++;
	}
	return (m);
}
