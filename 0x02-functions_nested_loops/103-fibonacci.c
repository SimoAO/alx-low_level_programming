#include <stdio.h>

/**
 * main - prints the add of the even-valued
 * fibonacci numbers.
 *
 * Return: always 0.
 */

int main(void)
{
	long int n1, n2, mul1, mul2;

	n1 = 1;
	n2 = 2;
	mul1 = mul2 = 0;
	while (mul1 <= 4000000)
	{
	mul1 = n1 + n2;
	n1 = n2;
	n2 = mul1;
	if ((n1 % 2) == 0)
	{
	mul2 += n1;
	}
	}
	printf("%ld\n", mul2);
	return (0);
}
