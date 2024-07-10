#include "main.h"

/**
 * natural_sqrt - finds the square roots
 *@n: number to be used
 *@i: number to be iterable
 *
 *return: success
 */

int natural_sqrt(int n, int i) {
	if (i * i > n) {
		return -1;
	}
	if (i * i == n) {
		return i;
	}
	return natural_sqrt(n, i + 1);
}


int _sqrt_recursion(int n) {
	if (n < 0) {
		return -1;
	}
	return natural_sqrt(n, 0);
}
