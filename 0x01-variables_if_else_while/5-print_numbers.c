#include <stdio.h>

/**
 * main - Prints the numbers since 0 to 9
 *
 * Return: Always (Success)
 */
int main(void)
{
	char p;

	for (p = '0'; p <= '9'; p++)
	{
		putchar(p);
	}

	putchar('\n');

	return (0);
}
