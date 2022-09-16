#include "main.h"

/**
 * print_diagonal - Entry point
 * @n: letter to be tested
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int a;
	int u;
	int s;
	int b;

	s = 32;
	u = 92;

	if (n >= 1)
		{
		for (a = 1; a <= n; a++)
			{
			for (b = 1; b < a; b++)
				{
				_putchar (s);
				}
			_putchar (u);
			_putchar ('\n');
			}
		}
	else
		{
		_putchar ('\n');
		}
}
