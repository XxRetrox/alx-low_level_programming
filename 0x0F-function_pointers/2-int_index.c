#include "function_pointers"
#include <stdio.h>

/**
 * int_index - Entry
 * @array: array
 * @size: size of array
 * @cmp: callback function
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		{
		return (-1);
		}

	if (array == NULL || cmp == NULL)
		{
		return;
		}

	for (i = 0; i < size; i++)
		{
		if (cmp(array[i]))
			{
			return (i);
			}
		}
}
