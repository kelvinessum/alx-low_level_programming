#include "main.h"

/**
 *_strcat - concatenates  two strings
 *
 *@dest: String that will be appended
 *@src: String to be concatenated upon
 *
 * Return: returns poiner to @dest
 */

char *_strcat(char *dest, char *src)
{

	int index = 0, len_dest = 0;

	while (dest[index++])
		len_dest++;

	for (index = 0; src[index]; index++)
		dest[len_dest++] = src[index];

	return (dest);
}
