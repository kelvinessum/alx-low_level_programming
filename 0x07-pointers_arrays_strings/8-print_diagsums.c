#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square
 *                                   matrix of integers
 *
 * @a: the name of the array
 * @size: the size of the array
 *
 * Return: always success
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = size - 1;
	int s1 = 0;
	int s2 = 0;

	while (i <= (size * size))
	{
		s1 = s1 + a[i];
		i = i + size + 1;
	}

	while (j < (size * size - 1))
	{
		s2 += a[j];
		j = j + size - 1;
	}

	printf("%d, %d\n", s1, s2);
}
