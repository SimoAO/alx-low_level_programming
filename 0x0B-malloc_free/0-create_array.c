#include <stdlib.h>

/**
 * create_array - function that creates
 * an array of chars, and initializes
 * it with a specific char
 * @size: array size
 * @c: char to assign
 *
 * Return: poinetr to array
 */

char *create_array(unsigned int size, char c)
{
	char *cr = malloc(size);

	if (size == 0 || cr == 0)
	return (0);
	while (size--)
	cr[size] = c;
	return (0);
}
