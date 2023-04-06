#include "main.h"

/**
 * _strlen_recursion - function that prints
 * the length of a string
 * @s: string input
 *
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	else
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - function that checks if s is
 * a palindrome
 * @s: input string
 * @l: left character
 * @r: right character
 *
 * Return: a palindrome or not
 */

int check_pal(char *s, int l, int r)
{
	if (*(s + l) == *(s + r))
	{
	if (l == r || l == r + 1)
	return (1);
	else
	return (check_pal(s, l + 1, r - 1));
	}
	else
	return (0);
}

/**
 * is_palindrome - function that checks if
 * a string is a palindrome
 * @s: input string
 *
 * Return: 1 if s is a palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	return (1);
	else
	return (check_pal(s, 0, _strlen_recursion(s) - 1));
}
