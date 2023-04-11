#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * isinteger - a function that checks if
 * s is an integer
 * @s: string input
 *
 * Return: 0 if true, 1 if not
 */

int isinteger(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
	if (s[i] < '0' || s[i] > '9')
	return (1);
	i++;
	}
	return (0);
}

/**
 * main - a program that adds positive
 * numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;

	while (--argc)
	{
	if (isinteger(argv[argc]))
	{
	printf("Error\n");
	return (1);
	}
	sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);

	return (0);
}
