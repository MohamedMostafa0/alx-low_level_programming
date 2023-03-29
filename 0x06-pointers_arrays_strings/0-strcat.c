#include "main.h"
/**
 * _strcat - func
 * @dest: a - Variable
 * @src: b - variable
 * Return: return
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (dest[i] != '\0')
		i++;

	*(dest + i) = src;

	return (dest);
}

