#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char k;

	while (*s)
	{
		s++;
		i++;
	}
	for (i = 0; i < j; i++)
		s--;
	for (i = 0; i < (j / 2);  i++)
	{
		int p = i - 1;

		k = s[p - i];
		s[i] = k;
	}
}
