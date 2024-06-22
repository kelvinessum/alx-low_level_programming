#include <stdio.h>

/**
 * main - Prints lowercase alphabet in reverse
 *
 * return: outcome
 */
int main(void)
{
	char m;

	for (m = 'z'; m >= 'a'; m--)
	{
		putchar(m);
	}

	putchar('\n');

	return (0);
}
