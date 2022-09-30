#include "main.h"

/**
 * _strncat - Entry
 * @dest: dest
 * @src: src
 * @n: num in array
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int length;

	length = 0;
	while (dest[length] != '\0')
		{
		length++;
		}

	for (i = 0; i < n && src[i] != '\0'; i++, length++)
		{
		dest[length] = src[i];
		}
	for ( ; i < n; i++)
		{
		dest[length] = '\0';
		}

	return (dest);
}
