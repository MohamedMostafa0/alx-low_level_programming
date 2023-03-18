#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (succes)
 *
 */

int main(void)
{
	unsigned char c = 'z';

	for (; c >=  'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

