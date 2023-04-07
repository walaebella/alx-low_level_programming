#include"main.h"
#include<stdio.h>

/**
 * main - prints its name
 * @argc: size array argument
 * @argv: array elements
 * Return: 0 Always
 */

int main(int argc, char **argv)
{
	puts(argv[argc - 1]);
	return (0);
}
