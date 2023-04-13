#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that
 * allocates memory using malloc
 * @b: bytes amount
 *
 * Return: pointer to the allocated
 * memory, value of 98 if its fails
 */

void *malloc_checked(unsigned int b)
{
	char *c;

	c = malloc(b);
	if (c == NULL)
	exit(98);
	return (c);
}
