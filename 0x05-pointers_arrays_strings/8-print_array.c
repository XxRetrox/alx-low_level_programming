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
		printf("%d", a[b]);

		if (b == n)
			{
			break;
			}
		_putchar (',');
		_putchar (' ');
		}

	_putchar ('\n');
}
