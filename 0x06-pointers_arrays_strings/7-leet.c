#include"main.h"

/**
 * leet - encodes a string into 1337
 * @s: string
 * Return: s
 */
char *leet(char *s)
{
	int i = 0, j = 0;
	char leet[] = {'4', '3', '1', '0', '7'};
	char up[] = {'A', 'E', 'L', 'O', 'T'};
	char low[] = {'a', 'e', 'l', 'o', 't'};

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == low[j] || s[i] == up[j])
				s[i] = leet[j];
		}
		i++;
	}
	return (s);
}
