#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that
 * concatenates two strings
 * @s1: string 1 input
 * @s2: string 2 input
 *
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *strr;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	;
	for (j = 0; s2[j] != '\0'; j++)
	;
	strr = malloc(sizeof(char) * (i + j + 1));
	if (strr == NULL)
	return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
	strr[i] = s1[i];
	i++;
	}
	while (s2[j] != '\0')
	{
	strr[i] = s2[j];
	i++;
	j++;
	}
	return (strr);
}
