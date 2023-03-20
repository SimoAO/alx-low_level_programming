#include <stdio.h>
/**
 * main - entry point
 * Return: always 0.
 */
int main(void)
{
	for (int i = 0; i < 10; i++)
	{
	for (int j = 0; j < 10; j++)
	{
	putchar(i + '0');
	putchar(j + '0');
	putchar('\n');
	}
	}

	return (0);
}
