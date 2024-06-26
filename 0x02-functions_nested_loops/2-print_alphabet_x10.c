#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char x;
	int a = 0;



	while (a++ <= 10)
	{
		for (x = 'a'; x <= 'z'; x++)

			_putchar(x);

		_putchar('\n');

	}
}
