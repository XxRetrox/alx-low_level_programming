#include "main.h"

/**
 * print_chessboard - Entry
 * @a: array
 * Return: 0
 */

void print_chessboard(char *a)
{
	int i;

	for (i = 0; i < 64; i++)
		{
		if (i % 8 == 0)
			{
			_putchar ('\n');
			}
		_putchar (a[i]);
		}
}
