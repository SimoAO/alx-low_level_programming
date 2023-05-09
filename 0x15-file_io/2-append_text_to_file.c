#include "main.h"

/**
 * append_text_to_file - a function that appends text at
 * the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at
 * the end of the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int wr, op, l = 0;

	if (!filename)
	return (-1);

	if (text_content != NULL)
	{
	for (; text_content[l]; l++)
	;
	}
	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, l);
	if (op == -1 || wr == -1)
	return (-1);

	close(op);
	return (1);
}
