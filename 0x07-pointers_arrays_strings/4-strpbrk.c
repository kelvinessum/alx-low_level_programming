#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searchs a string for any of a set of bytes
 *
 * @s: the string to searched
 * @accept: the bytes to searched for
 *
 * Return: always success
 * @accept, or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return (NULL);
}
