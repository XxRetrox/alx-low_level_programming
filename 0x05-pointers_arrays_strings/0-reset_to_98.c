#include "main.h"

/**
 * reset_to_98 - Entry point
 * @n: letter to be tested
 * Return: 0
 */

void reset_to_98(&n)
{
	int *p;
	p = &n;

	*p = 98;
}
