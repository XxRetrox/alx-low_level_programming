#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Entry
 * @str: string
 * Return: copy
 */

char *_strdup(char *str)
{
	char *copy;

	int i;

	int len;

	if (str == NULL)
		{
		return (NULL);
		}

	len = strlen(str);

	copy = malloc(sizeof(*copy) * (len + 1));

	if (copy == NULL)
		{
		return (NULL);
		}

	for (i = 0; str[i] != '\0'; i++)
		{
		copy[i] = str[i];
		}

	copy[len] = '\0';

	return (copy);
}
