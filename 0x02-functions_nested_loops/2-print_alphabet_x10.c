#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return:
 */

void print_alphabet_x10(void)
{
	char a1;
	char ch;

	for (a1 = 'o'; a1 <= '9'; a1++)
		{
		for (ch = 'a'; ch <= 'z'; ch++)
			{
			_putchar(ch);
			}
		_putchar('\n');
		}
	return;

}
