#include "main.h"

/**
*string_toupper - changes all lowercases letters of a string to uppercase
*@str: string to be used
*Return: returns a character
*/

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i++])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}

	return (str);
}
