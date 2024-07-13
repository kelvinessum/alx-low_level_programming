#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring
 *
 * @haystack: the main string to search
 * @needle: the substring
 *
 * Return: Always success
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j = 0;

	while (needle[j] != '\0')
		j++;

	while (*haystack)
	{
		for (j = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != j)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
