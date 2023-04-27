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
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		size++;
		h = h->next;
	}
	return (size);
}
