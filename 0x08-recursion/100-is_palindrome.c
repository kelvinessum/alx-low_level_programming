#include "main.h"
#include <stdio>
#include <string.h>

/**
 *is_palindrome_checker - uses recursives to check strings
 * returns 1 if strings is palindrome
 * returns 0 if not palindrome
 *@s: string to be used
 * @start: beginning of palindrome
 *@end: end of palindrome
 * return: always success
 */

int is_palindrome_checker(const char *s, int start, int end) {
	if (start >= end) {
		return 1;
	}
	if (s[start] != s[end]) {
		return 0;
	}
	return is_palindrome_checker(s, start + 1, end - 1);
}

/**
 *is_palindrome_checker - uses recursives to check strings
 * returns 1 if strings is palindrome
 * returns 0 if not palindrome
 *@s: string to be used
 * return: always success
 */

int is_palindrome(char *s) {
	int length = strlen(s);
	if (length == 0) {
		return 1;
	}
	return is_palindrome_checker(s, 0, length - 1);
}
