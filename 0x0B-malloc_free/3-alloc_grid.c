#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function thzt returns
 * a pointer to a 2 dimensional array
 * of integers
 * @width: width input
 * @height: height input
 *
 * Return: pointer to 2D array
 */

int **alloc_grid(int width, int height)
{
	int **dim;
	int i, j;

	dim = malloc(height * sizeof(*dim));
	if (width < 1 || height < 1 || dim == 0)
	{
	return (NULL);
	}
	else
	{
	for (i = 0; i < height; i++)
	{
	dim[i] = malloc(width * sizeof(**dim));
	if (dim[i] == NULL)
	{
	while (i--)
	free(dim[i]);
	free(dim);
	return (NULL);
	}
	for (j = 0; j < width; j++)
	dim[i][j] = 0;
	}
	}
	return (dim);
}
