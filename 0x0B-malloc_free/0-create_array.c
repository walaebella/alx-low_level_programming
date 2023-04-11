#include"main.h"
#include<stdlib.h>

/**
 * create_array - creates an array
 * @c: char array element
 * @size: size of the array
 * Return: pointer to arr or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	arr = (char *)(malloc(size * sizeof(char)));
	if (!arr)
		return (NULL);
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
