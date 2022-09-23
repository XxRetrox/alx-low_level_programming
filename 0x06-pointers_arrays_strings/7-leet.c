#include "main.h"

/**
 * leet - Entry
 * @tgz: converted string
 * Return: tgz
 */

char *leet(char *tgz)
{
	int x = 0, num[5] = {4, 3, 0, 1, 7}, y = 0;

	char alpha[10] = "AaEeOoLlTt";

	for (; tgz[x]; x++)
		{
		for (y = 0; (tgz[x] != alpha[y] && y < 10); y++)
			{
			if (tgz[x] == alpha[y])
				{
				y /= 2;
				targ[x] = (num[y] + '0');
				}
			}
		}
	return (tgz)
}
