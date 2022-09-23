#include "main.h"
#include <string.h>

/**
 * string_toupper - Entry
 * @b: string to be converted
 * Return: 0
 */

char *string_toupper(char *b)
{
	int i;
	int a;

	a = strlen(b);

	for (i = 0; i < a; i++)
		{
		if (b[i] >= 'a' && b[i] <= 'z' )
			{
			_putchar (b[i] - 32);
			}
		else
			{
			_putchar (b[i]);
			}
		}
}
