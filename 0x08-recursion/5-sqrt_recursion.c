#include "main.h"

/**
 * search_sqrt - search for the square root
 * @i: iterator
 * @n: input number
 *
 * Return: square root
 */

int search_sqrt(int n, int i)
{
	if (i * i == n)
	return (i);
	else if (i * i > n)
	return (-1);
	else
	return (search_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - function that returns
 * the natural square root of a number
 * @n: input number
 *
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	return (0);
	else
	return (search_sqrt(n, 1));
}
