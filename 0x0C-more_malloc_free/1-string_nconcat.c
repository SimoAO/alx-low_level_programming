#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that
 * concatenates two strings
 * @s1: first string input
 * @s2: second string input
 * @n: bytes amount
 *
 * Return: pointer or null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, m, x;
	char *strr;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	;
	for (j = 0; s2[j] != '\0'; j++)
	;
	if (n > j)
	n = j;
	m = i + n;
	strr = malloc(m + 1);
	if (strr == NULL)
	return (NULL);
	for (x = 0; x < m; x++)
	if (x < i)
	strr[x] = s1[x];
	else
	strr[x] = s2[x - i];
	return (strr);
}
