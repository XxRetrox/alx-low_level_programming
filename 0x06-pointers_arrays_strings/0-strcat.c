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
	while (s1[length] != '\0')
		{
		length++;
		}
	for (j = 0; s2[j] != '\0'; j++, length++)
		{
		s1[length] = s2[j];
		}

	s1[length] = '\0';

	return (s1);
}
