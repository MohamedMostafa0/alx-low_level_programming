#include "main.h"

/**
 * print_rev - check the code.
 * @s: param
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		i++;

	i--;

	for (i = len; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}

