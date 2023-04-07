#include"main.h"
#include<stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: array size
 * @argv: array elements
 * Return: 0 success
 */
int main(int argc, char **argv)
{
	int j = 0;

	while (j < argc)
	{
		puts(argv[j]);
		j++;
	}
	return (0);
}
