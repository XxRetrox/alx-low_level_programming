#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - Entry
 * @array: array
 * @size: size of array
 * @action: callback function
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		{
		return;
		}

	for (i = 0; i < size; i++)
		{
		(*action)(array[i]);
		}
}
