#include "main.h"

/**
 * _strlen - returns the length of a string
 *@s: string to be used
 *
 *return: Length of the string
 */
int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return (a);
}
