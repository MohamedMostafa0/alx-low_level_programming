#include "main.h"

/**
 * _puts - check the code.
 * @str: param
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}

