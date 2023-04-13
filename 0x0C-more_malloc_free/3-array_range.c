#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array
 * of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int i;
	int *strr;

	if (min > max)
	return (NULL);
	strr = malloc(sizeof(int) * (max - min + 1));
	if (strr == 0)
	return (NULL);
	for (i = 0; i + min <= max; i++)
	strr[i] = min + i;
	return (strr);
}
