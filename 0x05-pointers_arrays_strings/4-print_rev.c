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

	len = strlen(s);

	for (a = len - 1; a <= 0; a--)
		{
		_putchar (s[a]);
		}
	_putchar ('\n');
}
