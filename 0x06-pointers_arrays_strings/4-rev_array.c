#include "main.h"

/**
 * reverse_array - Entry
 * @a: pointer
 * @n: num of elements
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x;
	int y;
	int tmp;

	x = 0;
	y = n - 1;

	while (x < y)
		{
		tmp = a[x];
		a[x] = a[y];
		a[y] = tmp;
		x++;
		y--;
		}
}
