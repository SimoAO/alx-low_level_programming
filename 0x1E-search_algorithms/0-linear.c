#include "search_algos.h"

/**
 * linear_search - A function that searches for a value in an array.
 * @array: a pointer to the first element of the array.
 * @size: the number of elements in array.
 * @value: the value to search for.
 *
 * Return: the first index where value is located, otherwise -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int loc = -1;

	for (; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			loc = i;
			break;
		}
	}
	return (loc);
}
