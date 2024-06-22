#include <stdio.h>

/**
 * main - Prints the numbers since 0 to 9
 *
 *return: Success
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}

	putchar('\n');

	return (0);
}
