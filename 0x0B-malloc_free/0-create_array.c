#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Entry
 * @size: size of array
 * @c: string in array
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	int i;

	char *array;

	if (size == 0)
		{
		return (NULL);
		}

	array = malloc(sizeof(*array) * size);

	if (array == NULL)
		{
		return (NULL);
		}

	for (i = 0; i < size; i++)
		{
		array{i} = c;
		}

	return (array);
}
