#include <main.h>

/**
 * _isalpha - check if char is alpha
 * @c: check char
 * Return: int
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= (97 + 25)) || (c >= 65 || c < (65 + 25)) ? 1 : 0);
}


