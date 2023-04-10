#include "main.h"

/**
 * wildcmp - function that cmpares 
 * two strings if they can be identical
 * @s1: first string input
 * @s2: second string input
 *
 * @return: 1 if the strings can be 
 * considered identical, 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
	if (*s2 != '\0' && *s2 == '*')
	return (wildcmp(s1, s2 + 1));
	else
	return (*s2 == '\0');
	}
	else if (*s2 == '*')
	return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	else if (*s1 == *s2)
	return (wildcmp(s1 + 1, s2 + 1));
	else
	return (0);
}
