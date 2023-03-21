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
	int k;

	for (i = 0; i < 10; i++)
	{
	for (j = i + 1; j < 10; j++)
	{
	for (k = j + 1; k < 10; k++)
	{
	putchar(i + '0');
	putchar(j + '0');
	putchar(k + '0');
	if (i == 7 && j == 8 && k == 9)
	{
	continue;
	}
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
