#include"main.h"

/**
 * _strncat - concatenates two strings n bytes
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, c = 0;

	while (dest[i] != '\0')
		i++;

	while (src[c] != '\0' && n > c)
	{
		dest[i] = src[c];
		c++;
		i++;
	}
	if (n > 0)
	{
		dest[i] = '\0';
	}
	return (dest);
}
