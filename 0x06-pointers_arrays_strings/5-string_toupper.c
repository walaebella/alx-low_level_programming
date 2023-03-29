#include"main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @s: string
 *
 * Return: s modified
 */
char *string_toupper(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		if (s[c] > 96 && s[c] < 123)
		{
			s[c] -= 32;
		}
		c++;
	}
	return (s);
}
