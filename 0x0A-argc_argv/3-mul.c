#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: array size
 * @argv: array elements
 * Return: 0 success
 */

int main(int argc, char **argv)
{
	int l = argc - 1;
	int a, b;

	if (l != 2)
	{
		puts("Error");
		return (1);
	}
	a =  atoi(argv[1]);
	b =  atoi(argv[2]);

	printf("%d\n", a * b);

	return (0);
}
