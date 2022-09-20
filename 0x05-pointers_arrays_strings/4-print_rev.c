#include "main.h"
#include <string.h>

/**
 * print_rev - Entry
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int i;
	int len;
	int a;

	len = strlen(s);

	for (i = 0; i < len; i++)
		{
		a = len - 1;
		_putchar (s[a]);
		}
}
