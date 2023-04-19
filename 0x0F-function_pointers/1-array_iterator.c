#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - func
 * @array: param a
 * @size: param b
 * @action: action
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
