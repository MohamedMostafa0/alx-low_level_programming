#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (succes)
 *
 */

int main(void)
{
	unsigned char c = '0';

	for (; c <= '9'; c++)
	{
		putchar(c);
	}
	c = 'a';
	for (; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

