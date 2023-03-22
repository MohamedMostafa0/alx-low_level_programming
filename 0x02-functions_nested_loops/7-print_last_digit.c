#include "main.h"

/**
 * print_last_digit - print
 * @c: check int
 * Return: int
 */
int print_last_digit(int c)
{
	int last;

	last = (c < 0 ? (c * -1) : c) % 10;
	_putchar(last + '0');
	return (last);
}


