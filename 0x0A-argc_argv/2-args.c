#include <stdio.h>
#include "main.h"

/**
 * main - main func
 * @argc: a
 * @argv: b array
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argc[i]);
	}
	return (0);
}

