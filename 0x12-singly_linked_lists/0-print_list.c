#include "lists.h"

/**
 * print_list - func
 * @h: param a
 * Return: size
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		if (h->str == null)
			printf("[0] (nil)");
		else
			printf("%s", h->str);
		size++;
	}
	return (size);
}
