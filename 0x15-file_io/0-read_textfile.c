#include "main.h"

/**
 * read_textfile - a  function that read a text file and prints
 * it to the POSIX standard output
 * @filename: fiel name
 * @letters: hte number of letters calculated
 *
 * Return: actual number of letters it could read and print,
 * 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, wr;
	int op;
	char *buff;

	if (filename == NULL)
	return (0);

	op = open(filename, O_RDONLY);
	if (op == -1){
	close(op);
	return (0);
	}
	buff = malloc(sizeof(char) * (letters));
	if (buff == NULL)
	return (0);

	rd = read(op, buff, letters);
	wr = write(STDOUT_FILENO, buff, rd);

	free(buff);
	close(op);

	return (wr);
}
