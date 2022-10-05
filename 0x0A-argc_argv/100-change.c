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
	int cents, coins;

	if (argc != 2)
		{
		printf("Error\n");
		return (1);
		}
	cents = atoi(argv[1]);

	for (coins = 0; cents > 0; coins++)
		{
		if ((cents - 25) >= 0)
			{
			cents -= 25;
			continue;
			}
		if ((cents - 10) >= 0)
			{
			cents -= 10;
			continue;
			}
		if ((cents - 5) >= 0)
			{
			cents -= 5;
			continue;
			}
		if ((cents - 2) >= 0)
			{
			cents -= 2;
			continue;
			}
		cents--;
		}

	printf("%d\n", coins);

	return (0);
}
