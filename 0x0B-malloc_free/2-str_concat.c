#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Entry
 * @s1: string
 * @s2: string
 * Return: concat
 */

char *str_concat(char *s1, char *s2)
{
	int a;
	int b;
	int c;
	int d;
	int len;
	char *concat;

	c = strlen(s1);

	d = strlen(s2);

	len = c + d;

	concat = malloc(sizeof(*concat) * (len + 1));

	if (concat == NULL)
		{
		return (NULL);
		}

	for (a = 0; s2[a] != '\0'; a++, c++)
		{
		s1[c] = s2[a];
		}

	s1[len] = '\0';

	concat = s1;

	return (concat);
}
