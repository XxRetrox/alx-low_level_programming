#include "main.h"
#include <string.h>

/**
 * _strlen - Entry
 * @s: letter to be tested
 * Return: length
 */

int _strlen(char *s)
{
	int i;
	int length;

	length = 0;

	for (i = 0; s[i] != '\0'; i++)
		{
		length++;
		}

	return (length);
	_putchar('\n');

}
