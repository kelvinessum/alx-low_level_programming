#include <stdio.h>
#include "main.h"
/**
 * main - prints the largest prime factor of 612852475143
 * followed by new line
 * Return: void
 **/

int main(void)
{
	long unsigned int a;
	long unsigned int b = 612852475143;

	for (a = 3; a < 782849; a = a + 2)
	{
		while ((b % a == 0) && (b != a))
			b = b / a;
	}
	printf("%lu\n", b);
	return (0);
}
