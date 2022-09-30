#include "main.h"

/**
 * _isalpha - Entry point
 *@c: letter to be tested
 * Return: value of c
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		{
		return (1);
		}
	else
		{
		return (0);
		}
}
