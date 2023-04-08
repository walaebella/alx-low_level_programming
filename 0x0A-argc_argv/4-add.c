#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * checkdigit - check a string is number or not
 * @s: string
 * Return: 1 or 0
 */
int checkdigit(const char *s)
{
	while (*s != '\0')
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: size array
 * @argv: elements array
 * Return: 0 success
 */
int main(int argc, char **argv)
{
	int i = 1, sum = 0;

	while (i < argc)
	{
		if (checkdigit(argv[i]) == 0)
		{
			puts("Error");
			return (1);
		}
		sum = sum + atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
