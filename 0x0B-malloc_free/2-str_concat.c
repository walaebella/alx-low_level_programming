#include"main.h"
#include<stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a])
		a++;
	while (s2[b])
		b++;
	c = a + b;
	s = malloc((sizeof(char) * c) + 1);

	if (s == NULL)
		return (NULL);
	b = 0;
	while (d < c)
	{
		if (d <= a)
			s1[d] = s[d];
	if (d >= a)
	{
		s[d] = s2[b];
		b++;
	}
	d++;
	}
	s[d] = '\0';
	return (s);
}
