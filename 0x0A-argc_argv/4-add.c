#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry
 * @argc: num of arg
 * @argv: array of arg
 * Return: 0
 */

int main(int argc, char ** argv)
{
	int i;
	int a = 0;
	char *b;
	int x;

	if (argc == 1)
		{
		printf("0\n");
		return (0);
		}
	for (i = 1; i < argc; i++)
		{
		b = argv[i];
		x = atoi(b);
		if (x == 0)
			{
			printf("Error\n");
			return (0);
			}
		a = a + x;
		}

	printf("%d\n", a);

	return (0);
}
