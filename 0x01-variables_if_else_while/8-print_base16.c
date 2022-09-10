#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	char ch;
	char CH;

	for (ch = '0'; ch <= '9'; ch++)
		{
		putchar(ch);
		}

	for (CH = 'a'; CH <= 'f'; CH++)
		{
		putchar(CH);
		}

	putchar('\n');

	return (0);
}
