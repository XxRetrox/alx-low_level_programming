#include "main.h"

/**
 * print_chessboard - Entry
 * @a: array
 * Return: 0
 */

void print_chessboard(char *a)
{
	int i;
	int len;
	int c;

	while (a[len] != '\0')
		{
		len++;
		}

	c = len - 7;

	for (i = 0; i <= c; i++)
		{
		if (i % 8 == 0)
			{
			_putchar ('\n');
			}
		_putchar (a[i]);
		}
}
