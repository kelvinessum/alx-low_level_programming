#include "main.h"
/**
 * _strcat - loops figures in R
 *
 *returns - success always
 */

char *_strcat(char *dest, char *src)
{
	char *d = dest;

	while (*d) d++;
	while ((*d++ = *src++) != '\0');
	return dest;
}
