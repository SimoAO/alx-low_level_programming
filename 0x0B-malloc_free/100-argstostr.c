#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates
 * all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	int k = 0;
	int x = 0;
	char *cv;

	if (ac == 0 || av == NULL)
	return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	k++;
	}
	k += ac;
	cv = malloc((k + 1) * sizeof(char));
	if (cv == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
	cv[x] = av[i][j];
	x++;
	}
	if (cv[x] == '\0')
	{
	cv[x++] = '\n';
	}
	}
	return (cv);
}
