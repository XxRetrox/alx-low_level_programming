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

	if (s1 == NULL)
		{
		s1 = "";
		}

	if (s2 == NULL)
		{
		s2 == "";
		}

	concat = malloc(sizeof(*concat) * (len + 1));

	if (concat == NULL)
		{
		return (NULL);
		}

	for (a = 0; s1[a] != '\0'; a++)
		{
		concat[a] = s1[a];
		}
	for (b = 0; s2[b] != '\0'; b++)
		{
		concat[c] = s2[b];
		}

	return (concat);
}
