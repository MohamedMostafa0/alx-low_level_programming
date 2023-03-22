#include "main.h"

/**
 * print_last_digit - print
 * @c: check int
 * Return: int
 */
int print_last_digit(int c)
{
	int last;

	last = c % 10;
	if (last < 0)
		last *= -1;
	_putchar(last + '0');
	return (last);
}


