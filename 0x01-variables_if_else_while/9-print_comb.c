#include <stdio.h>

/**
 * main -prints all possible combinations of single-digit numbers
 *
 * Return:  Success
 */
int main(void)
{
	int s;

	for (s = '0'; s <= '9'; s++)
	{
		putchar(s);

		if (s != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
