#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - main
 *
 * @h: input
 *
 * Return: output
 *
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
