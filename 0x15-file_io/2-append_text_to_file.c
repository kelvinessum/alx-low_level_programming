#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file -function that appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return:1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int clet = 0;
	int op, wr;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (clet = 0; text_content[clet];)
			clet++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, clet);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
