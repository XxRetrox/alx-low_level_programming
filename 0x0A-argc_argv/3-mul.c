#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry
 * @argc: num of arg
 * @argv: array of arg
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;
	int a = 1;
	int x;
	char *b;

	if (argc == 3)
		{
		for (i = 1; i < argc; i++)
			{
			b = argv[i];
			x = atoi(b);
			a = a * x;
			}
		printf("%d\n", a);
		}
	else
		{
		printf("Error\n");
		}

	return (0);
}
