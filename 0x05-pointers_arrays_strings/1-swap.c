#include "main.h"

/**
 * swap_int - Entry
 * @m: int
 * @n: int
 * Return: 0
 */ 

void swap_int(int *m, int *n)
{
	int temp;

	temp = *m;

	*m = *n;

	*n = temp;
}
