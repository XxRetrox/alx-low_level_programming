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

	while (a[len] != '\0')
		{
		len++;
		}

	int c;
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
