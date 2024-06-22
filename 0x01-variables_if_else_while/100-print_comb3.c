#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Success
 */
int main(void)
{
	int a, b;

	a = b = '0';

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			putchar(a);
			putchar(b);

			if ((a != '9') || (a == '9' && b != '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
