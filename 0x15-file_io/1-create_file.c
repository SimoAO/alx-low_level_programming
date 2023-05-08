#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int wr, op, l = 0;

	if (!filename)
	return (-1);

	if (text_content != NULL)
	{
	for (; text_content[l]; l++)
	;
	}
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, l);
	if (op == -1 || wr == -1)
	return (-1);

	close(op);
	return (1);
}
