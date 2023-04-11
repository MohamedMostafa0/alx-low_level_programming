#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - func
 * @s1: param a
 * @s2: param b
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *res;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	if (s1 != NULL)
		while (s1[i] != '\0')
			i++;
	if (s2 != NULL)
		while (s2[i] != '\0')
			i++;

	res = malloc(sizeof(char) * i + 1);

	if (res == NULL)
		return (NULL);

	i = 0;
	if (s1 != NULL)
	{
		while (s1[i] != '\0')
		{
			res[i] = s1[i];
			i++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[j] != '\0')
		{
			res[i] = s2[j];
			j++;
			i++;
		}
	}
	res[i] = '\0';
	return (res);
}

