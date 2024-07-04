#include "main.h"

/**
*  reverse_array - reverse content of an array
*  @a: array
*  @n: number of elements of the array
*/

void reverse_array(int *a, int n)
{
	int rev, index;
	for (index = n - 1; index > n / 2; index--)
	{
		rev = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = rev;
	}
}
