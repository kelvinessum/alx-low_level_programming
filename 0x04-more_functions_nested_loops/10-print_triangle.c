#include "main.h"
/**
 * print_triangle - Prints triangle followed by new line
 *
 *@size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = size - a; b >= 1; b--)
			{
				_putchar(' ');
			}
			for (c = 1; c <= a; a++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
