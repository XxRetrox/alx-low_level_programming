#include "main.h"

/**
 * _memset - Entry
 * @dest: string
 * @src: string
 * @n: int
 * Return: start
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *start = dest;

	while (i < n)
		{
			*dest++ = *src++;
			i++;
		}

	return (start);
}
