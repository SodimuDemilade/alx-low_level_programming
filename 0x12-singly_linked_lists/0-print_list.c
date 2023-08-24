#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - main
 *
 * @h: input
 *
 * Return: number of nodes
 *
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			count++;
			h = h->next;
		}
		printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
