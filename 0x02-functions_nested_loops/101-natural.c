#include <stdio.h>

/**
 * main - prints the add of the numbers
 *
 * Return: always 0.
 */

int main(void)
{
	int x;
	long int n1, n2, mul;

	n1 = 1;
	n2 = 2;

	printf("%ld, %ld", n1, n2);
	for (x = 0; x < 48; x++)
	{
	mul = n1 + n2;
	printf(", %ld", mul);
	n1 = n2;
	n2 = mul;
	}
	printf("\n");
	return (0);
}
