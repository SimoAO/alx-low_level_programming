#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * description: print all possible different combinations of two digits
 * Return: always 0.
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
	for (j = i + 1; j < 10; j++)
	{
	putchar(i + '0');
	putchar(j + '0');
	putchar(',');
	putchar(' ');
	if (i == 8 && j == 9)
	{
	continue;
	}
	}
	}
	putchar('\n');
	return (0);
}
