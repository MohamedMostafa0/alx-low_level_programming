#include "main.h"

/**
 * rev_string - func
 * @s: string to be printed
 */
void rev_string(char *s)
{
	int i = 0, a = 0;

	while (*(s + i) != '\0')
		i++;

	i--;

	while (a < i)
	{
		char temp = *(s + a);
		*(s + a) = *(s + i);
		*(s + i) = temp;
	}
}

