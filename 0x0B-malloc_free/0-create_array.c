#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - check the code.
 * @size: param a
 * @c: param b
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;

	arr = malloc(sizeof(char) * size);

	if (size == 0 || arr == NULL)
		return (NULL);
	return (arr);
}

