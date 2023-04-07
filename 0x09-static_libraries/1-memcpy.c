#include"main.h"

/**
 * _memcpy - copies n bytes
 * @src: memory area source
 * @dest: memory area destination
 * @n: number bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j, m = n;

	for (j = 0; j < m; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
