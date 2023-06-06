#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint - check the code.
 *
 * @h: check the parameter.
 *
 * Return: check the code.
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
