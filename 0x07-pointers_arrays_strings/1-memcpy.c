#include "main.h"
/**
 * _memcpy - copiesn bytes from memory area
 *
 *@dest: memory area
 *@src: another memory area
 *@n: the number of bytes
 *return: always success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
