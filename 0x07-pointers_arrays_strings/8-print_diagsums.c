#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: pointer input
 * @size: size of the matrix
 *
 * Return: no return
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int n;

	for (n = 0; n < (size * size); n++)
	{
	if (n % (size + 1) == 0)
	sum1 += *(a + n);
	if (n % (size - 1) == 0 && n != 0 && n < (size * size) - 1)
	sum2 += *(a + n);
	}
	printf("%d, %d\n", sum1, sum2);
}
