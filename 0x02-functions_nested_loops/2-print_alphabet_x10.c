#include "main.h"
/**
 *Print_alphabet_x10 : print alphabet 10x
 *
 * new line
 */

int main() {
	for (int i = 0; i < 10; ++i) {
		for (char ch = 'a'; ch <= 'z'; ++ch) {
			putchar(ch);
		}
		putchar('\n');
	}
	return 0;
}
