#include"main.h"

/**
 * _strcat -concatenates two strings
 * @dest: destination
 * @src: source
 * Return: the pointer to resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, b;

	while (dest[a])
	{
		a++;
	}
	for (b = 0; src[b]; b++)
	{
		dest[a++] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
