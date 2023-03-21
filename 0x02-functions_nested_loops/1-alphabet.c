#include "main.h"

void print_alphabet(void);

/**
 * main - check the code
 *
 * Return: Always (0)
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - prints all
 *
 * Return: void
 */
void print_alphabet(void)
{
	for (char c = 'a'; c <= 'z'; c++)
	{
		_putchchar(c);
	}
	_putchar('\n');
}

