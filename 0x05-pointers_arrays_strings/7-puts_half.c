#include "main.h"

/**
 * puts_half - func
 * @str: string param
 */
void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	i /= 2;

	for (; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}

