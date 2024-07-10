#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - reutnr 1 if the integer is prime
 * otherwise 0
 *@n: value to be used
 *@i: iterator
 *return: always success
 */


int natural_prime(int n, int i) {
	if (i * i > n) {
		return 1;
	}
	if (n % i == 0) {
		return 0;
	}
	return natural_prime(n, i + 1);
}

/**
 * is_prime_number - reutnr 1 if the integer is prime
 * otherwise 0
 *@n: value to be used
 *return: always success
 */
int is_prime_number(int n) {
	if (n <= 1) {
		return 0;
	}
	return natural_prime(n, 2);
}
