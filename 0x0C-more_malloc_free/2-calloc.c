#include"main.h"
#include<stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: elements
 * @size: size of array
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, d = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (0);
	d = nmemb * size;
	p = malloc(d);

	if (p == NULL)
		return (NULL);
	while (i < d)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
