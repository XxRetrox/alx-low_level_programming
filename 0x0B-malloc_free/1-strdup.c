#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str)
{
	char *copy;

	int i;

	int len;

	len = strlen(str);

	if (str == NULL)
		{
		return (NULL);
		}

	copy = malloc(sizeof(*copy) * len + 1)

	if (copy == NULL)
		{
		return (NULL);
		}

	for (i = 0; str[i] != "\0"; i++)
		{
		copy[i] = str[i];
		}

	copy[len] = "\0";

	return (copy);
}
