#include <stdio.h>
/**
 *main - prints all letters except q and e
 *
 *results - success
 */
int main(void)
{
	char e;
	for (e = 'a'; e<='z'; e++)
	{
		if (e != 'e' && e != 'q')
		{
			putchar(e);
		}
	}
	putchar('\n');
	return (0);
}
