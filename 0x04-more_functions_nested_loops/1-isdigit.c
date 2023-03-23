#include "main.h"

/**
 * _isdigit - write a function that checks for a digit
 * (0 through 9)
 * @x: char to check
 * Return: 1 or 0
 */

int _isdigit(int x)
{
	if (x >= '0' && x <= '9')
	return (1);
	else
	return (0);
}
