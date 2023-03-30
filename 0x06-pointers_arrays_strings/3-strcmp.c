#include "main.h"

/**
 * reverse_array - func
 * @a: a - Variable
 * @n: b variable
 * Return: return
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	n -= 1;

	while (a < n)
	{
		a[i] += a[n];
		a[n] = a[i] - a[n];
		a[i] -= a[n];

		i++;
		n--;
	}
}

