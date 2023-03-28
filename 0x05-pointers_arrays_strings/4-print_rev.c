#include "main.h"

/**
 * print_rev - check the code.
 * @s: param
 */
void print_rev(char *s)
{
	int len = _strlen(s), i;

	for (i = len; i >= 0; i--)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}

