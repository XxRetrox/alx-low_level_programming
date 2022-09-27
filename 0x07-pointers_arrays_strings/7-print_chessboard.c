#include "main.h"

/**
 * print_chessboard - Entry
 * @a: array
 * Return: 0
 */

void print_chessboard(char *a)
{
	int i;
	int b;

	for (i = 0; i < 8; i++)
		{
		for (b = 0; b < 8; b++)
			{
			_putchar (a[i][b]);
			}
		_putchar ('\n');
		}
}
