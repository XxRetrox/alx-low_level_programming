#include "main.h"

/**
 * string_toupper - Entry
 * @c: string to be converted
 * Return: 0
 */

char *string_toupper(char *c)
{
	int x;

	x = 0;

	while (c[x] != '\0')
		{
		if (c[x] >= 'a' && c[x] <= 'z')
			{
			c[x] = c[x] - 'a' + 'A';
			}
		x++;
		}

	return (c);
}
