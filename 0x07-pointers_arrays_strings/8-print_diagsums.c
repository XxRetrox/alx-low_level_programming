#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry
 * @a: array
 * @size: size of array
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int b;
	int d;
	int i;
	int s;
	int e;
	int x;
	int y;

	s = 0;
	x = 0;
	i = size + 1;
	e = size - 1;
	d = size * size;
	y = d - e;

	for (b = 0; b < d; b += i)
		{
		s = s + a[b];
		}
	printf("%d, ", s);

	for (b = 0; b < y; b += e)
		{
		x = x + a[b];
		}
	printf("%d", x);
	printf("\n");
}
