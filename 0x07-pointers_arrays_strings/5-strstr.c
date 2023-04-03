#include"main.h"


/**
 * _strstr - locates substring
 * @haystack: string
 * @needle: substring
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *s = haystack;
		char *u = needle;

		while ((*s = *u) && *u != '\0')
		{
			s++;
			u++;
		}
		if (*u == '\0')
			return (haystack);
	}
	return (0);
}
