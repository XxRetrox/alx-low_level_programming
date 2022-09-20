#include "main.h"
#include <string.h>

/**
 * _strlen - Entry
 * @s: letter to be tested
 * Return: length
 */

int _strlen(char *s)
{
	char w;
	int i;
	int length;

	length = 0;
	w = *s;

	for (i = 0; i < strlen(w); i++)
		{
		length++;
		}

	return (length);
	_putchar('\n');

}
