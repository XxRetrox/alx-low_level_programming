#include "main.h"

/**
 * _strstr - Entry
 * @haystack: string to be searched
 * @needle: substring
 * Return: substring or 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *occurance, *tempNeedle;

	if (!*needle)
		{
		return (haystack);
		}
	while (*haystack)
		{
		if (*haystack == *needle)
			{
			occurance = haystack;
			tempNeedle = needle;
			while (*tempNeedle)
				{
				if (*haystack++ != *tempNeedle++)
					{
					haystack = occurance;
					break;
					}
				}
			if (occurance != haystack)
				{
				return (occurance);
				}
			}
		haystack++;
		}

	return (0);
}
