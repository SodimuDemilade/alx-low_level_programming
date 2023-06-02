#include <stdio.h>
#include <string.h>
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
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%lu] %s\n", strlen(h->str), h->str);

		h = h->next;
		count++;
	}
	return (count);
}
