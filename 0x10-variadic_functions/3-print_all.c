#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - a function that prints anything
 * @format: argumrnts to print
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list list;
	char *s;
	unsigned int i = 0, j, c = 0;
	const char type[] = "cifs";

	va_start(list, format);
	while (format != NULL && format[i])
	{
	j = 0;
	while (type[j])
	{
	if (format[i] == type[j] && c)
	{
	printf(", ");
	break;
	} j++;
	}
	switch (format[i])
	{
	case 'c':
		printf("%c", va_arg(list, int)), c = 1;
		break;
	case 'i':
		printf("%d", va_arg(list, int)), c = 1;
		break;
	case 'f':
		printf("%f", va_arg(list, double)), c = 1;
		break;
	case 's':
		s = va_arg(list, char *), c = 1;
		if (s == NULL)
		{
		printf("(nil)");
		break;
		}
		printf("%s", s);
		break;
	} i++;
	}
	printf("\n"), va_end(list);
}
