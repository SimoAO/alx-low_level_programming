#include "function_pointers.h"

/**
 * int_index - a function taht searches for an integer
 * @array: array of integer
 * @size: size of array
 * @cmp: pointer to function
 *
 * Return: index of the first element, -1 otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
	return (-1);
	}
	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]))
	return (i);
	}
	return (-1);
}
