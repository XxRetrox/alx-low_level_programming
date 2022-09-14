#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet(void)
{
	char ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
	
	{
		_putchar(ch);
	}

	_putchar('\n');

	return;
}

int main(void)
{

	print_alphabet();


	return (0);
}
