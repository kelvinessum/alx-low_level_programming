#include <stdio.h>
#include "main.h"
/**
 * _strchr - locates a character in  a string
 *
 *@s: the string to be used
 *@c: the character
 * NULL - if the charater is not found
 *return: locates a charater or prints NULL
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
