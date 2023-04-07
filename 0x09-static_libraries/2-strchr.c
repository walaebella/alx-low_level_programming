#include"main.h"
/**
 * _strchr - locates character in a string
 * @s: string
 * @c: character
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (0);
}
