#include "main.h"
/**
 *Print_alphabet_x10 : print alphabet 10x
 *
 * new line
 */

void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; ++i) {
		for (char ch = 'a'; ch <= 'z'; ++ch) {
			_putchar(ch);
		}
		_putchar('\n');
	}

}
