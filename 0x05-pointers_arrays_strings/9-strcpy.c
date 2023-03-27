#include"main.h"

/**
 * _strcpy - copy string printed to by src including the terminating to the buffer pointed to by dest
 * @dest: dest of string
 * @src: copy of string
 * Return: value the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int c = 0, i;

	while (*src)
	{
		src++;
		c++;
	}
	for (i = 0; i < c; i++)
		src--;
	for (i = 0; i < c; i++)
	{
		dest[i] = *src;
		src++;
	}
	dest[i] = *src;
	return (dest);
}
