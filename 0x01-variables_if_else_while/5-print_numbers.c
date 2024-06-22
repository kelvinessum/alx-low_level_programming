#include <stdio.h>
/**
 *main - print all single digit numbers of base 10 starting from 0
 *
 *result - sucess
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
