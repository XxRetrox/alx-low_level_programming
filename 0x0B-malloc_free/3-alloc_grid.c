#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Entry
 * @width: row
 * @height: columb
 * Return: array
 */

int **alloc_grid(int width, int height)
{
	int **array, i = 0, n = 0;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);
	while (i < height)
		{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
			{
			while (i >= 0)
				{
				i--;
				free(array[i]);
				}
			free(array);
			return (NULL);
			}
		i++;
		}
	for (i = 0; i < height; i++)
		{
		for (n = 0; n < width; n++)
			{
			array[i][n] = 0;
			}
		}
	return (array);
}
