#include <stdio.h>

/**
 * print_to_98 -prints all natural numbers from input to 98,
 *
 * n: The number to begin counting at.
 */
void print_to_98(int a)
{
	if (a >= 98)
	{
		while (a > 98)
			printf("%d, ", a--);
		printf("%d\n", a);
	}

	else
	{
		while (a < 98)
			printf("%d, ", a++);
		printf("%d\n", a);
	}
}
