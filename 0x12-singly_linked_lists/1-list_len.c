#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * list_len - check the code.
 *
 * @h: check the parameter.
 *
 * Return: returns length of linked list.
 *
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
