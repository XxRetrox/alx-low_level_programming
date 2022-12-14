#include "main.h"

/**
 * _strcat - Entry
 * @dest: dest
 * @src: src
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int length;
	int j;

	length = 0;
	while (dest[length] != '\0')
		{
		length++;
		}
	for (j = 0; src[j] != '\0'; j++, length++)
		{
		dest[length] = src[j];
		}

	dest[length] = '\0';

	return (dest);
}
