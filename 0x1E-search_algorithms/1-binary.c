#include "search_algos.h"

/**
 * binary_search - A function that searches for a value in a sorted
 * array of integers using the binary search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 *
 * Return: the index where value is located, otherwise -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low;
	size_t high;
	size_t mid;

	if (array == NULL)
		return (-1);

	for (high = size - 1, low = 0; high >= low;)
	{
		printf("Searching in array: ");
		for (mid = low; mid < high; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);

	mid = low + (high - low) / 2;
	if (array[mid] == value)
		return (mid);
	else if (array[mid] < value)
		low = mid + 1;
	else
		high = mid - 1;
	}
	return (-1);
}
