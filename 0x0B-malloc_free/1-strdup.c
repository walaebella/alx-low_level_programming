#include"main.h"
#include<stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: string duplicated or NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *p;
	int c = 0, i = 1;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}
	p = malloc((sizeof(char) * i) + 1);

	if (p == NULL)
		return (NULL);
	while (c < i)
	{
		p[c] = str[c];
		c++;
	}
	p[c] = '\0';
	return (p);
}
