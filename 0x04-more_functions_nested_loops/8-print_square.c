#include "main.h"

/**
 * print_square - Entry
 * @size: square
 * Return: Always 0
 */

void print_square(int size)
{
	int u;
	int a;
	int b;

	u = 35;

	if (size >= 1)
		{
		for (a = 1; a <= size; a++)
			{
			for (b = 1; b <= size; b++)
				{
				_putchar (u);
				}
			_putchar ('\n');
			}
		}
	else
		{
		_putchar ('\n');
		}
}
