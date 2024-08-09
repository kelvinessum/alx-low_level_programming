#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - functions that converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
* Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int m, n;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (n = 1, m = 0, len--; len >= 0; len--, n *= 2)
	{
		if (b[len] == '1')
			m += n;
	}

	return (m);
}
