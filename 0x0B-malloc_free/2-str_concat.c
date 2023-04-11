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
	int i = 0, j = 0, k = 0;
	char *s;

	if (s1 != NULL)
		for (; s1[i]; i++)
			;
	if (s2 != NULL)
		for (; s2[j]; j++)
			;
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);
	while (k < i)
	{
		s[k] = s1[k];
		k++;
	}
	while (k < i + j)
	{
		s[k] = s2[k - i];
		k++;
	}
	s[k] = '\0';
	return (s);
}
