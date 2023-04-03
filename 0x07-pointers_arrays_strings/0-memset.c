#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory to be filled
 * @b: constant byte
 * @n: bytes filled
 *
 * Return: pointer to dest.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
	s[i] = b;
	n--;
	}
	return (s);
}
