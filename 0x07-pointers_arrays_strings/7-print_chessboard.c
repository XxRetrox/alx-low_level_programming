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
	for (i = 0; i < len; i++)
		{
		if (i % 8 == 0)
			{
			_putchar ('\n');
			}
		_putchar (a[i]);
		}
}
