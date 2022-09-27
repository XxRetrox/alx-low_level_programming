#include "main.h"

/**
 * _strchr - Entry
 * @s: string to check
 * @c: char to find
 * Return: c, otherwise null
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i))
		{
		if (*(s + i) == c)
			return (s + i);
		i++;
		}
	if (*(s + i) == c)
		return (s + i);

	return (NULL);
}
