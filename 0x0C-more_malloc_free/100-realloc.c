#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function that reallocates
 * a memory block using malloc and free
 * @ptr: poinetr to the previous memory
 * @old_size: size of old memory
 * @new_size: size of new memory
 *
 * Return: pointer to new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
	free(ptr);
	return (NULL);
	}
	else if (ptr == NULL)
	{
	ptr = malloc(new_size);
	}
	else if (new_size == old_size)
	{
	return (ptr);
	}
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
