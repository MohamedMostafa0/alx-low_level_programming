#include "main.h"

/**
 * print_number - prints an integer;
 * @n: integer to be printed;
 */
void print_number(int n)
{
	if (n < 0)
		_putchar('-');

	while (n > 0)
	{
		_putchar((n % 10) + '0');
		n /= 10;
	}
}

