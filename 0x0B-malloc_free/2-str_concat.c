#include"main.h"
#include<stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: s
 */
char *str_concat(char *s1, char *s2)
{
	int a, b, c = 0;
	char *s;

	if (s1 != NULL)
		for (a = 0; s1[a]; a++)
			;
	for (b = 0; s2[b]; b++)
		;
	s = malloc(sizeof(char) * (a + b + 1));
	if (s == NULL)
		return (NULL);
	while (c < a)
	{
		s[c] = s1[c];
		c++;
	}
	while (c < a + b)
	{
		s[c] = s2[c - a];
		c++;
	}
	s[c] = '\0';
	return (s);
}
