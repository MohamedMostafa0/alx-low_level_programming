#include "main.h"

/**
 * puts2 - prints a string in reverse, followed by a new line
 * @str: string param
 */
void puts2(char *str)
{
	int i = 0;

	for (; i != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
	}
}

