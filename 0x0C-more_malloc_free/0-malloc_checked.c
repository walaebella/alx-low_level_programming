#include"main.h"
#include<stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory size
 *
 * Return: pointer to the allocate memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
