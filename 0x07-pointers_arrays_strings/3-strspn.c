#include "main.h"

/**
 * _strspn - Entry
 * @s: string
 * @accept: substring
 * Return: consistC
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int consistC = 0;
	int prevC;

	while (*s)
		{
		i = 0;
		prevC = consistC;
		while (*(accept + i) != '\0')
			{
			if (*(accept + i) == *s)
				{
				consistC++;
				}
			i++;
			}
		if (prevC == consistC)
			{
			break;
			}
		s++;
		}

	return (consistC);
}
