#include "main.h"
#include <string.h>

/**
 * puts_half - Entry
 * @str: string
 * Return: 0
 */

void puts_half(char *str)
{
	int a;
	int b;
	int c;
	int len;

	len = strlen(str);
	b = len / 2;
	c = b + 1;

	if (len % 2 == 0)
		{
		for (a = b; str[a] != '\0'; a++)
			{
			_putchar (str[a]);
			}
		}
	else if (len % 2 != 0)
		{
		for (a = c; str[a] != '\0'; a++)
			{
			_putchar (str[a]);
			}
		}
	else
		{
		_putchar (len);
		}

	_putchar ('\n');
}
