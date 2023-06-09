#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function taht prints strings,
 * followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *s;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
	s = va_arg(list, char *);
	if (s != NULL)
	printf("%s", s);
	else
	printf("(nil)");
	if (separator != NULL && i < n - 1)
	printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
