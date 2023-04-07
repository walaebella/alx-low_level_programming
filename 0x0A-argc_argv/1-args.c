#include"main.h"
#include<stdio.h>

/**
 * main - prints number of arguments passed into the program
 * @argc: array size
 * @argv: array elements
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	(void)(argv);
	printf("%d\n", argc - 1);

	return (0);
}
