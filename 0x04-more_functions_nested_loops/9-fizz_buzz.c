#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: prints the numbers 1 to 100 followed by new line
 * Prints Fizz for multiples of 3,
 * Prints Buzz for multiples of 5,
 * Prints FizzBuzz for multiples of both 3 and 5
 *
 * Return: void
 */
int main(void)
{
	int m;

	for (m = 1; m <= 100; m++)
	{
		if (m % 15 == 0)
			printf("FizzBuzz");

		else if (m % 3 == 0)
			printf("Fizz");

		else if (m % 5 == 0)
			printf("Buzz");

		else
			printf("%i", m);

		if (m < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
