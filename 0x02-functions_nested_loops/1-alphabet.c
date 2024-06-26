#include "main.h"
/**
 * print_alphabet : prints alphabets in lowercase followed by new line
 *
 *return : 0
 */

void print_alphabet(void)
{
	char a;
	while(a <= 'z')
	{
		_putchar(a);
		a++;}
	_putchar('\n');
}
