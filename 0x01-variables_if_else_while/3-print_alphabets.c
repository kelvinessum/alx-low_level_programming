#include <stdio.h>

/**
 * main - prints alphabets in lower and upper case
 *
 *return : success
 */
int main(void)
{
	char e;
	for (e = 'a'; e<= 'z'; e++)
	{
		putchar(e);
	}

	for (e = 'A'; e<='Z'; e++)
	{
		putchar(e);
	}
	putchar('\n');

	return (0);
}
