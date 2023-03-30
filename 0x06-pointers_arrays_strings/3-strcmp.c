#include "main.h"

/**
 * _strcmp - func
 * @s1: a - Variable
 * @s2: b variable
 * Return: return
 */
int _strcmp(char *s1, char *s2)
{
	char res;
	int i;

	for (i = 0; s1[i] != '\0'; i++)
		res += s1[i];

	for (i = 0; s2[i] != '\0'; i++)
		res -= s2[i];

	return res;
}

