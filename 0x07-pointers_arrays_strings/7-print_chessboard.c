#include"main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: array
 * Return: 0 always success
 */
void print_chessboard(char (*a)[8])
{
	int c, k;

	for (c = 0; c < 8; c++)
	{
		for (k = 0; k < 8; k++)
			_putchar(a[c][k]);
		_putchar('\n');
	}
}
