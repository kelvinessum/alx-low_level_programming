#include <stdio.h>
/**
 * main - Prints first 50 Fibonacci numbers
 *
 *
 * Return: Always (Success).
 */


int main(void)
{
	int a;
	unsigned long f1 = 0, f2 = 1, add;

	for (a = 0; a < 50; a++)
	{
		add = f1 + f2;
		printf("%lu", add);

		f1 = f2;
		f2 = add;

		if (a == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
