#include "main.h"

/**
 * _strpbrk - Entry
 * @s: string
 * @accept: substring
 * Return: 0
 */



char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
		{
		i = 0;
		while (*(accept + i) != '\0')
			{
			if (*(accept + i) == *s)
				{
				return (s);
				}
			i++;
			}
		s++;
		}

	return (0);
}
