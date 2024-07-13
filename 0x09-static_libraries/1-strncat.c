#include "main.h"
/**
 *_strncat - concatenate two strings
 *@dest: first string
 *@src: Second string
 *@n:integer to be used
 *Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{

	int index = 0,len_dest = 0;

	while (dest[index++])
		len_dest++;

	for (index = 0; src[index] && index < n; index++)
		dest[len_dest++] = src[index];

	return (dest);

}
