#include "main.h"

/**
 * _islower - entry point
 * checks if c is a lowercase
 *@c: the character to be checked
 * Return: 1 for lowercase character, 0 for everything else.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
