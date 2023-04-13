#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates
 * memory for an array using malloc
 * @nmemb: array elements
 * @size: size of element
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *strr;

	if (nmemb == 0 || size == 0)
	return (NULL);
	strr = malloc(nmemb * size);
	if (strr == NULL)
	return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	strr[i] = 0;
	return (strr);
}
