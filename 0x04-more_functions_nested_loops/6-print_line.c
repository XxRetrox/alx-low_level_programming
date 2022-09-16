#include "main.h"

/**
 * print_line - Entry point
 * @n: letter to be tested
 * Return: Always 0
 */

void print_line(int n)
{
	int a;

	if (n >= 1)
		{
		for (a = '1'; a <= n; a++)
			{
			_putchar (_);
			}
		_putchar ('\n');
		}
	else
		{
		_putchar ('\n');
		}

}
