#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum
 * number of coins to make change for
 * an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int r, d = 0;

	if (argc == 1 || argc > 2)
	{
	printf("Error\n");
	return (1);
	}
	else
	{
	r = atoi(argv[1]);
	}

	while (r > 0)
	{
	if (r >= 25)
	r -= 25;
	else if (r >= 10)
	r -= 10;
	else if (r >= 5)
	r -= 5;
	else if (r >= 2)
	r -= 2;
	else if (r >= 1)
	r -= 1;
	d += 1;
	}
	printf("%d\n", d);
	return (0);
}
