#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes
 *
 * Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n;
	int r;

	for (r = 0; r < i; r++)
	{
	dest[r] = src[r];
	n--;
	}
	return (dest);
}
