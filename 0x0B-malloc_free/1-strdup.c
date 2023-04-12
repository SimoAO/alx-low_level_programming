#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a function that returns
 * a pointer to a newly allocated space
 * in memory, which contains a copy of str
 * @str: string
 *
 * Return: pointer of array
 */

char *_strdup(char *str)
{
	char *strr;
	int i, j;

	if (str == NULL)
	return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	;
	strr = malloc(i * sizeof(*str) + 1);
	if (strr == 0)
	return (NULL);
	for (j = 0; j < i; j++)
	strr[j] = str[j];

	return (strr);
}
