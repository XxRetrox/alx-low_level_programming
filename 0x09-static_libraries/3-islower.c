#include "main.h"

/**
 * _islower - Check the code
 * @c: letter to be tested
 * Return: Always 0 or 1
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		{
		return (1);
		}
	else
		{
		return (0);
		}
}
