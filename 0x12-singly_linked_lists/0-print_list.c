#include <stdio.h>
#include "lists.h"

/**
 * print_list - check the code.
 *
 * @h: check the paramter.
 *
 * Return: check the code.
 *
 */

size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
