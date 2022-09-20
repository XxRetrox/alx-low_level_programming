#include "main.h"
#include <string.h>

/**
 * rev_string - Entry
 * @s: string
 * Return: 0
 */

void rev_string(char *s)
{
	int len;
	int temp;
	int a;
	int b;

	len = strlen(s);
	b = len / 2;

	for (a = 0; a < b; a++)
		{
		temp = s[a];
		s[a] = s[len - a - 1];
		s[len - a - 1] = temp;
		}
}
