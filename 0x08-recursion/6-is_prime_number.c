#include "main.h"

/**
 * is_prime - check if n is  prime
 * @n: input number
 * @i: iterator
 *
 * Return: 1 for n is prime 0 if not
 */

int is_prime(int n, int i)
{
	if (n < 2 || n % i == 0)
	return (0);
	else if (n / 2 < i)
	return (1);
	else
	return (is_prime(n, i + 1));
}

/**
 * is_prime_number - returns 1 if n is a prime
 * number, 0 otherwise
 * @n: input number
 *
 * Return: result
 */

int is_prime_number(int n)
{
	if (n == 2)
	return (1);
	else
	return (is_prime(n, 2));
}
