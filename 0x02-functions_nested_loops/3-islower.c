#include "main.h"
/**
 * int _islower: checks for lowercase
 *
 *return : success
 */

int _islower (int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
