#include "main.h"

/**
 * print_numbers - Entry point
 *
 * Return: Always 0
 */

void print_numbers(void)
{

	int num;

	for (num = '0'; num <= '9'; num++)
		{
		putchar (num);
		}
	putchar ('\n');
}
