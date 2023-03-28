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

	if (i % 2 == 0)
		i /= 2;
	else
		i = (i - 1) / 2;

	for (; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar(str[i]);
}

