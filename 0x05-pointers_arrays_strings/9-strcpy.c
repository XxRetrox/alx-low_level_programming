#include "main.h"

/**
 * *_strcpy - Entry
 * @dest: buffer
 * @src: string
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (i >= 0)
		{
		dest[i] = src[i];
		if (src[i] == '\0')
			return (dest);
		i++;
		}
	return (dest);
}
