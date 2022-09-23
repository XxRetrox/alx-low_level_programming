#include "main.h"

/**
 * string_toupper - Entry
 * @b: string to be converted
 * Return: 0
 */

char *string_toupper(char *b)
{
	int i;
	int a;
	int length;

	length = 0
	while (b[length] != '\0')
		{
		length++;
		}

	for (i = 0; i < length; i++)
		{
		if (b[i] >= 'a' && b[i] <= 'z')
			{
			_putchar (b[i] - 32);
			}
		else
			{
			_putchar (b[i]);
			}
		}
}
