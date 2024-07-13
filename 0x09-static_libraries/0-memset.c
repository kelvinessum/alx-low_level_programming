#include "main.h"
/**
 * _memset - fills memory with constant byte
 *@s : the pointer
 * @n: the number of bytes
 *@b: constant byte
 *
 *return: always success
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
