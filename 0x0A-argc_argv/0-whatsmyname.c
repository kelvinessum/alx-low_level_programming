#include <stdio.h>
#include "main.h"

/**
 * main - Prints its name
 * followed by new line
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
