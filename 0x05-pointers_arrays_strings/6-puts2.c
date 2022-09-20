#include "main.h"

/**
 * puts2 - Entry
 * @str: string
 * Return: 0
 */

void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		{
		if (a % 2 != 0)
			{
			continue;
			}
		_putchar (str[a]);
		}

	_putchar ('\n');
}
