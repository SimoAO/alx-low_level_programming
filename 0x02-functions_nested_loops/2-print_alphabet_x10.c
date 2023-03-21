#include "main.h"

/**
 * print_alphabet_x10 - entry point
 * it print alphabet in lowercase ten times in a row
 *
 * Return: always 0.
 */
void print_alphabet_x10(void)
{
	int count = 1;
	char letter;

	while (count++ <= 10)
	{
	for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);
	_putchar('\n');
	}
}
