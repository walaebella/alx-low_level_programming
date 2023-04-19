#include"function_pointers.h"

/**
 * int_index - searches for integers
 * @array: array
 * @size: size of array
 * @cmp: pointer functon
 * Return: if -1 no element matches or size<= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
