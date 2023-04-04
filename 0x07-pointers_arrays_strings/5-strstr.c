#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: entire string input
 * @needle: substring input
 *
 * Return: always 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *n = haystack;
	char *m = needle;

	while (*n == *m && *m != '\0')
	{
	n++;
	m++;
	}
	if (*m == '\0')
	return (haystack);
	}
	return (0);
}
