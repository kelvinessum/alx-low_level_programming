#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * read_textfile - function that Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, wr, rd;
	char *buffer;
	op = open(filename, O_RDONLY);
	buffer = malloc(sizeof(char) * letters);
	rd = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	if (filename == NULL)
		return (0);

	if (buffer == NULL)
		return (0);

	if (op == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(op);

	return (wr);
}
