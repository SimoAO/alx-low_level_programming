#include "main.h"

/**
 * print_error - a function that checks if the file
 * can be opened or not
 * @in: input file
 * @out: output file
 * @argv: the argument
 *
 * Return: no return
 */

void print_error(int in, int out, char *argv[])
{
	if (in == -1)
	dprintf(STDERR_FILENO, "Error: Can't red from file %s\n", argv[1]);
	exit(98);

	if (out == -1)
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	exit(99);
}

/**
 * main - a program that copies the content of a file to another file
 * @argc: number of arguments
 * @argv: the argument
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	ssize_t wr, no = 1024;
	int in, out, cl;
	char buff[1024];

	if (argc != 3)
	dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
	exit(97);

	in = open(argv[1], O_RDONLY);
	out = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	print_error(in, out, argv);

	while (no == 1024)
	{
	no = read(in, buff, 1024);
	if (no == -1)
	print_error(-1, 0, argv);

	wr = write(out, buff, no);
	if (wr == -1)
	print_error(0, -1, argv);
	}
	cl = close(in);
	if (cl == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", in);
	exit(100);

	cl = close(out);
	if (cl == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", in);
	exit(100);

	return (0);
}
