#include <stdio.h>

/**
 * main - Entry
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	int f;
	int b;
	int fb;

	for (i = 1; i <= 100; i++)
		{
			f = i % 3;
			b = i % 5;
			fb = i % 15;

		if (fb == 0)
			{
			printf("FizzBuzz ");
			}
		else if (b == 0)
			{
			printf("Buzz ");
			}
		else if (f == 0)
			{
			printf("Fizz ");
			}
		if (f == 0 || b == 0 || fb == 0)
			{
			continue;
			}
		printf("%d ", i);
		}

	printf("\n");

	return (0);
}
