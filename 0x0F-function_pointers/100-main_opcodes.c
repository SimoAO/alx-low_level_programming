#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints the opcodes of its own main funcction
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int nb, i;
	char *opc;

	if (argc != 2)
	{
	printf("Error\n");
	exit(1);
	}
	nb = atoi(argv[1]);
	if (nb < 0)
	{
	printf("Error\n");
	exit(2);
	}
	opc = (char *) main;
	for (i = 0; i < nb; i++)
	{
	printf("%02hhx", opc[i]);
	if (i < nb - 1)
	printf(" ");
	}
	printf("\n");
	return (0);
}
