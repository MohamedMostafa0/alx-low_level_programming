#include "main.h"

/**
 * _strncpy - func
 * @dest: a - Variable
 * @src: b - variable
 * @n: c - variable
 * Return: return
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (dest[i] != '\0')
		i++;

	if (i < n)
		dest[n] = '\0';

	return (dest);
}

