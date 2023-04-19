#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: name input
 * @f: function pointer
 *
 * Return: no return
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
	f(name);
}
