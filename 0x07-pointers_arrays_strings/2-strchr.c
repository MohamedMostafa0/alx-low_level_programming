#include "main.h"

/**
 * _strchr - func
 * @s: a - Variable
 * @c: b - Variable
 * Return: return
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}

