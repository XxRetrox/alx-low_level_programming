#include "main.h"

/**
 * print_array - Entry
 * @a: array
 * @n: size of array
 * Return: 0
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b <= n; b++)
		{
		_putchar (a[b]);
		
		if (b = 5)
			{
			break;
			}
		_putchar (',');
		_putchar (' ');
		}

	_putchar ('\n');
}
