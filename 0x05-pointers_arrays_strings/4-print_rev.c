#include "main.h"
#include <string.h>

/**
 * print_rev - Entry
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int len;
	int a;
	int b;

	len = strlen(s);

	b = len - 1;

	for (a = b; a >= 0; a--)
		{
		_putchar (s[a]);
		}
	_putchar ('\n');
}
